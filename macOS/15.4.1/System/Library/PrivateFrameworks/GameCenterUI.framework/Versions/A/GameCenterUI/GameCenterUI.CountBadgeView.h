@class _TtC12GameCenterUI20DynamicTypeTextField, NSLayoutYAxisAnchor;

@interface GameCenterUI.CountBadgeView : NSView {
    void /* unknown type, empty encoding */ size;
    void /* unknown type, empty encoding */ countLabel;
}

@property (nonatomic, readonly) NSLayoutYAxisAnchor *firstBaselineAnchor;
@property (nonatomic, readonly) _TtC12GameCenterUI20DynamicTypeTextField *accessibilityCountLabel;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

@end
