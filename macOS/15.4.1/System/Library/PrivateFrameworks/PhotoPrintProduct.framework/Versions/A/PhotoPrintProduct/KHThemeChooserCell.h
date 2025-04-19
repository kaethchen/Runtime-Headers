@class NSString, NSImage, UXView, UXImageView, CALayer, UXLabel;

@interface KHThemeChooserCell : UXCollectionViewCell <NSAccessibilityGroup> {
    CALayer *_selectionLayer;
    NSImage *_themePreviewImage;
    UXView *_imageViewOverlay;
}

@property (readonly, nonatomic) UXLabel *themeTitleLabel;
@property (readonly, nonatomic) UXImageView *themePreviewImageView;
@property (readonly, nonatomic) UXImageView *cloudImageView;
@property (nonatomic) BOOL cloudImageViewVisible;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } selectionEdgeInsets;
@property (nonatomic) struct CGSize { double width; double height; } additionalCloudSpace;
@property (retain, nonatomic) NSString *themeTitle;
@property (retain, nonatomic) NSString *themeDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (BOOL)accessibilityPerformPress;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0;
- (void)initConstraints;
- (id)selectionLayer;
- (void)_layoutSelectionLayerIfNeeded;
- (void)indicateSelectionState:(BOOL)a0 animated:(BOOL)a1;
- (void)animateView:(id)a0 visible:(BOOL)a1 duration:(double)a2;
- (void)initCloudImageView;
- (void)initThemePreviewImageView;
- (void)initThemeTitleLabel;
- (void)setThemePreviewImage:(id)a0 animated:(BOOL)a1;

@end
