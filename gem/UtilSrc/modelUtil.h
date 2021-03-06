#ifndef __MODEL_UTIL_H__
#define __MODEL_UTIL_H__

#import <OpenGL/OpenGL.h>

typedef struct demoModelRec
{
	GLuint numVertcies;
	
	GLubyte *positions;
	GLenum positionType;
	GLuint positionSize;
	GLsizei positionArraySize;
	
	GLubyte *texcoords;
	GLenum texcoordType;
	GLuint texcoordSize;
	GLsizei texcoordArraySize;
	
	GLubyte *normals;
	GLenum normalType;
	GLuint normalSize;
	GLsizei normalArraySize;
		
	GLubyte *elements;
	GLenum elementType;
	GLuint numElements;
	GLsizei elementArraySize;
		
	GLenum primType;
	
} demoModel;

demoModel* mdlLoadModel(const char* filepathname);
demoModel* mdlLoadQuadModel();

void mdlDestroyModel(demoModel* model);

#endif //__MODEL_UTIL_H__
