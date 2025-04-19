@class PHPerson, NSImageView, CALayer, NSColor;

@interface PXRoundImageView : NSImageView {
    NSImageView *_realImageView;
}

@property (nonatomic) int currentRequestID;
@property (nonatomic) struct CGSize { double width; double height; } currentRequestSize;
@property (readonly, nonatomic) CALayer *imageLayer;
@property (retain, nonatomic) PHPerson *representedPerson;
@property (retain, nonatomic) NSColor *backgroundColor;

- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (id)image;
- (void)layout;
- (double)displayScale;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImageScaling:(unsigned long long)a0;
- (void)setNeedsLayout;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)_setImage:(id)a0 contentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_updateCorner;
- (void)_updateImageForFaceCropRequestID:(int)a0 image:(id)a1 contentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 forceUpdate:(BOOL)a3 error:(id)a4;
- (void)_updateImageIfNeeded;

@end
