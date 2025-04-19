@class NSArray, NSView, VUILabel, VUIProductUberBackgroundView, VUISeparatorView;

@interface VUIChannelBannerView : VUIBaseView

@property (retain, nonatomic) VUISeparatorView *separatorView;
@property (retain, nonatomic) NSView *appleTVChannelLogoView;
@property (retain, nonatomic) NSView *subscribeButton;
@property (retain, nonatomic) VUILabel *disclaimerTextLabel;
@property (retain, nonatomic) NSView *descriptionTextView;
@property (retain, nonatomic) NSArray *textLabels;
@property (retain, nonatomic) VUIProductUberBackgroundView *bgImageView;
@property (readonly, nonatomic) NSView *bgColorView;
@property (nonatomic) double logoHeight;
@property (nonatomic) BOOL isDescriptionPreferredOnPhoneSizeClass;
@property (nonatomic) double height;
@property (nonatomic) double subscribeButtonHeight;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_isSubscribed;
- (void)_layoutLabels:(id)a0 withOrigin:(struct CGPoint { double x0; double x1; })a1 maxWidth:(double)a2;
- (struct CGSize { double x0; double x1; })_layoutSubviewsWithSize:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (double)_subscribeButtonHeight;
- (void)setVuiBackgroundColor:(id)a0;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
