@class NSScrollView, QCTimeLineView, NSButton, QCKeyFrameEditor;

@interface QCTimeLineEditorView : NSView {
    QCKeyFrameEditor *keyFrameEditor;
    NSButton *createNewTimeLine;
    NSButton *removeSelectedTimeLine;
    NSButton *curveHullsButton;
    NSButton *legendVisibleButton;
    NSButton *controlPointsButton;
    NSButton *fitSelectedButton;
    NSButton *fitAllButton;
    NSScrollView *_scrollView;
    QCTimeLineView *_timeLineView;
}

- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;
- (void)resizeSubviewsWithOldSize:(struct CGSize { double x0; double x1; })a0;
- (void)tlZoomToFitAll:(id)a0;
- (void)createNewTimeLine:(id)a0;
- (void)removeSelectedTimeLine:(id)a0;
- (void)setPatch:(id)a0;
- (void)tlZoomIn:(id)a0;
- (void)tlZoomOut:(id)a0;
- (void)tlZoomToFitSelection:(id)a0;
- (void)toggleCurveHulls:(id)a0;
- (void)toggleLegendVisible:(id)a0;
- (void)updateUI:(id)a0;

@end
