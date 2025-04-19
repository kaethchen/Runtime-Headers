@class CAShapeLayer, CABackdropLayer, NSNumber, NSColor;

@interface AXVProgressIndicatorView : AXVHighlightView

@property (nonatomic) long long displayStyle;
@property (weak, nonatomic) CAShapeLayer *_progressLayer;
@property (weak, nonatomic) CABackdropLayer *_trackLayer;
@property (weak, nonatomic) CAShapeLayer *_trackLayerMask;
@property (weak, nonatomic) CAShapeLayer *_dotLayer;
@property (retain, nonatomic) NSNumber *_cornerRadiusNum;
@property (nonatomic) long long quadrant;
@property (nonatomic) BOOL showCenterDot;
@property (nonatomic) BOOL showTrackLayer;
@property (nonatomic) BOOL showProgressLayer;
@property (retain, nonatomic) NSColor *primaryColor;

- (void).cxx_destruct;
- (id)makeBackingLayer;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setNeedsDisplay:(BOOL)a0;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (struct CGPath { } *)_newCGPathWithBorderRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void)_animatePressWithSizeTransform:(unsigned long long)a0;
- (void)_animateProgressLayerForDuration:(double)a0;
- (id)_bezierPathOfQuadrant:(long long)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_configureTopLayer:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_dotRectForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 width:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_progressTrackBoundsForStyle:(long long)a0;
- (void)_updateProgressVisibility;
- (void)_updateTrackVisibility;
- (void)animateDoublePress;
- (void)animatePress;
- (void)animateProgressForDuration:(double)a0;
- (void)cancelProgressAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 displayStyle:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 displayStyle:(long long)a1 quadrant:(long long)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 displayStyle:(long long)a1 quadrant:(long long)a2 cornerRadius:(id)a3;
- (void)resetPressAnimation;

@end
