@class NSString, NSImage;

@interface GameCenterUI.DetailView : GameCenterUI.BaseView {
    void /* unknown type, empty encoding */ previousTitleTextColor;
    void /* unknown type, empty encoding */ previousSubtitleTextColor;
    void /* unknown type, empty encoding */ chevronView;
    void /* unknown type, empty encoding */ accessory;
    void /* unknown type, empty encoding */ accessoryAction;
    void /* unknown type, empty encoding */ style;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ titleLabel;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ subtitleLabel;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ imageView;
@property (nonatomic, retain) NSImage *image;
@property (nonatomic, retain) void /* unknown type, empty encoding */ accessoryView;
@property (nonatomic, copy) id /* block */ accessoryAction;
@property (nonatomic) void /* unknown type, empty encoding */ disabled;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;
- (void)didTapWithAccessoryView:(id)a0;

@end
