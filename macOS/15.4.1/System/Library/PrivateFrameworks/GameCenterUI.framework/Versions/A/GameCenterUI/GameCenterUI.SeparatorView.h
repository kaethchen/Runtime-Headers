@interface GameCenterUI.SeparatorView : GameCenterUI.BaseCollectionReusableView {
    void /* unknown type, empty encoding */ lineView;
    void /* unknown type, empty encoding */ style;
}

@property (class, nonatomic, readonly) double separatorHeight;

@property (nonatomic, retain) void /* unknown type, empty encoding */ lineColor;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

@end
