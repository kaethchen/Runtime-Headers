@class CALayer, NSImage;

@interface ICMImageGalleryQuadEditorLayerImageView : NSView

@property (retain, nonatomic) CALayer *imageLayer;
@property (retain, nonatomic) NSImage *image;
@property (nonatomic) long long orientation;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImage:(id)a0 orientation:(long long)a1;

@end
