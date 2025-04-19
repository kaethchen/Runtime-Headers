@class AKPageController, PKCanvasView, NSHashTable, PKInk;
@protocol AKInkOverlayViewDelegate;

@interface AKInkOverlayView : NSView <PKCanvasViewDelegate> {
    PKInk *_ink;
    NSHashTable *_reportedStrokes;
}

@property (weak) id drawingUndoTarget;
@property struct CGSize { double width; double height; } canvasSizeInPKDrawingSpace;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } previousPageRectInAKModel;
@property (weak) AKPageController *pageController;
@property (retain) PKCanvasView *canvasView;
@property (weak) id<AKInkOverlayViewDelegate> delegate;
@property (copy) PKInk *ink;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromPageControllerModelSpace:(id)a1 toDrawingInCanvasViewSpace:(id)a2;
+ (id)newAKInkOverlayViewForCurrentPlatformWithPageController:(id)a0 drawingUndoTarget:(id)a1;
+ (id)newDrawingUndoTargetWithPageController:(id)a0;

- (void).cxx_destruct;
- (void)teardown;
- (void)awakeFromNib;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToSuperview;
- (void)viewWillMoveToSuperview:(id)a0;
- (id)updatedDrawingForPageRectUpdate;
- (void)_calculateFixedPixelSize:(struct CGSize { double x0; double x1; } *)a0 drawingScale:(double *)a1;
- (void)_canvasView:(id)a0 beganStroke:(id)a1;
- (void)_canvasView:(id)a0 cancelledStroke:(id)a1;
- (void)_canvasView:(id)a0 endedStroke:(id)a1;
- (void)_updateCanvasViewInk;
- (BOOL)canvasNeedsUpdate;
- (void)canvasViewDidBeginDrawing:(id)a0;
- (void)canvasViewDidEndDrawing:(id)a0;
- (void)canvasViewDrawingDidChange:(id)a0;
- (void)commonPostInit;
- (id)initWithPageController:(id)a0 drawingUndoTarget:(id)a1;
- (void)removeStrokesFromDrawing:(id)a0;
- (void)setupInkView;

@end
