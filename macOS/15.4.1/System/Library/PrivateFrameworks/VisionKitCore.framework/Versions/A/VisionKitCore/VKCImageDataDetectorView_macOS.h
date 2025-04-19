@class VKCDataDetectorHighlightView, NSTrackingArea, VKCBaseDataDetectorElement, VKQuad, VKCImageDataDetectorViewHighlightButton;

@interface VKCImageDataDetectorView_macOS : VKCImageDataDetectorView

@property (retain, nonatomic) VKCBaseDataDetectorElement *highlightedElement;
@property (retain, nonatomic) VKCDataDetectorHighlightView *highlightView;
@property (retain, nonatomic) VKQuad *buttonQuad;
@property (retain, nonatomic) VKQuad *ddBottomQuad;
@property (retain, nonatomic) NSTrackingArea *trackingArea;
@property (retain, nonatomic) VKCImageDataDetectorViewHighlightButton *highlightButtonImageView;

- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)magnifyWithEvent:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (id)elementAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)updateCursorForEvent:(id)a0;
- (double)angleOfQuad:(id)a0 LTR:(BOOL)a1;
- (struct CGSize { double x0; double x1; })buttonImageSizeFromQuad:(id)a0 baseline:(struct CGPoint { double x0; double x1; } *)a1 LTR:(BOOL)a2 finalIsLTR:(BOOL *)a3;
- (double)closestDistanceFromLine:(struct CGPoint { double x0; double x1; } *)a0 point:(struct CGPoint { double x0; double x1; })a1 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct VKEdgeDistance { double x0; double x1; })edgeDistanceFromLine:(struct CGPoint { double x0; double x1; } *)a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)highlightedElementContainsPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)needsRotationOffsetForElementQuad:(id)a0 buttonQuad:(id)a1 isLTR:(BOOL)a2;
- (id)pathForDataDetectorElement:(id)a0;
- (id)quadAddingButtonQuad:(id)a0 toElementQuad:(id)a1 LTR:(BOOL)a2;
- (void)setNormalizedVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)setupButtonForElement:(id)a0;
- (void)updateCursorForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)updateHighlightForPoint:(struct CGPoint { double x0; double x1; })a0;

@end
