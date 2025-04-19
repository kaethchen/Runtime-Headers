@class NSImage, UXImageView, NSError;

@interface PXLoadingFailureBadgeView : UXView

@property (nonatomic) long long sizeClass;
@property (retain, nonatomic) NSImage *image;
@property (readonly, nonatomic) UXImageView *imageView;
@property (copy, nonatomic) NSError *error;

+ (id)_imageForSizeClass:(long long)a0;
+ (long long)_sizeClassForSize:(struct CGSize { double x0; double x1; })a0;
+ (struct CGSize { double x0; double x1; })sizeForSizeClass:(long long)a0;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_handleClick:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 error:(id)a1;
- (void)_handlePrimaryAction;
- (void)_installGestureRecognizers;

@end
