@class NSImage;

@interface SOStaticImageView : NSView

@property (retain, nonatomic) NSImage *image;
@property BOOL imageIsOpaque;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isOpaque;
- (void)updateLayer;
- (void)viewDidChangeBackingProperties;
- (BOOL)wantsUpdateLayer;
- (void)_commonSOStaticImageViewInit;

@end
