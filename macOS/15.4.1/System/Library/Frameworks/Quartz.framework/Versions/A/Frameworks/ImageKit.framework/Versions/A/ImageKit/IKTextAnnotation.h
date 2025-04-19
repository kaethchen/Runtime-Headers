@class NSTextField, NSString, IKComposer, IKImageLayer, IKKnobLayer, NSMutableDictionary;

@interface IKTextAnnotation : CATextLayer <NSWindowDelegate, NSTextFieldDelegate> {
    IKKnobLayer *_knobLayer;
    IKComposer *_composer;
    IKImageLayer *_imageLayer;
    NSString *_oldString;
    double _textColors[4];
    double _borderColors[4];
    double _backgroundColors[4];
    double _shadowColors[4];
    NSTextField *_textField;
    NSMutableDictionary *_attributes;
    BOOL _selected;
}

@property BOOL supportsUndo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)drawInContext:(struct CGContext { } *)a0;
- (id)knobLayer;
- (void)removeFromSuperlayer;
- (BOOL)selected;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0;
- (void)windowWillClose:(id)a0;
- (void)removeKnobLayer;
- (void)changeBackgroundColor:(id)a0;
- (void)changeForegroundColor:(id)a0;
- (unsigned int)defaultKnob;
- (void)ikMouseDown:(id)a0;
- (BOOL)isAnnotationLayer;
- (unsigned int)knobLayerFlags;
- (void)setColorComponents:(double *)a0 withColor:(id)a1;
- (void)setNewFont:(id)a0;
- (void)setup:(id)a0;
- (void)startEditing:(id)a0;
- (void)toggleDash;
- (void)toggleShadow;
- (void)updateBorderWidth:(int)a0;
- (void)updateText:(id)a0;

@end
