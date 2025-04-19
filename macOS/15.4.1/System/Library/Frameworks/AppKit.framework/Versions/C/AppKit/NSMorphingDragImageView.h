@class NSImage, NSImageView;

@interface NSMorphingDragImageView : NSView {
    NSImageView *_previousImageView;
    NSImageView *_currentImageView;
}

@property (retain, nonatomic) NSImage *image;

- (void).cxx_destruct;
- (id)_createImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImage:(id)a0 animated:(BOOL)a1;

@end
