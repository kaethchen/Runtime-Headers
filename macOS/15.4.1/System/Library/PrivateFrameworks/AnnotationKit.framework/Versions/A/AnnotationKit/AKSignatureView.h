@class NSColor, CHPointStrokeFIFO, NSTrackingArea, CHBoxcarFilterPointFIFO, CHQuadCurvePointFIFO, AKBitmapFIFO;
@protocol AKSignatureViewLiveDelegate;

@interface AKSignatureView : NSView {
    struct CGPoint { double x; double y; } _lastPoint;
    id _trackingTouchID;
    double _lastSetNeedsDisplayCallToSuperTime;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _accumulatedSignatureDirtyRect;
}

@property (nonatomic) double currentWeight;
@property unsigned long long totalPointsAdded;
@property struct CGPoint { double x; double y; } strokeStartLocation;
@property struct CGPoint { double x; double y; } strokeLastLocation;
@property double strokeStartTime;
@property BOOL isAddingPointWithoutSmoothing;
@property (retain, nonatomic) CHPointStrokeFIFO *strokeFIFO;
@property (retain, nonatomic) CHBoxcarFilterPointFIFO *boxcarFIFO;
@property (retain, nonatomic) CHQuadCurvePointFIFO *interpolatingFIFO;
@property (retain, nonatomic) AKBitmapFIFO *bitmapFifo;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } aggregateInvalid;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } unionDrawingRect;
@property (readonly, nonatomic) double interfaceScale;
@property (retain) NSTrackingArea *trackingArea;
@property BOOL startedTouchDrawing;
@property (weak, nonatomic) id<AKSignatureViewLiveDelegate> liveDelegate;
@property (retain, nonatomic) NSColor *strokeColor;
@property (nonatomic) double minPressure;
@property (nonatomic) double maxPressure;
@property (nonatomic) double minThickness;
@property (nonatomic) double maxThickness;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)clear;
- (void)teardown;
- (void)_commonInit;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)acceptsFirstResponder;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)mouseDownCanMoveWindow;
- (void)pressureChangeWithEvent:(id)a0;
- (BOOL)resignFirstResponder;
- (void)setAllowedTouchTypes:(unsigned long long)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesBeganWithEvent:(id)a0;
- (void)touchesCancelledWithEvent:(id)a0;
- (void)touchesEndedWithEvent:(id)a0;
- (void)touchesMovedWithEvent:(id)a0;
- (void)continueStroke:(SEL)a0;
- (void)_forceRedisplay;
- (void)continueStrokeWithoutSmoothing:(SEL)a0;
- (void)terminateStroke;
- (double)weightForValue:(double)a0;
- (void)_endInkMode;
- (struct CGPoint { double x0; double x1; })_pointInView:(id)a0 withNormalizedDevicePosition:(struct CGPoint { double x0; double x1; })a1;
- (void)_startInkMode;
- (id)_trackedTouchInTouches:(id)a0 findNewTouch:(BOOL)a1 isNewTouch:(BOOL *)a2;
- (double)_windowBackingScaleFactor;
- (struct CGPath { } *)copyStrokedInterpolatedPath;
- (void)startStroke:(SEL)a0;

@end
