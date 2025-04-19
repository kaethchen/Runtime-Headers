@interface IMKUICandidateHorizontalScrubberController : IMKUICandidateHorizontalController

- (BOOL)showsAnnotations;
- (void)arrangeCanvasElements;
- (struct CGSize { double x0; double x1; })customSize;
- (id)layoutConstraintsForData:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })recommendedWindowFrameWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateSelectionKeys;

@end
