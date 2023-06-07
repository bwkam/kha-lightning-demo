package;

import kha.Color;
import zui.Zui.Handle;
import haxe.macro.Expr;
import pipelines.LightCubePipeline;
import kha.math.FastVector3;
import kha.math.Matrix4;
import kha.math.FastMatrix4;
import kha.Scheduler;
import kha.System;
import kha.Framebuffer;
import pipelines.TextureCubePipeline;
import kha.Assets;
import zui.*;

class Scene {
	// that's our cube
	public var cube:TextureCubePipeline;
	public var lightCube:LightCubePipeline;
	public var proj:FastMatrix4;
	public var cubePositions:Array<Array<Float>>;
	public var pointLightPositions:Array<Array<Float>>;
	public var ui:Zui;

	public var dirLightAmbient:Handle;
	public var dirLightDiffuse:Handle;
	public var dirLightSpecular:Handle;
	public var dirLightActive:Handle;
	public var dirLightColor:Handle;
	public var dirLightColorV:Color;
	public var dirLightX:Handle;
	public var dirLightY:Handle;
	public var dirLightZ:Handle;

	public var pointLightAmbient:Handle;
	public var pointLightDiffuse:Handle;
	public var pointLightSpecular:Handle;
	public var pointLightActive:Handle;
	public var pointLightColor:Handle;
	public var pointLightColorV:Color;
	public var pointLightX:Handle;
	public var pointLightY:Handle;
	public var pointLightZ:Handle;
	public var pointLightActive1:Handle;
	public var pointLightActive2:Handle;
	public var pointLightActive3:Handle;
	public var pointLightActive4:Handle;

	public var spotLightAmbient:Handle;
	public var spotLightDiffuse:Handle;
	public var spotLightSpecular:Handle;
	public var spotLightActive:Handle;
	public var spotLightColor:Handle;
	public var spotLightColorV:Color;
	public var spotLightX:Handle;
	public var spotLightY:Handle;
	public var spotLightZ:Handle;

	public function new() {
		// once the assets are loaded, we let kha call that function
		Assets.loadEverything(loadEverything);
	}

	public function loadEverything() {
		cube = new TextureCubePipeline();
		lightCube = new LightCubePipeline();
		proj = FastMatrix4.perspectiveProjection(45.0, 4.0 / 3.0, 0.1, 100.0);
		ui = new Zui({
			font: Assets.fonts.DroidSans,
			color_wheel: Assets.images.color_wheel,
			black_white_gradient: Assets.images.black_white_gradient
		});
		dirLightAmbient = Id.handle();
		dirLightDiffuse = Id.handle();
		dirLightSpecular = Id.handle();
		dirLightActive = Id.handle();
		dirLightColor = Id.handle();
		dirLightColorV = Red;
		dirLightX = Id.handle();
		dirLightY = Id.handle();
		dirLightZ = Id.handle();
		pointLightAmbient = Id.handle();
		pointLightDiffuse = Id.handle();
		pointLightSpecular = Id.handle();
		pointLightActive = Id.handle();
		pointLightColor = Id.handle();
		pointLightColorV = Red;

		pointLightActive1 = Id.handle();
		pointLightActive2 = Id.handle();
		pointLightActive3 = Id.handle();
		pointLightActive4 = Id.handle();

		pointLightX = Id.handle();
		pointLightY = Id.handle();
		pointLightZ = Id.handle();
		spotLightAmbient = Id.handle();
		spotLightDiffuse = Id.handle();
		spotLightSpecular = Id.handle();
		spotLightColor = Id.handle();
		spotLightColorV = Red;
		spotLightActive = Id.handle();
		cubePositions = [
			[0.0, 0.0, 0.0], [2.0, 5.0, -15.0], [-1.5, -2.2, -2.5], [-3.8, -2.0, -12.3], [2.4, -0.4, -3.5], [-1.7, 3.0, -7.5], [1.3, -2.0, -2.5],
			[1.5, 2.0, -2.5], [1.5, 0.2, -1.5], [-1.3, 1.0, -1.5]];
		pointLightPositions = [[0.7, 0.2, 2.0], [2.3, -3.3, -4.0], [-4.0, 2.0, -12.0], [0.0, 0.0, -3.0]];
		System.notifyOnFrames(render);
		Scheduler.addTimeTask(update, 0, 1 / 60);
		// Add mouse and keyboard listeners
		kha.input.Mouse.get().notify(Camera.onMouseDown, Camera.onMouseUp, Camera.onMouseMove, null);
		kha.input.Keyboard.get().notify(Camera.onKeyDown, Camera.onKeyUp);
	}

	public function update() {
		Camera.update();
	}

	public function render(frames:Array<Framebuffer>) {
		// A graphics object which lets us perform 3D operations
		var g = frames[0].g4;
		var g2 = frames[0].g2;

		// Begin rendering
		g.begin();

		// Clear screen
		g.clear(Color.fromFloats(0.0, 0.0, 0.0), 1.0);

		// Bind state we want to draw with

		for (i in 0...cubePositions.length) {
			var angle = 20.0 * i;
			var model = FastMatrix4.identity();
			model = FastMatrix4.translation(cubePositions[i][0], cubePositions[i][1], cubePositions[i][2]);

			model = MatrixUtils.rotateMatrix4(model, angle, new FastVector3(1.0, 0.3, 0.5));

			cube.render(g, {
				view: Camera.view,
				proj: proj,
				model: model,
				material: {
					shininess: 32.0,
				},
				light: {
					dirLight: {
						active: dirLightActive.selected,
						direction: [dirLightX.value, dirLightY.value, dirLightZ.value],
						ambient: [
							dirLightColorV.R * dirLightAmbient.value,
							dirLightColorV.G * dirLightAmbient.value,
							dirLightColorV.B * dirLightAmbient.value
						],
						diffuse: [
							dirLightColorV.R * dirLightDiffuse.value,
							dirLightColorV.G * dirLightDiffuse.value,
							dirLightColorV.B * dirLightDiffuse.value
						],
						specular: [dirLightSpecular.value, dirLightSpecular.value, dirLightSpecular.value],
					},
					pointLights: [
						{
							active: pointLightActive1.selected,
							position: pointLightPositions[0],
							ambient: [
								pointLightColorV.R * pointLightAmbient.value,
								pointLightColorV.G * pointLightAmbient.value,
								pointLightColorV.B * pointLightAmbient.value
							],
							diffuse: [
								pointLightColorV.R * pointLightDiffuse.value,
								pointLightColorV.G * pointLightDiffuse.value,
								pointLightColorV.B * pointLightDiffuse.value
							],
							specular: [pointLightSpecular.value, pointLightSpecular.value, pointLightSpecular.value],
							constant: 1.0,
							linear: 0.09,
							quadratic: 0.032,
						},
						{
							active: pointLightActive2.selected,
							position: pointLightPositions[1],
							ambient: [
								pointLightColorV.R * pointLightAmbient.value,
								pointLightColorV.G * pointLightAmbient.value,
								pointLightColorV.B * pointLightAmbient.value
							],
							diffuse: [
								pointLightColorV.R * pointLightDiffuse.value,
								pointLightColorV.G * pointLightDiffuse.value,
								pointLightColorV.B * pointLightDiffuse.value
							],
							specular: [pointLightSpecular.value, pointLightSpecular.value, pointLightSpecular.value],
							constant: 1.0,
							linear: 0.09,
							quadratic: 0.032,
						},
						{
							active: pointLightActive3.selected,
							position: pointLightPositions[2],
							ambient: [
								pointLightColorV.R * pointLightAmbient.value,
								pointLightColorV.G * pointLightAmbient.value,
								pointLightColorV.B * pointLightAmbient.value
							],
							diffuse: [
								pointLightColorV.R * pointLightDiffuse.value,
								pointLightColorV.G * pointLightDiffuse.value,
								pointLightColorV.B * pointLightDiffuse.value
							],
							specular: [pointLightSpecular.value, pointLightSpecular.value, pointLightSpecular.value],
							constant: 1.0,
							linear: 0.09,
							quadratic: 0.032,
						},
						{
							active: pointLightActive4.selected,
							position: pointLightPositions[3],
							ambient: [
								pointLightColorV.R * pointLightAmbient.value,
								pointLightColorV.G * pointLightAmbient.value,
								pointLightColorV.B * pointLightAmbient.value
							],
							diffuse: [
								pointLightColorV.R * pointLightDiffuse.value,
								pointLightColorV.G * pointLightDiffuse.value,
								pointLightColorV.B * pointLightDiffuse.value
							],
							specular: [pointLightSpecular.value, pointLightSpecular.value, pointLightSpecular.value],
							constant: 1.0,
							linear: 0.09,
							quadratic: 0.032,
						}
					],
					spotLight: {
						active: spotLightActive.selected,
						position: [Camera.position.x, Camera.position.y, Camera.position.z],
						direction: [Camera.look.x, Camera.look.y, Camera.look.z],
						ambient: [
							spotLightColorV.R * spotLightAmbient.value,
							spotLightColorV.G * spotLightAmbient.value,
							spotLightColorV.B * spotLightAmbient.value
						],
						diffuse: [
							spotLightColorV.R * spotLightDiffuse.value,
							spotLightColorV.G * spotLightDiffuse.value,
							spotLightColorV.B * spotLightDiffuse.value
						],
						specular: [spotLightSpecular.value, spotLightSpecular.value, spotLightSpecular.value],
						constant: 1.0,
						linear: 0.09,
						quadratic: 0.032,
						cutOff: Math.cos(12.5 * Math.PI / 180),
						outerCutOff: Math.cos(15.0 * Math.PI / 180),
					}
				},
			});
		}

		for (i in 0...pointLightPositions.length) {
			var model = FastMatrix4.identity();
			model = FastMatrix4.translation(pointLightPositions[i][0], pointLightPositions[i][1], pointLightPositions[i][2]);

			lightCube.render(g, {
				view: Camera.view,
				proj: proj,
				model: model,
			});
		}

		// End rendering
		g.end();

		ui.begin(g2);
		// window() returns true if redraw is needed - windows are cached into textures
		if (ui.window(Id.handle(), 10, 10, 240, 600, true)) {
			if (ui.panel(Id.handle({selected: true}), "Light")) {
				ui.indent();
				if (ui.panel(Id.handle({selected: false}), "Directional Light")) {
					ui.indent();
					ui.check(dirLightActive, "active", "active");
					ui.slider(dirLightAmbient, "ambient", 0, 5, true);
					ui.slider(dirLightDiffuse, "diffuse", 0, 5, true);
					ui.slider(dirLightSpecular, "specular", 0, 5, true);
					ui.row([1 / 3, 1 / 3, 1 / 3]);
					ui.slider(dirLightX, "x", -0.2, 3, true);
					ui.slider(dirLightY, "y", -1.0, 3, true);
					ui.slider(dirLightZ, "z", -0.3, 3, true);
					dirLightColorV = Ext.colorWheel(ui, dirLightColor);
					ui.unindent();
				}
				ui.separator();
				ui.unindent();

				ui.indent();
				if (ui.panel(Id.handle({selected: false}), "SpotLight")) {
					ui.indent();
					ui.check(spotLightActive, "active", "active");
					ui.slider(spotLightAmbient, "ambient", 0, 5, true);
					ui.slider(spotLightDiffuse, "diffuse", 0, 5, true);
					ui.slider(spotLightSpecular, "specular", 0, 5, true);
					spotLightColorV = Ext.colorWheel(ui, dirLightColor);
					ui.unindent();
				}

				ui.separator();
				ui.unindent();

				ui.indent();
				if (ui.panel(Id.handle({selected: false}), "PointLights")) {
					ui.indent();

					ui.check(pointLightActive1, "active1", "active1");
					ui.check(pointLightActive2, "active2", "active2");
					ui.check(pointLightActive3, "active3", "active3");
					ui.check(pointLightActive4, "active4", "active4");

					ui.slider(pointLightAmbient, "ambient", 0, 5, true);
					ui.slider(pointLightDiffuse, "diffuse", 0, 5, true);
					ui.slider(pointLightSpecular, "specular", 0, 5, true);
					pointLightColorV = Ext.colorWheel(ui, dirLightColor);
					ui.unindent();
				}

				ui.separator();
				ui.unindent();
			}
		}

		ui.end();
	}
}
