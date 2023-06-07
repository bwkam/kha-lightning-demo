#version 110

struct DirLight
{
    vec3 direction;
    vec3 ambient;
    vec3 diffuse;
    vec3 specular;
};

struct PointLight
{
    vec3 position;
    float constant;
    float linear;
    float quadratic;
    vec3 ambient;
    vec3 diffuse;
    vec3 specular;
};

struct SpotLight
{
    vec3 position;
    vec3 direction;
    float cutOff;
    float outerCutOff;
    float constant;
    float linear;
    float quadratic;
    vec3 ambient;
    vec3 diffuse;
    vec3 specular;
};

struct Material
{
    sampler2D diffuse;
    sampler2D specular;
    float shininess;
};

uniform vec3 viewPos;
uniform DirLight dirLight;
uniform PointLight pointLights[4];
uniform SpotLight spotLight;
uniform Material material;

varying vec3 Normal;
varying vec3 FragPos;
varying vec2 TexCoords;

vec3 CalcDirLight(DirLight light, vec3 normal, vec3 viewDir)
{
    vec3 lightDir = normalize(-light.direction);
    float diff = max(dot(normal, lightDir), 0.0);
    vec3 reflectDir = reflect(-lightDir, normal);
    float spec = pow(max(dot(viewDir, reflectDir), 0.0), material.shininess);
    vec3 ambient = light.ambient * vec3(texture2D(material.diffuse, TexCoords).xyz);
    vec3 diffuse = (light.diffuse * diff) * vec3(texture2D(material.diffuse, TexCoords).xyz);
    vec3 specular = (light.specular * spec) * vec3(texture2D(material.specular, TexCoords).xyz);
    return (ambient + diffuse) + specular;
}

vec3 CalcPointLight(PointLight light, vec3 normal, vec3 fragPos, vec3 viewDir)
{
    vec3 lightDir = normalize(light.position - fragPos);
    float diff = max(dot(normal, lightDir), 0.0);
    vec3 reflectDir = reflect(-lightDir, normal);
    float spec = pow(max(dot(viewDir, reflectDir), 0.0), material.shininess);
    float _distance = length(light.position - fragPos);
    float attenuation = 1.0 / ((light.constant + (light.linear * _distance)) + (light.quadratic * (_distance * _distance)));
    vec3 ambient = light.ambient * vec3(texture2D(material.diffuse, TexCoords).xyz);
    vec3 diffuse = (light.diffuse * diff) * vec3(texture2D(material.diffuse, TexCoords).xyz);
    vec3 specular = (light.specular * spec) * vec3(texture2D(material.specular, TexCoords).xyz);
    ambient *= attenuation;
    diffuse *= attenuation;
    specular *= attenuation;
    return (ambient + diffuse) + specular;
}

vec3 CalcSpotLight(SpotLight light, vec3 normal, vec3 fragPos, vec3 viewDir)
{
    vec3 lightDir = normalize(light.position - fragPos);
    float diff = max(dot(normal, lightDir), 0.0);
    vec3 reflectDir = reflect(-lightDir, normal);
    float spec = pow(max(dot(viewDir, reflectDir), 0.0), material.shininess);
    float _distance = length(light.position - fragPos);
    float attenuation = 1.0 / ((light.constant + (light.linear * _distance)) + (light.quadratic * (_distance * _distance)));
    float theta = dot(lightDir, normalize(-light.direction));
    float epsilon = light.cutOff - light.outerCutOff;
    float intensity = clamp((theta - light.outerCutOff) / epsilon, 0.0, 1.0);
    vec3 ambient = light.ambient * vec3(texture2D(material.diffuse, TexCoords).xyz);
    vec3 diffuse = (light.diffuse * diff) * vec3(texture2D(material.diffuse, TexCoords).xyz);
    vec3 specular = (light.specular * spec) * vec3(texture2D(material.specular, TexCoords).xyz);
    ambient *= (attenuation * intensity);
    diffuse *= (attenuation * intensity);
    specular *= (attenuation * intensity);
    return (ambient + diffuse) + specular;
}

void main()
{
    vec3 norm = normalize(Normal);
    vec3 viewDir = normalize(viewPos - FragPos);
    DirLight param = dirLight;
    vec3 param_1 = norm;
    vec3 param_2 = viewDir;
    vec3 result = CalcDirLight(param, param_1, param_2);
    for (int i = 0; i < 4; i++)
    {
        PointLight param_3 = pointLights[i];
        vec3 param_4 = norm;
        vec3 param_5 = FragPos;
        vec3 param_6 = viewDir;
        result += CalcPointLight(param_3, param_4, param_5, param_6);
    }
    SpotLight param_7 = spotLight;
    vec3 param_8 = norm;
    vec3 param_9 = FragPos;
    vec3 param_10 = viewDir;
    result += CalcSpotLight(param_7, param_8, param_9, param_10);
    gl_FragData[0] = vec4(result, 1.0);
}

