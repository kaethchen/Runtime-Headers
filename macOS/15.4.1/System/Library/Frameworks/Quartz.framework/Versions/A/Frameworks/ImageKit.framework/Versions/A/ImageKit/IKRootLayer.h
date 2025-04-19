@class IKImageLayer, IKImageView;

@interface IKRootLayer : CALayer {
    IKImageView *_ikImageView;
    IKImageLayer *_ikImageLayer;
}

- (id)init;
- (void)setPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)setAnchorPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })ikConvertEventLocationInWindow:(struct CGPoint { double x0; double x1; })a0 toLayer:(id)a1;
- (id)ikRootLayer;
- (id)ikView;
- (void)setIKView:(id)a0;
- (void)setup:(id)a0;

@end
