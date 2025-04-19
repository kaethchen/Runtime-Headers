@class NSDictionary, NSMutableDictionary;

@interface QCContext : NSObject {
    struct _QCIterationManager { id x0; id x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; } *_iterationManager;
    NSMutableDictionary *_optimizedRendering;
    NSDictionary *_options;
    NSMutableDictionary *_userInfo;
    struct __CFSet { } *_renderingPatches;
    id _proExtension;
    void *_unused[1];
}

+ (void)initialize;
+ (Class)renderStateClass;

- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)init;
- (id)userInfo;
- (id)initWithOptions:(id)a0;
- (id)options;
- (void)setScale:(double)a0;
- (double)scaleValue:(double)a0;
- (void)_drawDirtyRectForPatch:(id)a0;
- (void)didPopRenderState:(id)a0;
- (void)didPushRenderState:(id)a0;
- (double)nextExecutionTimeForPatch:(id)a0 time:(double)a1 arguments:(id)a2;
- (void)pauseRenderingPatch:(id)a0;
- (BOOL)prerenderPatch:(id)a0 time:(double)a1 imageSizeHint:(struct CGSize { double x0; double x1; })a2 arguments:(id)a3;
- (BOOL)renderPatch:(id)a0 time:(double)a1 arguments:(id)a2;
- (id)renderingPatches;
- (void)resumeRenderingPatch:(id)a0;
- (void)sendRenderState:(id)a0 didChangeMessage:(id)a1 withAttributes:(id)a2;
- (BOOL)startRenderingPatch:(id)a0 options:(id)a1;
- (void)stopRenderingPatch:(id)a0;
- (void)willPopRenderState:(id)a0;
- (BOOL)willPushRenderState:(id)a0;

@end
