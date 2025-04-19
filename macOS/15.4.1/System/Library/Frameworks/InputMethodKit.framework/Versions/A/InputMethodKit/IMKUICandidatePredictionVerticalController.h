@interface IMKUICandidatePredictionVerticalController : IMKUICandidateVerticalController

- (void)moveUp:(id)a0;
- (void)moveDown:(id)a0;
- (double)numberOfRows;
- (void)arrangeCanvasElements;
- (struct CGSize { double x0; double x1; })customSize;
- (void)updateCandidateSelection;
- (void)willUpdateCandidateCanvas;

@end
