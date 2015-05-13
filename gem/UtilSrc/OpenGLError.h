#ifndef __GL_ERROR_H__
#define __GL_ERROR_H__

#import <OpenGL/OpenGL.h>
#import <OpenGL/gl3.h>

#define getGLError() lookupError(__FILE__, __LINE__);

static inline const char * getGLErrorString(GLenum error) {
	switch(error) {
		case GL_NO_ERROR:                       return "GL_NO_ERROR";
		case GL_INVALID_ENUM:                   return "GL_INVALID_ENUM";
		case GL_INVALID_VALUE:                  return "GL_INVALID_VALUE";
		case GL_INVALID_OPERATION:              return "GL_INVALID_OPERATION";
		case GL_OUT_OF_MEMORY:                  return "GL_OUT_OF_MEMORY";
		case GL_INVALID_FRAMEBUFFER_OPERATION:  return "GL_INVALID_FRAMEBUFFER_OPERATION";
		default:                                return "(ERROR: Unknown Error Enum)";
	}
}

static inline GLenum lookupError(const char* file, int line) {
	GLenum err = glGetError();
	while (err != GL_NO_ERROR) {
		NSLog(@"GLError %s set in File:%s Line:%d\n",
				getGLErrorString(err),
				file,
				line);
		return glGetError();
	}
    return GL_NO_ERROR;
}

#endif // __GL_UTIL_H__

