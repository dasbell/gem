#ifndef __IMAGE_UTIL_H__
#define __IMAGE_UTIL_H__

typedef struct demoImageRec
{
	GLubyte* data;
	
	GLsizei size;
	
	GLuint width;
	GLuint height;
	GLenum format;
	GLenum type;
	
	GLuint rowByteSize;
	
} demoImage;

demoImage* imgLoadImage(const char* filepathname, int flipVertical);

void imgDestroyImage(demoImage* image);

#endif //__IMAGE_UTIL_H__
