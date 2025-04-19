@class NSBezierPath, AXVView, AXVTextField, CAShapeLayer, NSString;

@interface AXVRotorWindow : AXVVoiceOverStyleWindow

@property (retain, nonatomic, setter=_setRotorTitleTextField:) AXVTextField *_rotorTitleTextField;
@property (retain, nonatomic, setter=_setRotorRadialView:) AXVView *_rotorRadialView;
@property (nonatomic, setter=_setSelectedRotorKnobIndex:) long long _selectedRotorKnobIndex;
@property (retain, nonatomic, setter=_setRotorKnobsLayer:) CAShapeLayer *_rotorKnobsLayer;
@property (retain, nonatomic, setter=_setRotorKnobsPath:) NSBezierPath *_rotorKnobsPath;
@property (retain, nonatomic, setter=_setSelectedRotorKnobLayer:) CAShapeLayer *_selectedRotorKnobLayer;
@property (retain, nonatomic, setter=_setRotorPointerLayer:) CAShapeLayer *_rotorPointerLayer;
@property (copy, nonatomic, setter=_setRotorTitle:) NSString *_rotorTitle;
@property (nonatomic, setter=_setRotorKnobCount:) long long _rotorKnobCount;
@property (nonatomic) double baseFontSize;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (id)_setupTitleTextField;
- (void)_setupStackView;
- (void)_adjustWindowFrameToFitContent;
- (id)_createKnobLayerForIndex:(long long)a0;
- (void)_drawCenteredCircle;
- (void)_drawCenteredPointer;
- (void)_drawKnobs;
- (void)_drawRadialRotor;
- (void)_drawSelectedKnob;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_knobBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_knobLayerBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_radialRotorBounds;
- (double)_radiansToRotateForIndex:(long long)a0;
- (void)_setupKnobsLayer;
- (id)_setupRotorRadialView;
- (void)_setupSelectedKnobLayer;
- (void)_updateRotorKnobCount:(long long)a0;
- (void)_updateRotorTitle:(id)a0;
- (struct CGSize { double x0; double x1; })_windowSizeToFitContent;
- (void)selectRotorKnobAtIndex:(long long)a0;
- (void)updateWithRotorInfo:(id)a0;

@end
