@interface GameCenterUI.ContinuePlayingEmptyStateView : NSView {
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ button;
    void /* unknown type, empty encoding */ buttonHandler;
}

@property (nonatomic, readonly) BOOL flipped;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

@end
