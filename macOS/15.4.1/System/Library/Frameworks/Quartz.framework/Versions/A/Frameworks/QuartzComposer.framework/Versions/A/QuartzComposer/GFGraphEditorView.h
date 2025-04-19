@class NSScrollView, GFNodeManagerView;

@interface GFGraphEditorView : NSView {
    NSScrollView *_scrollView;
    GFNodeManagerView *_nodeManager;
    void *_unused[4];
}

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)backgroundColor;
- (void)_finishInitialization;
- (id)gridColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;
- (void)removeFromSuperview;
- (void)resizeSubviewsWithOldSize:(struct CGSize { double x0; double x1; })a0;
- (void)setBackgroundColor:(id)a0;
- (void)setGridColor:(id)a0;
- (void)viewDidMoveToWindow;
- (id)graph;
- (void)setGraph:(id)a0;
- (float)zoomFactor;
- (void)setZoomFactor:(float)a0;
- (void)__contentUpdated:(id)a0;
- (void)__instantiateNode:(id)a0;
- (void)setNodeManager:(id)a0;
- (void)__selectionUpdated:(id)a0;
- (void)_setGraphView:(id)a0;
- (BOOL)alignNodes;
- (BOOL)drawsShadows;
- (struct CGPoint { double x0; double x1; })editorCenter;
- (struct CGSize { double x0; double x1; })editorSize;
- (id)graphView;
- (unsigned long long)gridStep;
- (id)nodeManager;
- (void)printWithInfo:(id)a0 showingPrintPanel:(BOOL)a1;
- (void)setAlignNodes:(BOOL)a0;
- (void)setDrawsShadows:(BOOL)a0;
- (void)setEditorCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)setEditorSize:(struct CGSize { double x0; double x1; })a0;
- (void)setGridStep:(unsigned long long)a0;
- (void)setTooltipDelay:(double)a0;
- (void)showGraphEditorInspector:(id)a0;
- (double)tooltipDelay;
- (void)zoomToFitAll;
- (void)zoomToFitSelection;

@end
