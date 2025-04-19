@class KHLayoutThumbnailManager, NSString, UXImageView, UXLabel;

@interface KHCheckoutDecorationView : UXView <NSAccessibilityGroup> {
    KHLayoutThumbnailManager *_thumbnailManager;
    struct NSEdgeInsets { double top; double left; double bottom; double right; } _imageInsets;
}

@property (readonly, nonatomic) UXImageView *imageView;
@property (readonly, nonatomic) UXImageView *decorationImageView;
@property (readonly, nonatomic) UXImageView *decorationMaskImageView;
@property (readonly, nonatomic) UXLabel *titleLabel;
@property (readonly, nonatomic) UXLabel *productLabel;
@property (readonly, nonatomic) UXLabel *pageCountLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_imageRectInImageView:(id)a0;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_setupShadow;
- (void)_requestPreviewWithProjectBundle:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)_updatePageCountLabelForProject:(id)a0;
- (id)initWithCoverLayout:(id)a0 referenceSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithPrintsProjectBundleController:(id)a0 referenceSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithProject:(id)a0 referenceSize:(struct CGSize { double x0; double x1; })a1;

@end
