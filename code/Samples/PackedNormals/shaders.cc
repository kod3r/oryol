//-----------------------------------------------------------------------------
// #version:17# machine generated, do not edit!
//-----------------------------------------------------------------------------
#include "Pre.h"
#include "shaders.h"

namespace Oryol {
namespace Shaders {
#if ORYOL_OPENGL
const char* vs_glsl100_src = 
"#define _POSITION gl_Position\n"
"uniform mat4 mvp;\n"
"attribute vec4 position;\n"
"attribute vec4 normal;\n"
"varying vec4 nrm;\n"
"void main() {\n"
"_POSITION = mvp * position;\n"
"nrm = normal;\n"
"}\n"
;
#endif
#if ORYOL_OPENGL
const char* fs_glsl100_src = 
"precision mediump float;\n"
"#define _COLOR gl_FragColor\n"
"varying vec4 nrm;\n"
"void main() {\n"
"_COLOR = nrm * 0.5 + 0.5;\n"
"}\n"
;
#endif
#if ORYOL_OPENGL
const char* vs_glsl120_src = 
"#version 120\n"
"#define _POSITION gl_Position\n"
"uniform mat4 mvp;\n"
"attribute vec4 position;\n"
"attribute vec4 normal;\n"
"varying vec4 nrm;\n"
"void main() {\n"
"_POSITION = mvp * position;\n"
"nrm = normal;\n"
"}\n"
;
#endif
#if ORYOL_OPENGL
const char* fs_glsl120_src = 
"#version 120\n"
"#define _COLOR gl_FragColor\n"
"varying vec4 nrm;\n"
"void main() {\n"
"_COLOR = nrm * 0.5 + 0.5;\n"
"}\n"
;
#endif
#if ORYOL_OPENGL
const char* vs_glsl150_src = 
"#version 150\n"
"#define _POSITION gl_Position\n"
"uniform mat4 mvp;\n"
"in vec4 position;\n"
"in vec4 normal;\n"
"out vec4 nrm;\n"
"void main() {\n"
"_POSITION = mvp * position;\n"
"nrm = normal;\n"
"}\n"
;
#endif
#if ORYOL_OPENGL
const char* fs_glsl150_src = 
"#version 150\n"
"#define _COLOR _FragColor\n"
"in vec4 nrm;\n"
"out vec4 _FragColor;\n"
"void main() {\n"
"_COLOR = nrm * 0.5 + 0.5;\n"
"}\n"
;
#endif
ProgramBundleSetup PackedNormals::CreateSetup() {
    ProgramBundleSetup setup("PackedNormals");
    #if ORYOL_OPENGL
    setup.AddProgramFromSources(0, ShaderLang::GLSL100, vs_glsl100_src, fs_glsl100_src);
    #endif
    #if ORYOL_OPENGL
    setup.AddProgramFromSources(0, ShaderLang::GLSL120, vs_glsl120_src, fs_glsl120_src);
    #endif
    #if ORYOL_OPENGL
    setup.AddProgramFromSources(0, ShaderLang::GLSL150, vs_glsl150_src, fs_glsl150_src);
    #endif
    #if ORYOL_D3D11
    setup.AddProgramFromSources(0, ShaderLang::HLSL5, vs_hlsl5_src, fs_hlsl5_src);
    #endif
    setup.AddUniform("mvp", ModelViewProjection);
    return setup;
}
}
}

