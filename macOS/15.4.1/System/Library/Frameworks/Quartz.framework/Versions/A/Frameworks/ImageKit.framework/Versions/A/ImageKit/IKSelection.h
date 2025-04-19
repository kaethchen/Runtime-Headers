@class IKComposer, IKImageLayer, IKKnobLayer;

@interface IKSelection : CALayer {
    IKKnobLayer *_knobLayer;
    IKComposer *_composer;
    IKImageLayer *_imageLayer;
    BOOL _selected;
}

@property BOOL supportsUndo;

+ (id)defaultValueForKey:(id)a0;
+ (id)defaultActionForKey:(id)a0;

- (void)dealloc;
- (void)setPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)setAnchorPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)knobLayer;
- (void)removeFromSuperlayer;
- (BOOL)selected;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0;
- (void)removeKnobLayer;
- (struct CGImage { } *)createNewMaskedImage:(struct CGImage { } *)a0;
- (void)doDrawInContext:(struct CGContext { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)ikMouseDown:(id)a0;
- (BOOL)isSelectionLayer;
- (unsigned int)knobLayerFlags;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForBorderWidth;
- (void)setup:(id)a0;
- (BOOL)shouldUseOriginalLayerToDraw;
- (void)startEditing:(id)a0;

@end
