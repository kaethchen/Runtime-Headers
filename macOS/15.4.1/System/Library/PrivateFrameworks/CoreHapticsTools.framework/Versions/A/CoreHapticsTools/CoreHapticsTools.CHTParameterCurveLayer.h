@interface CoreHapticsTools.CHTParameterCurveLayer : CoreHapticsTools.CHTLayer {
    void /* unknown type, empty encoding */ paramType;
    void /* unknown type, empty encoding */ threadsafePointsToDraw;
    void /* unknown type, empty encoding */ contextSizedPointForControlPoints;
    void /* unknown type, empty encoding */ timePointsProcessingQueue;
    void /* unknown type, empty encoding */ contextSizedPointsProcessingQueue;
    void /* unknown type, empty encoding */ pointDrawingMode;
    void /* unknown type, empty encoding */ selectionDrawingMode;
    void /* unknown type, empty encoding */ lineDrawingMode;
    void /* unknown type, empty encoding */ controlPointRadius;
    void /* unknown type, empty encoding */ paramCurveLineWidth;
    void /* unknown type, empty encoding */ controlPointHighlightWidth;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)drawInContext:(struct CGContext { } *)a0;
- (id)initWithLayer:(id)a0;

@end
