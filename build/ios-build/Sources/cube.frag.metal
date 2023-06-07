// cube_frag_main

#pragma clang diagnostic ignored "-Wmissing-prototypes"
#pragma clang diagnostic ignored "-Wmissing-braces"

#include <metal_stdlib>
#include <simd/simd.h>

using namespace metal;

template<typename T, size_t Num>
struct spvUnsafeArray
{
    T elements[Num ? Num : 1];
    
    thread T& operator [] (size_t pos) thread
    {
        return elements[pos];
    }
    constexpr const thread T& operator [] (size_t pos) const thread
    {
        return elements[pos];
    }
    
    device T& operator [] (size_t pos) device
    {
        return elements[pos];
    }
    constexpr const device T& operator [] (size_t pos) const device
    {
        return elements[pos];
    }
    
    constexpr const constant T& operator [] (size_t pos) const constant
    {
        return elements[pos];
    }
    
    threadgroup T& operator [] (size_t pos) threadgroup
    {
        return elements[pos];
    }
    constexpr const threadgroup T& operator [] (size_t pos) const threadgroup
    {
        return elements[pos];
    }
};

struct DirLight
{
    float3 direction;
    float3 ambient;
    float3 diffuse;
    float3 specular;
};

struct PointLight
{
    float3 position;
    float constant;
    float linear;
    float quadratic;
    float3 ambient;
    float3 diffuse;
    float3 specular;
};

struct SpotLight
{
    float3 position;
    float3 direction;
    float cutOff;
    float outerCutOff;
    float constant;
    float linear;
    float quadratic;
    float3 ambient;
    float3 diffuse;
    float3 specular;
};

struct Material
{
    texture2d<float> diffuse;
    texture2d<float> specular;
    float shininess;
};

struct cube_frag_main_uniforms
{
    float3 DirLight_ambient;
    float3 DirLight_diffuse;
    float3 DirLight_direction;
    float3 DirLight_specular;
    texture2d<float> Material_diffuse;
    float Material_shininess;
    texture2d<float> Material_specular;
    float3 PointLight_ambient;
    float PointLight_constant;
    float3 PointLight_diffuse;
    float PointLight_linear;
    float3 PointLight_position;
    float PointLight_quadratic;
    float3 PointLight_specular;
    float3 SpotLight_ambient;
    float SpotLight_constant;
    float SpotLight_cutOff;
    float3 SpotLight_diffuse;
    float3 SpotLight_direction;
    float SpotLight_linear;
    float SpotLight_outerCutOff;
    float3 SpotLight_position;
    float SpotLight_quadratic;
    float3 SpotLight_specular;
    float3 viewPos;
};

struct cube_frag_main_out
{
    float4 FragColor [[color(0)]];
};

struct cube_frag_main_in
{
    float3 FragPos [[user(locn0)]];
    float3 Normal [[user(locn1)]];
    float2 TexCoords [[user(locn2)]];
};

static inline __attribute__((always_inline))
float3 CalcDirLight(thread const DirLight& light, thread const float3& normal, thread const float3& viewDir, constant Material material, thread float2& TexCoords)
{
    float3 lightDir = normalize(-light.direction);
    float diff = fast::max(dot(normal, lightDir), 0.0);
    float3 reflectDir = reflect(-lightDir, normal);
    float spec = pow(fast::max(dot(viewDir, reflectDir), 0.0), material.shininess);
    float3 ambient = light.ambient * float3(material.diffuse.sample(material.diffuseSmplr, TexCoords).xyz);
    float3 diffuse = (light.diffuse * diff) * float3(material.diffuse.sample(material.diffuseSmplr, TexCoords).xyz);
    float3 specular = (light.specular * spec) * float3(material.specular.sample(material.specularSmplr, TexCoords).xyz);
    return (ambient + diffuse) + specular;
}

static inline __attribute__((always_inline))
float3 CalcPointLight(thread const PointLight& light, thread const float3& normal, thread const float3& fragPos, thread const float3& viewDir, constant Material material, thread float2& TexCoords)
{
    float3 lightDir = normalize(light.position - fragPos);
    float diff = fast::max(dot(normal, lightDir), 0.0);
    float3 reflectDir = reflect(-lightDir, normal);
    float spec = pow(fast::max(dot(viewDir, reflectDir), 0.0), material.shininess);
    float _distance = length(light.position - fragPos);
    float attenuation = 1.0 / ((light.constant + (light.linear * _distance)) + (light.quadratic * (_distance * _distance)));
    float3 ambient = light.ambient * float3(material.diffuse.sample(material.diffuseSmplr, TexCoords).xyz);
    float3 diffuse = (light.diffuse * diff) * float3(material.diffuse.sample(material.diffuseSmplr, TexCoords).xyz);
    float3 specular = (light.specular * spec) * float3(material.specular.sample(material.specularSmplr, TexCoords).xyz);
    ambient *= attenuation;
    diffuse *= attenuation;
    specular *= attenuation;
    return (ambient + diffuse) + specular;
}

static inline __attribute__((always_inline))
float3 CalcSpotLight(thread const SpotLight& light, thread const float3& normal, thread const float3& fragPos, thread const float3& viewDir, constant Material material, thread float2& TexCoords)
{
    float3 lightDir = normalize(light.position - fragPos);
    float diff = fast::max(dot(normal, lightDir), 0.0);
    float3 reflectDir = reflect(-lightDir, normal);
    float spec = pow(fast::max(dot(viewDir, reflectDir), 0.0), material.shininess);
    float _distance = length(light.position - fragPos);
    float attenuation = 1.0 / ((light.constant + (light.linear * _distance)) + (light.quadratic * (_distance * _distance)));
    float theta = dot(lightDir, normalize(-light.direction));
    float epsilon = light.cutOff - light.outerCutOff;
    float intensity = fast::clamp((theta - light.outerCutOff) / epsilon, 0.0, 1.0);
    float3 ambient = light.ambient * float3(material.diffuse.sample(material.diffuseSmplr, TexCoords).xyz);
    float3 diffuse = (light.diffuse * diff) * float3(material.diffuse.sample(material.diffuseSmplr, TexCoords).xyz);
    float3 specular = (light.specular * spec) * float3(material.specular.sample(material.specularSmplr, TexCoords).xyz);
    ambient *= (attenuation * intensity);
    diffuse *= (attenuation * intensity);
    specular *= (attenuation * intensity);
    return (ambient + diffuse) + specular;
}

fragment cube_frag_main_out cube_frag_main(cube_frag_main_in in [[stage_in]], constant cube_frag_main_uniforms& uniforms [[buffer(0)]], constant DirLight& dirLight [[buffer(0)]], constant PointLight* pointLights_0 [[buffer(0)]], constant PointLight* pointLights_1 [[buffer(1)]], constant PointLight* pointLights_2 [[buffer(2)]], constant PointLight* pointLights_3 [[buffer(3)]], constant SpotLight& spotLight [[buffer(0)]], constant Material& material [[buffer(0)]])
{
    constant PointLight* pointLights[] =
    {
        pointLights_0,
        pointLights_1,
        pointLights_2,
        pointLights_3,
    };

    cube_frag_main_out out = {};
    DirLight dirLight = {};
    spvUnsafeArray<PointLight, 4> pointLights = {};
    SpotLight spotLight = {};
    Material material = {};
    float3 norm = normalize(in.Normal);
    float3 viewDir = normalize(uniforms.viewPos - in.FragPos);
    DirLight param = dirLight;
    float3 param_1 = norm;
    float3 param_2 = viewDir;
    float3 result = CalcDirLight(param, param_1, param_2, material, in.TexCoords);
    for (int i = 0; i < 4; i++)
    {
        PointLight param_3 = pointLights[i];
        float3 param_4 = norm;
        float3 param_5 = in.FragPos;
        float3 param_6 = viewDir;
        result += CalcPointLight(param_3, param_4, param_5, param_6, material, in.TexCoords);
    }
    SpotLight param_7 = spotLight;
    float3 param_8 = norm;
    float3 param_9 = in.FragPos;
    float3 param_10 = viewDir;
    result += CalcSpotLight(param_7, param_8, param_9, param_10, material, in.TexCoords);
    out.FragColor = float4(result, 1.0);
    return out;
}

