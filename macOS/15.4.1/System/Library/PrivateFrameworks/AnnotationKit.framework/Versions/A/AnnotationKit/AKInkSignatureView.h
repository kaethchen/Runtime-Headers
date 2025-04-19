@class PKTool, PKDrawing, PKCanvasView, NSTrackingArea, NSColor;

@interface AKInkSignatureView : NSView <PKCanvasViewDelegate>

@property (retain) PKCanvasView *canvasView;
@property (copy) PKTool *tool;
@property (retain) PKDrawing *latestDrawing;
@property BOOL hasStrokes;
@property (retain) NSTrackingArea *trackingArea;
@property (retain, nonatomic) NSColor *strokeColor;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (void)clear;
- (void)teardown;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateTool;
- (void)canvasViewDrawingDidChange:(id)a0;
- (struct CGPath { } *)copyPotracedPathAndReturnDrawing:(id *)a0;

@end
