@class CALayer, NSString;

@interface CUIProgressBarLayer : CALayer <CAAnimationDelegate, CALayerDelegate> {
    long long _state;
    double _value;
    double _previousPresentedValue;
    double _presentedValue;
    double _animationBeginTime;
    NSString *_animationBeginTimeMode;
    float _animationRepeatCount;
    BOOL _rtl;
}

@property (nonatomic) double value;
@property (nonatomic, getter=isRTL) BOOL RTL;
@property (retain, nonatomic) CALayer *trackLayer;
@property (retain, nonatomic) CALayer *trackOutlineLayer;
@property (retain, nonatomic) CALayer *indicatorFillLayer;
@property (retain, nonatomic) CALayer *indicatorClipLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)_update;
- (void)_updateStateIfNeeded;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithLayer:(id)a0;
- (id)initWithValue:(double)a0;
- (void)resizeSublayersWithOldSize:(struct CGSize { double x0; double x1; })a0;
- (void)_updatePingPong;
- (id)_makePingPongAnimation;
- (id)_makePingPongIndicatorFillLayerAnimationGroup;
- (id)_makePulsingAnimation;
- (void)_switchToDeterminate;
- (void)_switchToDeterminateAnimating;
- (void)_switchToPingPong;
- (void)_switchToPingPongFinishing;
- (void)_switchToPulsing;
- (void)_switchToPulsingFinishing;
- (void)_switchToPulsingStarting;
- (void)_updateDeterminate;
- (void)_updateDeterminateAnimating;
- (void)_updateIndicatorFillLayerGeometry;
- (void)_updatePingPongFinishing;
- (void)_updatePulsing;
- (void)_updatePulsingFinishing;
- (void)_updatePulsingStarting;

@end
