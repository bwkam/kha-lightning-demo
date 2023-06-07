let fs = require('fs');
let path = require('path');
let project = new Project('New Project');
project.version = '1.0';
project.addDefine('HXCPP_API_LEVEL=400');
project.addDefine('HXCPP_DEBUG', 'Debug');
project.addDefine('HXCPP_GC_GENERATIONAL');
project.targetOptions = {"html5":{},"flash":{},"android":{},"android_native":{},"ios":{},"xboxOne":{},"playStation4":{},"switch":{},"xboxSeriesXS":{},"playStation5":{},"stadia":{}};
project.setDebugDir('build/linux');
await project.addProject('/home/ryn/.vscode-oss/extensions/kodetech.kha-23.5.0-universal/Kha/Kinc');
await project.addProject('build/linux-build');
await project.addProject('/home/ryn/.vscode-oss/extensions/kodetech.kha-23.5.0-universal/Kha/Backends/Kinc-hxcpp');
if (fs.existsSync(path.join('/home/ryn/kha/Lightning/Lightning/Libraries/zui', 'kfile.js')) || fs.existsSync(path.join('/home/ryn/kha/Lightning/Lightning/Libraries/zui', 'kincfile.js')) || fs.existsSync(path.join('/home/ryn/kha/Lightning/Lightning/Libraries/zui', 'korefile.js'))) {
	await project.addProject('/home/ryn/kha/Lightning/Lightning/Libraries/zui');
}
project.flatten();
resolve(project);
