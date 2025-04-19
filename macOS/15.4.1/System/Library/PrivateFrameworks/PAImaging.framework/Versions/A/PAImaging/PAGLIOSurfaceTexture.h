@class NUIOSurface;

@interface PAGLIOSurfaceTexture : PAGLTextureRect

@property (retain) NUIOSurface *surface;

- (void).cxx_destruct;
- (unsigned int)createWithContext:(id)a0;
- (id)initWithSurface:(id)a0 device:(id)a1;

@end
