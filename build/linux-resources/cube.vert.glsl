#version 110

mat4 transpose(mat4 m) { return mat4(m[0][0], m[1][0], m[2][0], m[3][0], m[0][1], m[1][1], m[2][1], m[3][1], m[0][2], m[1][2], m[2][2], m[3][2], m[0][3], m[1][3], m[2][3], m[3][3]); }

uniform mat4 model;
uniform mat4 proj;
uniform mat4 view;

varying vec3 FragPos;
attribute vec3 aPos;
varying vec3 Normal;
attribute vec3 aNormal;
varying vec2 TexCoords;
attribute vec2 aTexCoords;

void main()
{
    FragPos = vec3((model * vec4(aPos, 1.0)).xyz);
    mat4 _31 = transpose(inverse(model));
    Normal = mat3(_31[0].xyz, _31[1].xyz, _31[2].xyz) * aNormal;
    gl_Position = (proj * view) * vec4(FragPos, 1.0);
    TexCoords = aTexCoords;
}

