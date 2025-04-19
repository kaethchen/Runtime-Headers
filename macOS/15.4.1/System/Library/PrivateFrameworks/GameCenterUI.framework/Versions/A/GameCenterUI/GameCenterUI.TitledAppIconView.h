@class _TtC12GameCenterUI20DynamicTypeTextField;

@interface GameCenterUI.TitledAppIconView : GameCenterUI.ClickableView

@property (class, nonatomic, readonly) struct CGSize { double x0; double x1; } iconSize;
@property (class, nonatomic, readonly) double iconHorizontalPadding;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ iconView;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ titleLabel;
@property (nonatomic, readonly) _TtC12GameCenterUI20DynamicTypeTextField *accessibilityTitleLabel;

+ (id)make;
+ (struct CGSize { double x0; double x1; })preferredSizeIn:(id)a0;
+ (struct CGSize { double x0; double x1; })sizeWithFitting:(struct CGSize { double x0; double x1; })a0 traitEnvironment:(id)a1;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

@end
