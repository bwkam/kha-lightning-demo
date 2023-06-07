// light_frag_main

#include <metal_stdlib>
#include <simd/simd.h>

using namespace metal;

struct light_frag_main_out
{
    float4 fragColor [[color(0)]];
};

fragment light_frag_main_out light_frag_main()
{
    light_frag_main_out out = {};
    out.fragColor = float4(1.0);
    return out;
}

