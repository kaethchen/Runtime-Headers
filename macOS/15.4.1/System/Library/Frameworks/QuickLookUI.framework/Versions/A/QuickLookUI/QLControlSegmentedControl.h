@class NSMutableArray;

@interface QLControlSegmentedControl : NSSegmentedControl {
    NSMutableArray *_controlSegments;
}

- (void).cxx_destruct;
- (void)rightMouseDown:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)viewDidHide;
- (void)viewDidMoveToWindow;
- (void)viewDidUnhide;
- (void)viewWillMoveToWindow:(id)a0;
- (void)addSegment:(id)a0;
- (double)MediaUI_slice;
- (void)removeSegment:(id)a0;
- (id)segmentForEvent:(id)a0;
- (void)segmentedControlPressed:(id)a0;
- (void)updateSegment:(id)a0 forWindow:(id)a1;

@end
