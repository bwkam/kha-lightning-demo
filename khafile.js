let project = new Project('Lightning');
project.addAssets('Assets/**');
project.addShaders('Sources/Shaders/**');
project.addSources('Sources');
project.addLibrary('zui');
resolve(project);
