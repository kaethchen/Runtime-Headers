@interface MusicUI.TabBannerView : NSControl {
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ artworkView;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ separatorView;
    void /* unknown type, empty encoding */ primaryButton;
    void /* unknown type, empty encoding */ bannerAction;
}

@property (nonatomic, readonly) BOOL flipped;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)accessibilityChildren;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (BOOL)isFlipped;
- (void)mouseDown:(id)a0;
- (void)applyLayout;

@end
