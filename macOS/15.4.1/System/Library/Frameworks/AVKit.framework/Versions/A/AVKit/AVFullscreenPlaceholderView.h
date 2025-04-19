@class NSArray, NSImageView, NSTextField;

@interface AVFullscreenPlaceholderView : NSView {
    BOOL _viewHasBeenSetUp;
    BOOL _scaleHasBeenSetUp;
    unsigned long long _activeIndicatorScale;
    NSArray *_variableConstraints;
    NSImageView *_imageView;
    NSTextField *_infoTextLabel;
}

+ (unsigned long long)_indicatorScaleForSize:(struct CGSize { double x0; double x1; })a0;

- (id)init;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewWillMoveToWindow:(id)a0;
- (void)_updateIndicatorVisibilityState;
- (id)_largeScaleIndicatorLayoutConstraints;
- (id)_mediumScaleIndicatorLayoutConstraints;
- (void)_setUpViewIfNeeded;
- (id)_smallScaleIndicatorLayoutConstraints;
- (void)_updateIndicatorScaleConstraints;
- (void)_updateIndicatorScaleIfNeeded;

@end
