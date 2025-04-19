@protocol PKRenderLoopDelegate;

@interface PKRenderLoop : NSObject {
    struct __CVDisplayLink { } *_displayLink;
    BOOL _delegateObservesEffectivePaused;
    BOOL _delegateObservesRunnable;
}

@property (readonly, nonatomic) unsigned int displayID;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, nonatomic, getter=isDrawing) BOOL drawing;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (readonly, nonatomic, getter=effectiveIsPaused) BOOL effectivePaused;
@property (readonly, nonatomic, getter=isRunnable) BOOL runnable;
@property (weak, nonatomic) id<PKRenderLoopDelegate> delegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)_isForcingPause;
- (void)_didDraw;
- (void)_didInvalidate;
- (void)_willDraw;
- (BOOL)attachToDisplay:(unsigned int)a0;

@end
