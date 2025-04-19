@class NSView;

@interface IKGLLayer : NSOpenGLLayer {
    NSView *_ikview;
}

- (struct _CGLPixelFormatObject { } *)copyCGLPixelFormatForDisplayMask:(unsigned int)a0;
- (id)openGLContextForPixelFormat:(id)a0;
- (id)ikView;
- (void)setIKView:(id)a0;

@end
