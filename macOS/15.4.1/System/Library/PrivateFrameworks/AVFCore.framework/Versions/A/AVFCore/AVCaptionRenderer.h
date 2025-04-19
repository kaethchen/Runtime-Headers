@class NSArray, AVCaptionRendererInternal;

@interface AVCaptionRenderer : NSObject {
    AVCaptionRendererInternal *_internal;
}

@property (copy, nonatomic) NSArray *captions;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;

- (void)dealloc;
- (id)description;
- (id)init;
- (int)buildFigCaptionArrayFromAVCaptionArrayAndSubmitToRenderSession;
- (id)captionSceneChangesInRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)defaultStyles;
- (void)renderInContext:(struct CGContext { } *)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)renderInContext:(struct CGContext { } *)a0 forTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)setDefaultStyles:(id)a0;
- (BOOL)setupFigCDS;
- (BOOL)setupFigCaptionClient;
- (BOOL)synchronizeWithCurrentAccessibilityPreferencesWithCompletionHandler:(id /* block */)a0;
- (void)teardownFigCDS;
- (void)teardownFigCaptionClient;

@end
