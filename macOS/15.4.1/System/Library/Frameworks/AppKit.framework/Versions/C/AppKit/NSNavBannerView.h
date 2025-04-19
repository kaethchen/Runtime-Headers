@class NSBannerView;

@interface NSNavBannerView : NSView {
    NSBannerView *_bannerView;
    long long _bannerType;
}

@property long long bannerType;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)_vibrantBlendingStyleForSubtree;
- (void)_commonInit;
- (unsigned long long)_currentBannerStyle;
- (id)_preferredAppearance;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
