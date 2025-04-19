@interface GameCenterUI.SmallLockupView : GameCenterUI.BaseView {
    void /* unknown type, empty encoding */ headingLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ chevronView;
    void /* unknown type, empty encoding */ hasChevron;
}

@property (class, nonatomic, readonly) double horizontalComponentSpacing;
@property (class, nonatomic, readonly) struct CGSize { double x0; double x1; } artworkSize;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ titleLabel;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ artworkView;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

@end
