package pipelines;

import kha.graphics4.Graphics;
import kha.Framebuffer;
import kha.Color;
import kha.Shaders;
import kha.Assets;
import kha.Image;
import kha.System;
import kha.graphics4.TextureUnit;
import kha.graphics4.PipelineState;
import kha.graphics4.VertexStructure;
import kha.graphics4.VertexBuffer;
import kha.graphics4.IndexBuffer;
import kha.graphics4.FragmentShader;
import kha.graphics4.VertexShader;
import kha.graphics4.VertexData;
import kha.graphics4.Usage;
import kha.graphics4.ConstantLocation;
import kha.graphics4.CompareMode;
import kha.math.FastMatrix4;
import kha.math.FastVector3;

typedef TLParams = {
	var model:FastMatrix4;
	var view:FastMatrix4;
	var proj:FastMatrix4;
}

class LightCubePipeline {
	var pipeline:PipelineState;
	var mvpID:ConstantLocation;

	var projID:ConstantLocation;
	var viewID:ConstantLocation;
	var modelID:ConstantLocation;

	var vertexBuffer:VertexBuffer;
	var indexBuffer:IndexBuffer;

	public function new() {
		static var vertices:Array<Float> = [
			-0.5, -0.5, -0.5,
			 0.5, -0.5, -0.5,
			 0.5,  0.5, -0.5,
			 0.5,  0.5, -0.5,
			-0.5,  0.5, -0.5,
			-0.5, -0.5, -0.5,

			-0.5, -0.5,  0.5,
			 0.5, -0.5,  0.5,
			 0.5,  0.5,  0.5,
			 0.5,  0.5,  0.5,
			-0.5,  0.5,  0.5,
			-0.5, -0.5,  0.5,

			-0.5,  0.5,  0.5,
			-0.5,  0.5, -0.5,
			-0.5, -0.5, -0.5,
			-0.5, -0.5, -0.5,
			-0.5, -0.5,  0.5,
			-0.5,  0.5,  0.5,

			 0.5,  0.5,  0.5,
			 0.5,  0.5, -0.5,
			 0.5, -0.5, -0.5,
			 0.5, -0.5, -0.5,
			 0.5, -0.5,  0.5,
			 0.5,  0.5,  0.5,

			-0.5, -0.5, -0.5,
			 0.5, -0.5, -0.5,
			 0.5, -0.5,  0.5,
			 0.5, -0.5,  0.5,
			-0.5, -0.5,  0.5,
			-0.5, -0.5, -0.5,

			-0.5,  0.5, -0.5,
			 0.5,  0.5, -0.5,
			 0.5,  0.5,  0.5,
			 0.5,  0.5,  0.5,
			-0.5,  0.5,  0.5,
			-0.5,  0.5, -0.5,
		];

		var structure = new VertexStructure();
		structure.add("aPos", VertexData.Float3);
		// Save length - we store position and uv data
		var structureLength = 3;

		pipeline = new PipelineState();
		pipeline.inputLayout = [structure];
		pipeline.vertexShader = Shaders.light_vert;
		pipeline.fragmentShader = Shaders.light_frag;
		// Set depth mode
		pipeline.depthWrite = true;
		pipeline.depthMode = CompareMode.Less;
		pipeline.colorAttachmentCount = 1;
		pipeline.colorAttachments[0] = kha.graphics4.TextureFormat.RGBA32;
		pipeline.depthStencilAttachment = kha.graphics4.DepthStencilFormat.Depth16;
		pipeline.compile();

		// Get a handle for our "MVP" uniform
		projID = pipeline.getConstantLocation("proj");
		viewID = pipeline.getConstantLocation("view");
		modelID = pipeline.getConstantLocation("model");

		// Create vertex buffer
		vertexBuffer = new VertexBuffer(Std.int(vertices.length / 3), // Vertex count - 3 floats per vertex
			structure, // Vertex structure
			Usage.StaticUsage // Vertex data will stay the same
		);

		var vbData = vertexBuffer.lock();
		for (i in 0...Std.int(vbData.length / structureLength)) {
			vbData.set(i * structureLength, vertices[i * 3]);
			vbData.set(i * structureLength + 1, vertices[i * 3 + 1]);
			vbData.set(i * structureLength + 2, vertices[i * 3 + 2]);
		}
		vertexBuffer.unlock();

		// A 'trick' to create indices for a non-indexed vertex data
		var indices:Array<Int> = [];
		for (i in 0...Std.int(vertices.length / 3)) {
			indices.push(i);
		}

		// Create index buffer
		indexBuffer = new IndexBuffer(indices.length, // Number of indices for our cube
			Usage.StaticUsage // Index data will stay the same
		);

		// Copy indices to index buffer
		var iData = indexBuffer.lock();
		for (i in 0...iData.length) {
			iData[i] = indices[i];
		}
		indexBuffer.unlock();
	}

	public function render(g:Graphics, params:TLParams) {
		// Bind data we want to draw
		g.setVertexBuffer(vertexBuffer);
		g.setIndexBuffer(indexBuffer);

		// Bind state we want to draw with
		g.setPipeline(pipeline);

		// Set our transformation to the currently bound shader, in the "MVP" uniform
		g.setMatrix(projID, params.proj);
		g.setMatrix(modelID, params.model);
		g.setMatrix(viewID, params.view);

		// Draw!
		g.drawIndexedVertices();
	}
}
