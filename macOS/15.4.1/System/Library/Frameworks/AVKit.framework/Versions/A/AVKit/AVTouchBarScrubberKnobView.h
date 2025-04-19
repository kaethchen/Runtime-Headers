@class AVThumbnail, NSView, AVPlayerLayer, AVTimer, NSLayoutConstraint;

@interface AVTouchBarScrubberKnobView : NSView {
    BOOL _expanded;
    double _expandAnimationProgress;
    double _normalizedCenteringValue;
    AVTimer *_expandTimer;
    long long _animationCount;
    AVThumbnail *_thumbnail;
    NSView *_expandableInnerKnobView;
    NSView *_knobContentView;
    AVPlayerLayer *_scrubPlayerLayer;
    NSLayoutConstraint *_expandableInnerKnobViewLeftConstraint;
    NSLayoutConstraint *_expandableInnerKnobViewRightConstraint;
}

@property double expandAnimationProgress;
@property double normalizedCenteringValue;
@property (retain) AVThumbnail *thumbnail;
@property (retain) AVPlayerLayer *scrubPlayerLayer;
@property (getter=isExpanded) BOOL expanded;
@property (readonly) NSView *expandableInnerKnobView;

+ (id)defaultAnimationForKey:(id)a0;

- (void).cxx_destruct;
- (BOOL)_isAnimating;
- (void)_stopAnimating;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_startAnimating;
- (void)_updateInnerKnobViewConstraints;
- (BOOL)_shouldShowThumbnail;
- (void)_updateLayerContents;
- (void)expandAfterDelay;

@end
