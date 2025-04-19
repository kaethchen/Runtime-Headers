@class NSImageView, NSView, VUIActivityIndicatorView, NSVisualEffectView;

@interface VUIAppLoadingView : VUIBaseView {
    NSView *_wallpaperView;
    BOOL _hiding;
    double _timeout;
    double _delay;
    NSImageView *_maskView;
    NSVisualEffectView *_visualEffectView;
}

@property (retain, nonatomic) VUIActivityIndicatorView *spinner;

+ (id)loadingScreen;

- (void).cxx_destruct;
- (void)setTimeout:(double)a0;
- (void)timeout;
- (void)hide;
- (BOOL)isVisible;
- (void)hideImmediately;
- (double)hideAnimationDuration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 templateImage:(id)a1;
- (void)setLoadingDelay:(double)a0;
- (void)showOverKeyWindow;
- (void)showOverKeyWindowWithSpinnerOnly:(BOOL)a0;

@end
