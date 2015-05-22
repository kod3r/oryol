//-----------------------------------------------------------------------------
// #version:17# machine generated, do not edit!
//-----------------------------------------------------------------------------
#include "Pre.h"
#include "shaders.h"

namespace Oryol {
namespace Shaders {
#if ORYOL_OPENGL
const char* planeVS_glsl100_src = 
"#define _TEXTURE2D texture2D\n"
"#define _POSITION gl_Position\n"
"uniform mat4 mvp;\n"
"uniform sampler2D tex;\n"
"attribute vec4 position;\n"
"attribute vec2 texcoord0;\n"
"varying vec4 color;\n"
"void main() {\n"
"color = _TEXTURE2D(tex, texcoord0);\n"
"vec4 pos = position;\n"
"pos.y = color.w;\n"
"_POSITION = mvp * pos;\n"
"}\n"
;
#endif
#if ORYOL_OPENGL
const char* plasmaVS_glsl100_src = 
"#define _POSITION gl_Position\n"
"attribute vec4 position;\n"
"attribute vec2 texcoord0;\n"
"varying vec2 uv;\n"
"void main() {\n"
"_POSITION = position;\n"
"uv = texcoord0;\n"
"}\n"
;
#endif
#if ORYOL_OPENGL
const char* planeFS_glsl100_src = 
"precision mediump float;\n"
"#define _COLOR gl_FragColor\n"
"varying vec4 color;\n"
"void main() {\n"
"_COLOR = color;\n"
"}\n"
;
#endif
#if ORYOL_OPENGL
const char* plasmaFS_glsl100_src = 
"precision mediump float;\n"
"#ifdef GL_FRAGMENT_PRECISION_HIGH\n"
"precision highp float;\n"
"#endif\n"
"#define _COLOR gl_FragColor\n"
"uniform float time;\n"
"varying vec2 uv;\n"
"vec3 mod289(vec3 x) {\n"
"return x - floor(x * (1.0 / 289.0)) * 289.0;\n"
"}\n"
"vec2 mod289(vec2 x) {\n"
"return x - floor(x * (1.0 / 289.0)) * 289.0;\n"
"}\n"
"vec3 permute(vec3 x) {\n"
"return mod289(((x*34.0)+1.0)*x);\n"
"}\n"
"float snoise(vec2 v)\n"
"{\n"
"const vec4 C = vec4(0.211324865405187,\n"
"0.366025403784439,\n"
"-0.577350269189626,\n"
"0.024390243902439);\n"
"vec2 i  = floor(v + dot(v, C.yy) );\n"
"vec2 x0 = v -   i + dot(i, C.xx);\n"
"vec2 i1;\n"
"i1 = (x0.x > x0.y) ? vec2(1.0, 0.0) : vec2(0.0, 1.0);\n"
"vec4 x12 = x0.xyxy + C.xxzz;\n"
"x12.xy -= i1;\n"
"i = mod289(i);\n"
"vec3 p = permute( permute( i.y + vec3(0.0, i1.y, 1.0 ))\n"
"+ i.x + vec3(0.0, i1.x, 1.0 ));\n"
"vec3 m = max(0.5 - vec3(dot(x0,x0), dot(x12.xy,x12.xy), dot(x12.zw,x12.zw)), 0.0);\n"
"m = m*m ;\n"
"m = m*m ;\n"
"vec3 x = 2.0 * fract(p * C.www) - 1.0;\n"
"vec3 h = abs(x) - 0.5;\n"
"vec3 ox = floor(x + 0.5);\n"
"vec3 a0 = x - ox;\n"
"m *= 1.79284291400159 - 0.85373472095314 * ( a0*a0 + h*h );\n"
"vec3 g;\n"
"g.x  = a0.x  * x0.x  + h.x  * x0.y;\n"
"g.yz = a0.yz * x12.xz + h.yz * x12.yw;\n"
"return 130.0 * dot(m, g);\n"
"}\n"
"void main() {\n"
"vec2 dx = vec2(time, 0.0);\n"
"vec2 dy = vec2(0.0, time);\n"
"vec2 dxy = vec2(time, time);\n"
"float red;\n"
"red  = (snoise((uv * 1.5) + dx) * 0.5) + 0.5;\n"
"red += snoise((uv * 5.0) + dx) * 0.15;\n"
"red += snoise((uv * 5.0) + dy) * 0.15;\n"
"float green;\n"
"green  = (snoise((uv * 1.5) + dy) * 0.5) + 0.5;\n"
"green += snoise((uv * 5.0) + dy) * 0.15;\n"
"green += snoise((uv * 5.0) + dx) * 0.15;\n"
"float blue;\n"
"blue  = (snoise((uv * 1.5) + dxy) * 0.5) + 0.5;\n"
"blue += snoise((uv * 5.0) + dxy) * 0.15;\n"
"blue += snoise((uv * 5.0) - dxy) * 0.15;\n"
"float height = 0.0;\n"
"height = (snoise((uv * 3.0) + dxy) * 0.5) + 0.5;\n"
"height += snoise(uv * 20.0 + dy) * 0.1;\n"
"height += snoise(uv * 20.0 - dy) * 0.1;\n"
"_COLOR = vec4(red, green, blue, height * 0.2);\n"
"}\n"
;
#endif
#if ORYOL_OPENGL
const char* planeVS_glsl120_src = 
"#version 120\n"
"#define _TEXTURE2D texture2D\n"
"#define _POSITION gl_Position\n"
"uniform mat4 mvp;\n"
"uniform sampler2D tex;\n"
"attribute vec4 position;\n"
"attribute vec2 texcoord0;\n"
"varying vec4 color;\n"
"void main() {\n"
"color = _TEXTURE2D(tex, texcoord0);\n"
"vec4 pos = position;\n"
"pos.y = color.w;\n"
"_POSITION = mvp * pos;\n"
"}\n"
;
#endif
#if ORYOL_OPENGL
const char* plasmaVS_glsl120_src = 
"#version 120\n"
"#define _POSITION gl_Position\n"
"attribute vec4 position;\n"
"attribute vec2 texcoord0;\n"
"varying vec2 uv;\n"
"void main() {\n"
"_POSITION = position;\n"
"uv = texcoord0;\n"
"}\n"
;
#endif
#if ORYOL_OPENGL
const char* planeFS_glsl120_src = 
"#version 120\n"
"#define _COLOR gl_FragColor\n"
"varying vec4 color;\n"
"void main() {\n"
"_COLOR = color;\n"
"}\n"
;
#endif
#if ORYOL_OPENGL
const char* plasmaFS_glsl120_src = 
"#version 120\n"
"#define _COLOR gl_FragColor\n"
"uniform float time;\n"
"varying vec2 uv;\n"
"vec3 mod289(vec3 x) {\n"
"return x - floor(x * (1.0 / 289.0)) * 289.0;\n"
"}\n"
"vec2 mod289(vec2 x) {\n"
"return x - floor(x * (1.0 / 289.0)) * 289.0;\n"
"}\n"
"vec3 permute(vec3 x) {\n"
"return mod289(((x*34.0)+1.0)*x);\n"
"}\n"
"float snoise(vec2 v)\n"
"{\n"
"const vec4 C = vec4(0.211324865405187,\n"
"0.366025403784439,\n"
"-0.577350269189626,\n"
"0.024390243902439);\n"
"vec2 i  = floor(v + dot(v, C.yy) );\n"
"vec2 x0 = v -   i + dot(i, C.xx);\n"
"vec2 i1;\n"
"i1 = (x0.x > x0.y) ? vec2(1.0, 0.0) : vec2(0.0, 1.0);\n"
"vec4 x12 = x0.xyxy + C.xxzz;\n"
"x12.xy -= i1;\n"
"i = mod289(i);\n"
"vec3 p = permute( permute( i.y + vec3(0.0, i1.y, 1.0 ))\n"
"+ i.x + vec3(0.0, i1.x, 1.0 ));\n"
"vec3 m = max(0.5 - vec3(dot(x0,x0), dot(x12.xy,x12.xy), dot(x12.zw,x12.zw)), 0.0);\n"
"m = m*m ;\n"
"m = m*m ;\n"
"vec3 x = 2.0 * fract(p * C.www) - 1.0;\n"
"vec3 h = abs(x) - 0.5;\n"
"vec3 ox = floor(x + 0.5);\n"
"vec3 a0 = x - ox;\n"
"m *= 1.79284291400159 - 0.85373472095314 * ( a0*a0 + h*h );\n"
"vec3 g;\n"
"g.x  = a0.x  * x0.x  + h.x  * x0.y;\n"
"g.yz = a0.yz * x12.xz + h.yz * x12.yw;\n"
"return 130.0 * dot(m, g);\n"
"}\n"
"void main() {\n"
"vec2 dx = vec2(time, 0.0);\n"
"vec2 dy = vec2(0.0, time);\n"
"vec2 dxy = vec2(time, time);\n"
"float red;\n"
"red  = (snoise((uv * 1.5) + dx) * 0.5) + 0.5;\n"
"red += snoise((uv * 5.0) + dx) * 0.15;\n"
"red += snoise((uv * 5.0) + dy) * 0.15;\n"
"float green;\n"
"green  = (snoise((uv * 1.5) + dy) * 0.5) + 0.5;\n"
"green += snoise((uv * 5.0) + dy) * 0.15;\n"
"green += snoise((uv * 5.0) + dx) * 0.15;\n"
"float blue;\n"
"blue  = (snoise((uv * 1.5) + dxy) * 0.5) + 0.5;\n"
"blue += snoise((uv * 5.0) + dxy) * 0.15;\n"
"blue += snoise((uv * 5.0) - dxy) * 0.15;\n"
"float height = 0.0;\n"
"height = (snoise((uv * 3.0) + dxy) * 0.5) + 0.5;\n"
"height += snoise(uv * 20.0 + dy) * 0.1;\n"
"height += snoise(uv * 20.0 - dy) * 0.1;\n"
"_COLOR = vec4(red, green, blue, height * 0.2);\n"
"}\n"
;
#endif
#if ORYOL_OPENGL
const char* planeVS_glsl150_src = 
"#version 150\n"
"#define _TEXTURE2D texture\n"
"#define _POSITION gl_Position\n"
"uniform mat4 mvp;\n"
"uniform sampler2D tex;\n"
"in vec4 position;\n"
"in vec2 texcoord0;\n"
"out vec4 color;\n"
"void main() {\n"
"color = _TEXTURE2D(tex, texcoord0);\n"
"vec4 pos = position;\n"
"pos.y = color.w;\n"
"_POSITION = mvp * pos;\n"
"}\n"
;
#endif
#if ORYOL_OPENGL
const char* plasmaVS_glsl150_src = 
"#version 150\n"
"#define _POSITION gl_Position\n"
"in vec4 position;\n"
"in vec2 texcoord0;\n"
"out vec2 uv;\n"
"void main() {\n"
"_POSITION = position;\n"
"uv = texcoord0;\n"
"}\n"
;
#endif
#if ORYOL_OPENGL
const char* planeFS_glsl150_src = 
"#version 150\n"
"#define _COLOR _FragColor\n"
"in vec4 color;\n"
"out vec4 _FragColor;\n"
"void main() {\n"
"_COLOR = color;\n"
"}\n"
;
#endif
#if ORYOL_OPENGL
const char* plasmaFS_glsl150_src = 
"#version 150\n"
"#define _COLOR _FragColor\n"
"uniform float time;\n"
"in vec2 uv;\n"
"out vec4 _FragColor;\n"
"vec3 mod289(vec3 x) {\n"
"return x - floor(x * (1.0 / 289.0)) * 289.0;\n"
"}\n"
"vec2 mod289(vec2 x) {\n"
"return x - floor(x * (1.0 / 289.0)) * 289.0;\n"
"}\n"
"vec3 permute(vec3 x) {\n"
"return mod289(((x*34.0)+1.0)*x);\n"
"}\n"
"float snoise(vec2 v)\n"
"{\n"
"const vec4 C = vec4(0.211324865405187,\n"
"0.366025403784439,\n"
"-0.577350269189626,\n"
"0.024390243902439);\n"
"vec2 i  = floor(v + dot(v, C.yy) );\n"
"vec2 x0 = v -   i + dot(i, C.xx);\n"
"vec2 i1;\n"
"i1 = (x0.x > x0.y) ? vec2(1.0, 0.0) : vec2(0.0, 1.0);\n"
"vec4 x12 = x0.xyxy + C.xxzz;\n"
"x12.xy -= i1;\n"
"i = mod289(i);\n"
"vec3 p = permute( permute( i.y + vec3(0.0, i1.y, 1.0 ))\n"
"+ i.x + vec3(0.0, i1.x, 1.0 ));\n"
"vec3 m = max(0.5 - vec3(dot(x0,x0), dot(x12.xy,x12.xy), dot(x12.zw,x12.zw)), 0.0);\n"
"m = m*m ;\n"
"m = m*m ;\n"
"vec3 x = 2.0 * fract(p * C.www) - 1.0;\n"
"vec3 h = abs(x) - 0.5;\n"
"vec3 ox = floor(x + 0.5);\n"
"vec3 a0 = x - ox;\n"
"m *= 1.79284291400159 - 0.85373472095314 * ( a0*a0 + h*h );\n"
"vec3 g;\n"
"g.x  = a0.x  * x0.x  + h.x  * x0.y;\n"
"g.yz = a0.yz * x12.xz + h.yz * x12.yw;\n"
"return 130.0 * dot(m, g);\n"
"}\n"
"void main() {\n"
"vec2 dx = vec2(time, 0.0);\n"
"vec2 dy = vec2(0.0, time);\n"
"vec2 dxy = vec2(time, time);\n"
"float red;\n"
"red  = (snoise((uv * 1.5) + dx) * 0.5) + 0.5;\n"
"red += snoise((uv * 5.0) + dx) * 0.15;\n"
"red += snoise((uv * 5.0) + dy) * 0.15;\n"
"float green;\n"
"green  = (snoise((uv * 1.5) + dy) * 0.5) + 0.5;\n"
"green += snoise((uv * 5.0) + dy) * 0.15;\n"
"green += snoise((uv * 5.0) + dx) * 0.15;\n"
"float blue;\n"
"blue  = (snoise((uv * 1.5) + dxy) * 0.5) + 0.5;\n"
"blue += snoise((uv * 5.0) + dxy) * 0.15;\n"
"blue += snoise((uv * 5.0) - dxy) * 0.15;\n"
"float height = 0.0;\n"
"height = (snoise((uv * 3.0) + dxy) * 0.5) + 0.5;\n"
"height += snoise(uv * 20.0 + dy) * 0.1;\n"
"height += snoise(uv * 20.0 - dy) * 0.1;\n"
"_COLOR = vec4(red, green, blue, height * 0.2);\n"
"}\n"
;
#endif
ProgramBundleSetup Plane::CreateSetup() {
    ProgramBundleSetup setup("Plane");
    #if ORYOL_OPENGL
    setup.AddProgramFromSources(0, ShaderLang::GLSL100, planeVS_glsl100_src, planeFS_glsl100_src);
    #endif
    #if ORYOL_OPENGL
    setup.AddProgramFromSources(0, ShaderLang::GLSL120, planeVS_glsl120_src, planeFS_glsl120_src);
    #endif
    #if ORYOL_OPENGL
    setup.AddProgramFromSources(0, ShaderLang::GLSL150, planeVS_glsl150_src, planeFS_glsl150_src);
    #endif
    #if ORYOL_D3D11
    setup.AddProgramFromSources(0, ShaderLang::HLSL5, planeVS_hlsl5_src, planeFS_hlsl5_src);
    #endif
    setup.AddUniform("mvp", ModelViewProjection);
    setup.AddTextureUniform("tex", Texture);
    return setup;
}
ProgramBundleSetup Plasma::CreateSetup() {
    ProgramBundleSetup setup("Plasma");
    #if ORYOL_OPENGL
    setup.AddProgramFromSources(0, ShaderLang::GLSL100, plasmaVS_glsl100_src, plasmaFS_glsl100_src);
    #endif
    #if ORYOL_OPENGL
    setup.AddProgramFromSources(0, ShaderLang::GLSL120, plasmaVS_glsl120_src, plasmaFS_glsl120_src);
    #endif
    #if ORYOL_OPENGL
    setup.AddProgramFromSources(0, ShaderLang::GLSL150, plasmaVS_glsl150_src, plasmaFS_glsl150_src);
    #endif
    #if ORYOL_D3D11
    setup.AddProgramFromSources(0, ShaderLang::HLSL5, plasmaVS_hlsl5_src, plasmaFS_hlsl5_src);
    #endif
    setup.AddUniform("time", Time);
    return setup;
}
}
}

