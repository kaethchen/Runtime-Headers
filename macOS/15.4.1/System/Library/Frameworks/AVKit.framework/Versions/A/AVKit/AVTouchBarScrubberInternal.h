@class NSView, NSString, NSTextField, AVTouchBarTrackView, NSColor, NSDateComponentsFormatter, NSLayoutConstraint, AVPlayerLayer, AVTouchBarScrubberKnobView;
@protocol NSObject, AVTouchBarScrubberDelegateInternal, NSCopying;

@interface AVTouchBarScrubberInternal : NSView <NSAccessibilitySlider> {
    NSDateComponentsFormatter *_dateComponentsFormatter;
    AVTouchBarScrubberKnobView *_knobView;
    AVTouchBarTrackView *_trackView;
    double _minValue;
    double _maxValue;
    double _currentValue;
    id _expandableInnerKnobFrameObserver;
    NSColor *_audioWaveformColor;
    NSView *_elapsedTimeContainerView;
    NSTextField *_elapsedTimeTextField;
    NSTextField *_elapsedTimeShadowTextField;
    BOOL _showsElapsedTimeRightOfTheKnob;
    id<NSObject, NSCopying> _identityOfTrackedTouch;
    BOOL _didStartScrubbingForTrackedTouch;
    struct CGPoint { double x; double y; } _touchStartLocation;
    double _touchOffset;
    BOOL _needsLayoutSubviews;
    NSLayoutConstraint *_knobViewPositionLayoutConstraint;
    NSLayoutConstraint *_elapsedTimeLayoutConstraint;
}

@property (nonatomic) double minValue;
@property (nonatomic) double maxValue;
@property (nonatomic) double currentValue;
@property (nonatomic) BOOL shouldSkipForwardOrBackwardWhenTapped;
@property (nonatomic) BOOL showsElapsedTime;
@property (nonatomic) BOOL keepsExpandedKnobWithinBounds;
@property (retain, nonatomic) NSColor *audioWaveformColor;
@property (retain, nonatomic) AVTouchBarTrackView *trackView;
@property (weak, nonatomic) id<AVTouchBarScrubberDelegateInternal> delegate;
@property (retain, nonatomic) AVPlayerLayer *scrubPlayerLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityLabel;
- (id)accessibilityMaxValue;
- (id)accessibilityMinValue;
- (BOOL)accessibilityPerformDecrement;
- (BOOL)accessibilityPerformIncrement;
- (id)accessibilityValue;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)touchesBeganWithEvent:(id)a0;
- (void)touchesCancelledWithEvent:(id)a0;
- (void)touchesEndedWithEvent:(id)a0;
- (void)touchesMovedWithEvent:(id)a0;
- (void)updateConstraints;
- (void)_stopTracking;
- (double)_normalizedCurrentValue;
- (double)_normalizedValueForTouch:(id)a0;
- (void)_touchesEndedOrCancelledWithEvent:(id)a0;
- (void)_updateCurrentValueForTouch:(id)a0;
- (void)_updateElapsedTimeLayoutConstraint;
- (void)_updateKnob;

@end
