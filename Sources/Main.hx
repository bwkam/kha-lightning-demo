package;

import kha.System;

class Main {
	public static function main() {
		System.start({title: "Project", width: 640, height: 480}, function(_) {
			var scene = new Scene();
		});
	}
}
