@class CALayer;

@interface IKSSImageView : NSView {
    CALayer *_imageLayer;
    struct CGImage { } *_image;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rect;
}

- (BOOL)acceptsFirstResponder;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyDown:(id)a0;
- (void)mouseDown:(id)a0;
- (BOOL)performKeyEquivalent:(id)a0;
- (void)hideContent;
- (BOOL)isAtActualSize;
- (void)setImage:(struct CGImage { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 orientation:(int)a2 transitionTime:(double)a3 index:(long long)a4;
- (void)switchToActualSize:(double)a0;
- (void)switchToFullScreen:(double)a0;

@end
