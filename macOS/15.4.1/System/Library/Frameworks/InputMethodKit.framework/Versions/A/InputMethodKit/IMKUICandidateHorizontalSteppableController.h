@interface IMKUICandidateHorizontalSteppableController : IMKUICandidateHorizontalController

- (double)numberOfColumns;
- (void)arrangeCanvasElements;
- (struct CGSize { double x0; double x1; })customSize;
- (void)didUpdateTopVisibleLine;
- (id)layoutConstraintsForData:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })recommendedWindowFrameWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stepperViewDownArrowPressed;
- (void)stepperViewUpArrowPressed;
- (void)updateAuxiliaryViews;
- (void)updateSelectionKeys;
- (void)updateStepper;

@end
