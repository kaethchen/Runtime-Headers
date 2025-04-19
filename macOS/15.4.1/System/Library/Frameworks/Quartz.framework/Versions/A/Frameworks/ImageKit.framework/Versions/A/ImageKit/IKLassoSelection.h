@class IKComposer, IKImageLayer, IKKnobLayer;

@interface IKLassoSelection : CALayer {
    IKComposer *_composer;
    IKImageLayer *_imageLayer;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _selectionRect;
    BOOL _creatingPath;
    struct CGPoint { double x; double y; } _mouseDownLocation;
    struct CGPoint { double x; double y; } _originalPos;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _originalBounds;
    struct CGPoint { double x0; double x1; } *_points;
    struct CGPoint { double x; double y; } _lastPoint;
    int _numberOfPoints;
    float _minX;
    float _maxX;
    float _minY;
    float _maxY;
    IKKnobLayer *_knobLayer;
    double _factor;
    double _lineWidthFactor;
    unsigned short _ant_stipple;
}

@property BOOL supportsUndo;

+ (double)fadeDuration;

- (void)dealloc;
- (void)setPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)setAnchorPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)drawInContext:(struct CGContext { } *)a0;
- (id)knobLayer;
- (void)removeFromSuperlayer;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0;
- (void)addPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)removeKnobLayer;
- (void)ikMouseDragged:(id)a0;
- (void)addCursorRects;
- (void)adjustPosition;
- (void)clearSelectionPath;
- (struct CGPoint { double x0; double x1; })constrainedPosition:(struct CGPoint { double x0; double x1; })a0 forLayer:(id)a1;
- (struct CGImage { } *)createNewMaskedImage:(struct CGImage { } *)a0;
- (void)doDrawInContext:(struct CGContext { } *)a0;
- (void)doDrawInContext:(struct CGContext { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)ikMouseDown:(id)a0;
- (void)ikMouseUp:(id)a0;
- (BOOL)isSelectionLayer;
- (void)setup:(id)a0;
- (BOOL)shouldUseOriginalLayerToDraw;
- (void)startTracking:(id)a0;

@end
