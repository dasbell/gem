#import <Cocoa/Cocoa.h>
#import <QuartzCore/CVDisplayLink.h>

#import "modelUtil.h"
#import "imageUtil.h"

@interface OpenGLView : NSOpenGLView {
	CVDisplayLinkRef displayLink;
}
@end
