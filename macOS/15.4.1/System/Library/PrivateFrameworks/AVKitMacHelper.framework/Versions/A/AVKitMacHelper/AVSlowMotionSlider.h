@class NSView, NSMutableArray;
@protocol AVSlowMotionSliderDelegate;

@interface AVSlowMotionSlider : NSView {
    double _minValue;
    double _maxValue;
    id<AVSlowMotionSliderDelegate> _delegate;
    struct { BOOL slowMotionSliderMouseDownEventTrackingBegan; BOOL slowMotionSlider_tracksMouseDownEventWithCurrentValue; BOOL slowMotionSliderMouseDownEventTrackingEnded; } _delegateRespondsTo;
    NSView *_trackView;
    NSView *_minHandleView;
    NSView *_maxHandleView;
    BOOL _needsUpdateTrackAndHandles;
    NSMutableArray *_layoutConstraints;
}

@property double minValue;
@property double maxValue;
@property (weak) id<AVSlowMotionSliderDelegate> delegate;

+ (BOOL)automaticallyNotifiesObserversOfMaxValue;
+ (BOOL)automaticallyNotifiesObserversOfMinValue;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)allowsVibrancy;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)mouseDown:(id)a0;
- (BOOL)mouseDownCanMoveWindow;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)_setNeedsUpdateTrackAndHandles;
- (void)_updateTrackAndHandles;
- (void)_updateTrackAndHandlesIfNeeded;

@end
