@class NSOpenGLContext, QCCGLContext;

@interface QCPortGLView : QCPortView {
    QCCGLContext *_cglContext;
    NSOpenGLContext *_glContext;
}

- (void)dealloc;
- (void)finalize;
- (void)setHidden:(BOOL)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)lockFocus;
- (BOOL)wantsBestResolutionOpenGLSurface;
- (id)initWithPort:(id)a0;
- (void)_stopRendering:(id)a0;
- (void)_startRendering:(id)a0;
- (id)cglContext;

@end
