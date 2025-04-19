@interface IMKUICandidateVerticallyAlignedScrubberController : IMKUICandidateVerticallyAlignedController

- (double)numberOfColumns;
- (double)maxWidth;
- (BOOL)showsAnnotations;
- (void)arrangeCanvasElements;
- (struct CGSize { double x0; double x1; })customSize;

@end
