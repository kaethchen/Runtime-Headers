@class PKRulerLayer, PKRulerView;
@protocol PKRulerDelegate;

@interface PKRulerController : NSObject

@property (retain, nonatomic) PKRulerLayer *rulerLayer;
@property (nonatomic) struct { int arcType; BOOL before; double snapAngle; } rulerState;
@property (nonatomic) struct { int arcType; BOOL before; double snapAngle; } previousRulerState;
@property (nonatomic) BOOL rulerWasShownViaGesture;
@property (nonatomic) BOOL isInteractingWithRuler;
@property (nonatomic) BOOL canRulerSnapToAngle;
@property (nonatomic) BOOL lastTouchWasMaskedByRuler;
@property (nonatomic) BOOL lastDrawingWasMaskedByRuler;
@property (nonatomic) BOOL lastDrawingWasSnappedToRuler;
@property (weak, nonatomic) id<PKRulerDelegate> delegate;
@property (readonly, nonatomic) BOOL rulerSelected;
@property (nonatomic) BOOL rulerIsRotating;
@property (retain, nonatomic) PKRulerView *rulerView;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } rulerStartTransform;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } rulerTransform;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } defaultRulerTransform;

+ (id)sharedRulerView;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)hideUI;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })canvasTransform;
- (void)_configureRuler;
- (void)endRulerDrawing;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })angleSnapRulerTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 aroundOrigin:(struct CGPoint { double x0; double x1; })a1;
- (struct CGPoint { double x0; double x1; })applyTransformToTouchLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)cancelNonDrawingGestures;
- (void)drawingCancelled:(id /* block */)a0;
- (void)ensureRulerIsFullyOnscreen;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })ensureRulerTransformIsFullyOnscreen:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (double)getRulerCenterTValueOnScreenForTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)hideRuler;
- (void)hideRulerAnimated:(BOOL)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })pixelSnapRulerTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)resetRuler;
- (void)resetRulerTransform;
- (void)setupGestures;
- (void)showRuler;
- (void)startRulerDrawing;

@end
