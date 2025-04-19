@class IKComposer, IKImageLayer, CALayer, IKKnob;

@interface IKKnobLayer : CALayer {
    IKComposer *_composer;
    IKImageLayer *_imageLayer;
    struct CGPoint { double x; double y; } _eventMouseDownLocation;
    CALayer *_originalLayer;
    IKKnob *_knobs[12];
    int _activeKnob;
    int _hilightKnob;
    int _dragMode;
    struct CGPoint { double x; double y; } _originalPosition;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _originalBounds;
    struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } _originalTransform;
    double _originalAngle;
    BOOL _altKeyPressedOnMouseDown;
    BOOL _cmdKeyPressedOnMouseDown;
    BOOL _useOriginalLayerToDraw;
    BOOL _quitting;
    BOOL _undoGroupingActive;
}

@property id delegate;

- (void)dealloc;
- (void)finalize;
- (void)cleanup;
- (void)setPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)setAnchorPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)composer;
- (void)ikMouseDragged:(id)a0;
- (void)addCursorRects;
- (void)adjustPosition;
- (id)constrainedPosition:(id)a0 forLayer:(id)a1;
- (void)ikMouseDown:(id)a0;
- (void)ikMouseUp:(id)a0;
- (id)initForLayer:(id)a0 imageLayer:(id)a1 flags:(unsigned int)a2;
- (void)loadKnobImage;
- (void)moveAnnotationByX:(int)a0 Y:(int)a1;
- (void)positionKnobs;
- (void)setActiveKnob:(int)a0;
- (void)setAnchorPoint2:(struct CGPoint { double x0; double x1; })a0;
- (void)setBounds2:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setPosition2:(struct CGPoint { double x0; double x1; })a0;
- (void)setTransform2:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a0;
- (void)setUndoGroupingActive:(BOOL)a0;
- (void)setUseOriginalLayerToDraw:(BOOL)a0;
- (double)snapAngle:(double)a0;
- (void)startTracking:(id)a0;
- (void)swapKnobsHorizontal;
- (void)swapKnobsVertical;
- (void)swapKnobsVerticalAndHorizontal;
- (void)unbindActions;

@end
