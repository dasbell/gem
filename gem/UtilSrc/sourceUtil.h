
#ifndef __SOURCE_UTIL_H__
#define __SOURCE_UTIL_H__

typedef struct demoSourceRec
{
	GLchar* string;
	
	GLsizei byteSize;
	
	GLenum shaderType; // Vertex or Fragment
	
} demoSource;

demoSource* srcLoadSource(const char* filepathname);

void srcDestroySource(demoSource* source);

#endif // __SOURCE_UTIL_H__
