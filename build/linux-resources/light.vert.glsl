#version 110

uniform mat4 proj;
uniform mat4 view;
uniform mat4 model;

attribute vec3 aPos;

void main()
{
    gl_Position = ((proj * view) * model) * vec4(aPos, 1.0);
}

