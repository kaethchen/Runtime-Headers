@class NSImage, NSButton;

@interface EMIMDFRCategoryButton : NSBox {
    NSButton *_imageButton;
}

@property (nonatomic) NSImage *image;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImageAlpha:(double)a0;
- (void)showHideImage:(BOOL)a0;

@end
