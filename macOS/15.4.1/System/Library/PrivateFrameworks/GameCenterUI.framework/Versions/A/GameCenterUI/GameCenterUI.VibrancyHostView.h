@interface GameCenterUI.VibrancyHostView : NSVisualEffectView {
    void /* unknown type, empty encoding */ visualEffectGroupName;
    void /* unknown type, empty encoding */ embeddedView;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } fittingSize;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

@end
