@class SKView, NSOpenGLContext;

@interface SKOpenGLLayer : NSOpenGLLayer

@property (weak, nonatomic) SKView *skView;
@property (retain) NSOpenGLContext *context;

- (void).cxx_destruct;
- (double)NS_suggestedContentsScale;
- (void)drawInOpenGLContext:(id)a0 pixelFormat:(id)a1 forLayerTime:(double)a2 displayTime:(const struct { unsigned int x0; int x1; long long x2; unsigned long long x3; double x4; long long x5; struct CVSMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x6; unsigned long long x7; unsigned long long x8; } *)a3;
- (BOOL)layer:(id)a0 shouldInheritContentsScale:(double)a1 fromWindow:(id)a2;
- (id)openGLContextForPixelFormat:(id)a0;
- (id)openGLPixelFormatForDisplayMask:(unsigned int)a0;

@end
