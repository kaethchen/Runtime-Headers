@class PKInk, PKDrawing, PKTool;
@protocol PKCanvasViewDelegate;

@interface PKCanvasView : NSView

@property (weak, nonatomic) id<PKCanvasViewDelegate> delegate;
@property (copy, nonatomic) PKDrawing *drawing;
@property (retain, nonatomic) PKInk *ink;
@property (retain, nonatomic) PKTool *tool;
@property (nonatomic, getter=isFingerDrawingEnabled) BOOL fingerDrawingEnabled;
@property (nonatomic) BOOL disableWideGamut;
@property (nonatomic) BOOL rulerEnabled;
@property (weak, nonatomic) id drawingUndoTarget;
@property (nonatomic) SEL drawingUndoSelector;

- (void).cxx_destruct;
- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setOpaque:(BOOL)a0;
- (struct CGSize { double x0; double x1; })_fixedPixelSize;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })strokeTransform;
- (void)_drawingDidChange;
- (void)_fullyRendered;
- (void)_setDrawing:(id)a0 alreadyRenderedDrawing:(id)a1 imageForAlreadyRenderedDrawing:(id)a2 fullyRenderedCompletionBlock:(id /* block */)a3;
- (void)_setFixedPixelSize:(struct CGSize { double x0; double x1; })a0 drawingScale:(double)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })drawingTransform;
- (void)imageWithCompletionBlock:(id /* block */)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 drawingWidth:(double)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fixedPixelSize:(struct CGSize { double x0; double x1; })a1 drawingScale:(double)a2 layerFixedPixelSize:(BOOL)a3;
- (void)performUndo:(id)a0;
- (void)set_fixedPixelSize:(struct CGSize { double x0; double x1; })a0;

@end
