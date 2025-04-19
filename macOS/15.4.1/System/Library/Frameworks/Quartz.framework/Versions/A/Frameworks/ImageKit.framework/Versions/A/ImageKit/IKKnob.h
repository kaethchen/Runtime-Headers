@class IKImageLayer, CALayer;

@interface IKKnob : CALayer {
    IKImageLayer *_imageLayer;
    CALayer *_originalLayer;
    int _mode;
}

+ (id)defaultActionForKey:(id)a0;

- (void)select;
- (void)setPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)setAnchorPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)knobLayer;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)deselect;
- (void)addCursorRects:(id)a0;
- (void)ikMouseDragged:(id)a0;
- (void)ikMouseDown:(id)a0;
- (void)ikMouseUp:(id)a0;
- (void)setImageLayer:(id)a0 originalLayer:(id)a1 mode:(int)a2;

@end
