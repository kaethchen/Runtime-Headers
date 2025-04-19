@class NSTimer, NSString;

@interface PXScrollSpeedometer : PXObservable <PXScrollViewControllerObserver>

@property (nonatomic, setter=_setLastVisibleRect:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastVisibleRect;
@property (nonatomic, setter=_setLastTime:) double _lastTime;
@property (retain, nonatomic, setter=_setTimeoutTimer:) NSTimer *_timeoutTimer;
@property (nonatomic, setter=_setNextRegime:) long long _nextRegime;
@property (nonatomic, setter=_setNextRegimeCount:) long long _nextRegimeCount;
@property (nonatomic) struct CGPoint { double x; double y; } scrollVelocity;
@property (nonatomic) struct CGPoint { double x; double y; } scrollAcceleration;
@property (nonatomic) struct CGPoint { double x; double y; } lastScrollDirection;
@property (readonly, nonatomic) id scrollView;
@property (readonly, nonatomic) BOOL isManuallyChanging;
@property (readonly, nonatomic) BOOL isScrubbing;
@property (nonatomic) BOOL isAnimatingScroll;
@property (nonatomic) BOOL hasRampedUpForCurrentAnimatedScroll;
@property (readonly, nonatomic) long long regime;
@property (readonly, nonatomic) long long previousRegime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)didPerformChanges;
- (id)mutableChangeObject;
- (void)handleScrollEventVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 didEnd:(BOOL)a1;
- (void)_handleScrubbingTimeout;
- (void)_handleTimeoutTimer:(id)a0;
- (void)_rescheduleTimeout;
- (void)_scheduleScrubbingTimeout;
- (void)_setPreviousRegime:(long long)a0;
- (void)_setRegime:(long long)a0;
- (void)_updateScrollRegime;
- (double)fastLowerThreshold;
- (double)fastUpperThreshold;
- (double)mediumLowerThreshold;
- (double)mediumUpperThreshold;
- (id)scrollview;

@end
