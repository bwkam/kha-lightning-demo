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

typedef Material = {
	var shininess:Float;
}

typedef Light = {
	var dirLight:DirLight;
	var pointLights:Array<PointLight>;
	var spotLight:SpotLight;
}

typedef DirLight = {
	var active:Bool;
	var direction:Array<Float>;
	var ambient:Array<Float>;
	var diffuse:Array<Float>;
	var specular:Array<Float>;
}

typedef PointLight = {
	var active:Bool;
	var ambient:Array<Float>;
	var diffuse:Array<Float>;
	var specular:Array<Float>;

	var constant:Float;
	var linear:Float;
	var quadratic:Float;
	var position:Array<Float>;
}

typedef SpotLight = {
	> DirLight,
	> PointLight,
	var cutOff:Float;
	var outerCutOff:Float;
	var active:Bool;
}

typedef TParams = {
	var model:FastMatrix4;
	var view:FastMatrix4;
	var proj:FastMatrix4;
	var material:Material;
	var light:Light;
}

class TextureCubePipeline {
	var pipeline:PipelineState;
	var mvpID:ConstantLocation;

	var projID:ConstantLocation;
	var viewID:ConstantLocation;
	var modelID:ConstantLocation;

	// material struct
	var materialShininessID:ConstantLocation;

	var diffuseMapID:TextureUnit;
	var diffuseMap:Image;

	var specularMapID:TextureUnit;
	var specularMap:Image;

	// dir light
	var dirLightDirectionID:ConstantLocation;
	var dirLightAmbientID:ConstantLocation;
	var dirLightDiffuseID:ConstantLocation;
	var dirLightSpecularID:ConstantLocation;
	var dirLightEnabledID:ConstantLocation;

	// spotlight
	var spotLightPositionID:ConstantLocation;
	var spotLightDirectionID:ConstantLocation;
	var spotLightAmbientID:ConstantLocation;
	var spotLightDiffuseID:ConstantLocation;
	var spotLightSpecularID:ConstantLocation;
	var spotLightConstantID:ConstantLocation;
	var spotLightLinearID:ConstantLocation;
	var spotLightQuadraticID:ConstantLocation;
	var spotLightCutOffID:ConstantLocation;
	var spotLightOuterCutOffID:ConstantLocation;
	var spotLightEnabledID:ConstantLocation;

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

		static var normals = [
			 0.0,  0.0, -1.0,
			 0.0,  0.0, -1.0,
			 0.0,  0.0, -1.0,
			 0.0,  0.0, -1.0,
			 0.0,  0.0, -1.0,
			 0.0,  0.0, -1.0,
			 0.0,  0.0,  1.0,
			 0.0,  0.0,  1.0,
			 0.0,  0.0,  1.0,
			 0.0,  0.0,  1.0,
			 0.0,  0.0,  1.0,
			 0.0,  0.0,  1.0,
			-1.0,  0.0,  0.0,
			-1.0,  0.0,  0.0,
			-1.0,  0.0,  0.0,
			-1.0,  0.0,  0.0,
			-1.0,  0.0,  0.0,
			-1.0,  0.0,  0.0,
			 1.0,  0.0,  0.0,
			 1.0,  0.0,  0.0,
			 1.0,  0.0,  0.0,
			 1.0,  0.0,  0.0,
			 1.0,  0.0,  0.0,
			 1.0,  0.0,  0.0,
			 0.0, -1.0,  0.0,
			 0.0, -1.0,  0.0,
			 0.0, -1.0,  0.0,
			 0.0, -1.0,  0.0,
			 0.0, -1.0,  0.0,
			 0.0, -1.0,  0.0,
			 0.0,  1.0,  0.0,
			 0.0,  1.0,  0.0,
			 0.0,  1.0,  0.0,
			 0.0,  1.0,  0.0,
			 0.0,  1.0,  0.0,
			 0.0,  1.0,  0.0
		];

		static var uvs = [
			0.0, 0.0,
			1.0, 0.0,
			1.0, 1.0,
			1.0, 1.0,
			0.0, 1.0,
			0.0, 0.0,
			0.0, 0.0,
			1.0, 0.0,
			1.0, 1.0,
			1.0, 1.0,
			0.0, 1.0,
			0.0, 0.0,
			1.0, 0.0,
			1.0, 1.0,
			0.0, 1.0,
			0.0, 1.0,
			0.0, 0.0,
			1.0, 0.0,
			1.0, 0.0,
			1.0, 1.0,
			0.0, 1.0,
			0.0, 1.0,
			0.0, 0.0,
			1.0, 0.0,
			0.0, 1.0,
			1.0, 1.0,
			1.0, 0.0,
			1.0, 0.0,
			0.0, 0.0,
			0.0, 1.0,
			0.0, 1.0,
			1.0, 1.0,
			1.0, 0.0,
			1.0, 0.0,
			0.0, 0.0,
			0.0, 1.0
		];

		var structure = new VertexStructure();
		structure.add("aPos", VertexData.Float3);
		structure.add("aNormal", VertexData.Float3);
		structure.add("aTexCoords", VertexData.Float2);
		// Save length - we store position and uv data
		var structureLength = 8;

		pipeline = new PipelineState();
		pipeline.inputLayout = [structure];
		pipeline.vertexShader = Shaders.cube_vert;
		pipeline.fragmentShader = Shaders.cube_frag;
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

		// material
		materialShininessID = pipeline.getConstantLocation("material.shininess");

		diffuseMapID = pipeline.getTextureUnit("material.diffuse");
		specularMapID = pipeline.getTextureUnit("material.specular");

		// dir light
		dirLightDirectionID = pipeline.getConstantLocation("dirLight.direction");
		dirLightAmbientID = pipeline.getConstantLocation("dirLight.ambient");
		dirLightDiffuseID = pipeline.getConstantLocation("dirLight.diffuse");
		dirLightSpecularID = pipeline.getConstantLocation("dirLight.specular");
		dirLightEnabledID = pipeline.getConstantLocation("dirLight.enabled");

		// spot light
		spotLightPositionID = pipeline.getConstantLocation("spotLight.position");
		spotLightDirectionID = pipeline.getConstantLocation("spotLight.direction");
		spotLightAmbientID = pipeline.getConstantLocation("spotLight.ambient");
		spotLightDiffuseID = pipeline.getConstantLocation("spotLight.diffuse");
		spotLightSpecularID = pipeline.getConstantLocation("spotLight.specular");
		spotLightConstantID = pipeline.getConstantLocation("spotLight.constant");
		spotLightLinearID = pipeline.getConstantLocation("spotLight.linear");
		spotLightQuadraticID = pipeline.getConstantLocation("spotLight.quadratic");
		spotLightCutOffID = pipeline.getConstantLocation("spotLight.cutOff");
		spotLightOuterCutOffID = pipeline.getConstantLocation("spotLight.outerCutOff");
		spotLightEnabledID = pipeline.getConstantLocation("spotLight.enabled");

		// Texture
		diffuseMap = Assets.images.container2;
		specularMap = Assets.images.specular;

		// Create vertex buffer
		vertexBuffer = new VertexBuffer(Std.int(vertices.length / 3), // Vertex count - 3 floats per vertex
			structure, // Vertex structure
			Usage.StaticUsage // Vertex data will stay the same
		);

		var vbData = vertexBuffer.lock();
		for (i in 0...Std.int(vbData.length / structureLength)) {
			// vertices
			vbData.set(i * structureLength, vertices[i * 3]);
			vbData.set(i * structureLength + 1, vertices[i * 3 + 1]);
			vbData.set(i * structureLength + 2, vertices[i * 3 + 2]);

			// normals
			vbData.set(i * structureLength + 3, normals[i * 3]);
			vbData.set(i * structureLength + 4, normals[i * 3 + 1]);
			vbData.set(i * structureLength + 5, normals[i * 3 + 2]);

			// texture uvs
			vbData.set(i * structureLength + 6, uvs[i * 2]);
			vbData.set(i * structureLength + 7, uvs[i * 2 + 1]);
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

	public function render(g:Graphics, params:TParams) {
		// Bind state we want to draw with
		g.setPipeline(pipeline);

		// Bind data we want to draw
		g.setVertexBuffer(vertexBuffer);
		g.setIndexBuffer(indexBuffer);

		// Set our transformation to the currently bound shader, in the "MVP" uniform
		g.setMatrix(projID, params.proj);
		g.setMatrix(modelID, params.model);
		g.setMatrix(viewID, params.view);

		// shininess
		g.setFloat(materialShininessID, params.material.shininess);

		// point lights

		for (i in 0...4) {
			for (prop in [
				'ambient',
				'position',
				'specular',
				'diffuse',
				'constant',
				'linear',
				'quadratic',
				'enabled'
			]) {
				switch prop {
					case 'ambient':
						g.setFloat3(pipeline.getConstantLocation('pointLights[$i].${prop}'), params.light.pointLights[i].ambient[0],
							params.light.pointLights[i].ambient[1], params.light.pointLights[i].ambient[2]);
					case 'position':
						g.setFloat3(pipeline.getConstantLocation('pointLights[$i].${prop}'), params.light.pointLights[i].position[0],
							params.light.pointLights[i].position[1], params.light.pointLights[i].position[2]);
					case 'specular':
						g.setFloat3(pipeline.getConstantLocation('pointLights[$i].${prop}'), params.light.pointLights[i].specular[0],
							params.light.pointLights[i].specular[1], params.light.pointLights[i].specular[2]);
					case 'diffuse':
						g.setFloat3(pipeline.getConstantLocation('pointLights[$i].${prop}'), params.light.pointLights[i].diffuse[0],
							params.light.pointLights[i].diffuse[1], params.light.pointLights[i].diffuse[2]);
					case 'constant':
						g.setFloat(pipeline.getConstantLocation('pointLights[$i].${prop}'), params.light.pointLights[i].constant);
					case 'linear':
						g.setFloat(pipeline.getConstantLocation('pointLights[$i].${prop}'), params.light.pointLights[i].linear);
					case 'quadratic':
						g.setFloat(pipeline.getConstantLocation('pointLights[$i].${prop}'), params.light.pointLights[i].quadratic);
					case 'enabled':
						g.setBool(pipeline.getConstantLocation('pointLights[$i].${prop}'), params.light.pointLights[i].active);
				}
			}
		}

		// dir light
		g.setFloat3(dirLightDirectionID, params.light.dirLight.direction[0], params.light.dirLight.direction[1], params.light.dirLight.direction[2]);
		g.setFloat3(dirLightAmbientID, params.light.dirLight.ambient[0], params.light.dirLight.ambient[1], params.light.dirLight.ambient[2]);
		g.setFloat3(dirLightDiffuseID, params.light.dirLight.diffuse[0], params.light.dirLight.diffuse[1], params.light.dirLight.diffuse[2]);
		g.setFloat3(dirLightSpecularID, params.light.dirLight.specular[0], params.light.dirLight.specular[1], params.light.dirLight.specular[2]);
		g.setBool(dirLightEnabledID, params.light.dirLight.active);

		// spotlight
		g.setFloat3(spotLightPositionID, params.light.spotLight.position[0], params.light.spotLight.position[1], params.light.spotLight.position[2]);
		g.setFloat3(spotLightDirectionID, params.light.spotLight.direction[0], params.light.spotLight.direction[1], params.light.spotLight.direction[2]);
		g.setFloat3(spotLightAmbientID, params.light.spotLight.ambient[0], params.light.spotLight.ambient[1], params.light.spotLight.ambient[2]);
		g.setFloat3(spotLightDiffuseID, params.light.spotLight.diffuse[0], params.light.spotLight.diffuse[1], params.light.spotLight.diffuse[2]);
		g.setFloat3(spotLightSpecularID, params.light.spotLight.specular[0], params.light.spotLight.specular[1], params.light.spotLight.specular[2]);
		g.setBool(spotLightEnabledID, params.light.spotLight.active);

		g.setFloat(spotLightConstantID, params.light.spotLight.constant);
		g.setFloat(spotLightLinearID, params.light.spotLight.linear);
		g.setFloat(spotLightQuadraticID, params.light.spotLight.quadratic);

		g.setFloat(spotLightCutOffID, params.light.spotLight.cutOff);
		g.setFloat(spotLightOuterCutOffID, params.light.spotLight.outerCutOff);

		g.setTexture(diffuseMapID, diffuseMap);
		g.setTextureParameters(diffuseMapID, kha.graphics4.TextureAddressing.Clamp, kha.graphics4.TextureAddressing.Clamp,
			kha.graphics4.TextureFilter.LinearFilter, kha.graphics4.TextureFilter.LinearFilter, kha.graphics4.MipMapFilter.NoMipFilter);

		g.setTexture(specularMapID, specularMap);
		g.setTextureParameters(specularMapID, kha.graphics4.TextureAddressing.Clamp, kha.graphics4.TextureAddressing.Clamp,
			kha.graphics4.TextureFilter.LinearFilter, kha.graphics4.TextureFilter.LinearFilter, kha.graphics4.MipMapFilter.NoMipFilter);

		// Draw!
		g.drawIndexedVertices();
	}
}
