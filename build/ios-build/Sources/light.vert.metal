// light_vert_main

#include <metal_stdlib>
#include <simd/simd.h>

using namespace metal;

struct light_vert_main_uniforms
{
    float4x4 model;
    float4x4 proj;
    float4x4 view;
};

struct light_vert_main_out
{
    float4 gl_Position [[position]];
};

struct light_vert_main_in
{
    float3 aPos [[attribute(0)]];
};

vertex light_vert_main_out light_vert_main(light_vert_main_in in [[stage_in]], constant light_vert_main_uniforms& uniforms [[buffer(1)]])
{
    light_vert_main_out out = {};
    out.gl_Position = ((uniforms.proj * uniforms.view) * uniforms.model) * float4(in.aPos, 1.0);
    out.gl_Position.z = (out.gl_Position.z + out.gl_Position.w) * 0.5;       // Adjust clip-space for Metal
    return out;
}

