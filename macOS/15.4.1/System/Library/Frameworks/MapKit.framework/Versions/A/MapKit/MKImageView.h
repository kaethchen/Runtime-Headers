@class NSImage, NSImageView, NSColor;

@interface MKImageView : NSView {
    NSImage *_currentImage;
}

@property (retain, nonatomic) NSImage *image;
@property (readonly, nonatomic) NSImageView *imageView;
@property (retain, nonatomic) NSImage *highlightImage;
@property (retain, nonatomic) NSColor *highlightColor;
@property (nonatomic) BOOL shouldHighlight;
@property (nonatomic) long long imageContentMode;
@property (retain, nonatomic) NSColor *templateTintColor;

- (void).cxx_destruct;
- (id)_currentImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithImage:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setBackgroundStyle:(long long)a0;
- (void)sizeToFit;
- (void)_maps_common_init;
- (void)_setCurrentImage:(id)a0;
- (void)invalidateHighlightImage;

@end
