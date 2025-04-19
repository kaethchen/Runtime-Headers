@class NSColor, _TtC12GameCenterUI11ArtworkView, NSString;

@interface GameCenterUI.ArtworkView : GameCenterUI.BaseView {
    void /* unknown type, empty encoding */ imageLayer;
    void /* unknown type, empty encoding */ highlightLayer;
    void /* unknown type, empty encoding */ isCornerRadiusInvalid;
    void /* unknown type, empty encoding */ isStyleInvalid;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ accessibilityDescription;
}

@property (class, nonatomic, readonly) NSColor *iconBorderColor;
@property (class, nonatomic, readonly) double highlightDefaultCornerRadius;
@property (class, nonatomic, readonly) _TtC12GameCenterUI11ArtworkView *iconArtworkView;

@property (nonatomic, retain) void /* unknown type, empty encoding */ artworkTintColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) void /* unknown type, empty encoding */ imageSize;
@property (nonatomic, copy) NSString *magnificationFilter;
@property (nonatomic, copy) NSString *minificationFilter;
@property (nonatomic, retain) void /* unknown type, empty encoding */ image;
@property (nonatomic) void /* unknown type, empty encoding */ isHighlighted;
@property (nonatomic, copy) NSString *accessibilityDescription;

- (void).cxx_destruct;
- (void)layout;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (void)updateLayer;
- (void)viewDidChangeBackingProperties;
- (void)showWithImage:(id)a0 isAnimationPermitted:(BOOL)a1;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measureToFit:(struct CGSize { double x0; double x1; })a0 with:(id)a1;

@end
