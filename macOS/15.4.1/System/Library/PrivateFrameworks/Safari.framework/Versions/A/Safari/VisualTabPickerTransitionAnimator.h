@class VisualTabPickerTransitionPerformanceTracker;
@protocol VisualTabPickerTransitioning, VisualTabPickerTransitionAnimatorDelegate;

@interface VisualTabPickerTransitionAnimator : NSObject {
    float _velocity;
    id /* block */ _lastAnimationCompletionHandler;
    struct __CVDisplayLink { } *_displayLink;
    float _initialInteractiveProgress;
    BOOL _interactive;
    BOOL _hasRenderedSinceBecomingInteractive;
    VisualTabPickerTransitionPerformanceTracker *_performanceTracker;
}

@property (weak, nonatomic) id<VisualTabPickerTransitionAnimatorDelegate> delegate;
@property (readonly, weak, nonatomic) id<VisualTabPickerTransitioning> transitionCoordinator;
@property (readonly, nonatomic, getter=isAnimating) BOOL animating;
@property (readonly, nonatomic) float currentProgress;
@property (readonly, nonatomic) float targetProgress;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_stopAnimating;
- (void)_startAnimating;
- (void)_didReachOrExceedFixedPoint:(float)a0;
- (BOOL)_isStable;
- (void)_renderNextFrame;
- (void)animateToTransitionProgress:(float)a0 completionHandler:(id /* block */)a1;
- (void)didFinishScrubbing;
- (id)initWithTransitionCoordinator:(id)a0;
- (void)resetToProgress:(float)a0;
- (void)scrubToTransitionProgress:(float)a0;

@end
