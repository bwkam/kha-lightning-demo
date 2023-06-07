import kha.math.FastVector3;
import kha.math.FastMatrix4;

class MatrixUtils {
	public static function rotateMatrix4(matrix:FastMatrix4, angle:Float, axis:FastVector3):FastMatrix4 {
		var cosAngle = Math.cos(angle);
		var sinAngle = Math.sin(angle);
		var oneMinusCos = 1.0 - cosAngle;

		var x = axis.x;
		var y = axis.y;
		var z = axis.z;

		var rotationMatrix = new FastMatrix4(cosAngle
			+ x * x * oneMinusCos, y * x * oneMinusCos
			+ z * sinAngle, x * z * oneMinusCos
			- y * sinAngle, 0,
			x * y * oneMinusCos
			- z * sinAngle, cosAngle
			+ y * y * oneMinusCos, y * z * oneMinusCos
			+ x * sinAngle, 0, x * z * oneMinusCos
			+ y * sinAngle,
			y * z * oneMinusCos
			- x * sinAngle, cosAngle
			+ z * z * oneMinusCos, 0, 0, 0, 0, 1);

		return matrix.multmat(rotationMatrix);
	}
}
