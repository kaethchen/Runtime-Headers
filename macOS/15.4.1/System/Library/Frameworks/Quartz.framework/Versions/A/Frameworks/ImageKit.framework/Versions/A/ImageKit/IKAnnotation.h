@class IKComposer, IKImageLayer, IKKnobLayer;

@interface IKAnnotation : CALayer {
    IKKnobLayer *_knobLayer;
    IKComposer *_composer;
    IKImageLayer *_imageLayer;
    BOOL _selected;
    BOOL _dashed;
    double _borderColors[4];
    double _backgroundColors[4];
    double _shadowColors[4];
}

@property BOOL supportsUndo;

+ (id)defaultValueForKey:(id)a0;
+ (id)defaultActionForKey:(id)a0;
+ (double)fadeDuration;

- (void)dealloc;
- (void)finalize;
- (void)cleanup;
- (void)setPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)setAnchorPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)changeColor:(id)a0;
- (void)changeFont:(id)a0;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)knobLayer;
- (void)removeFromSuperlayer;
- (BOOL)selected;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0;
- (void)removeKnobLayer;
- (void)changeBackgroundColor:(id)a0;
- (void)changeBorderColor:(id)a0;
- (void)doDrawInContext:(struct CGContext { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)ikMouseDown:(id)a0;
- (BOOL)isAnnotationLayer;
- (unsigned int)knobLayerFlags;
- (void)setColorComponents:(double *)a0 withColor:(id)a1;
- (void)setNewBorderWidth:(double)a0;
- (void)setup:(id)a0;
- (void)startEditing:(id)a0;
- (void)toggleDash;
- (void)toggleShadow;
- (void)updateBorderWidth:(int)a0;

@end
