@interface IMKUICandidateVerticallyAlignedController : IMKUIWindowBasedCandidateController

- (void)moveUp:(id)a0;
- (double)numberOfColumns;
- (void)moveDown:(id)a0;
- (void)moveLeft:(id)a0;
- (void)moveRight:(id)a0;
- (void)setupProperties;
- (void)arrangeCanvasElements;
- (BOOL)candidateViewCanScroll;
- (struct CGSize { double x0; double x1; })customSize;
- (struct CGSize { double x0; double x1; })extraSize;
- (BOOL)isSortable;
- (id)layoutConstraintsForData:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lineViewFrameWithNumber:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })preferredCanvasSize;
- (struct CGSize { double x0; double x1; })recommendedDocumentSizeWithSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })recommendedWindowFrameWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)topVisibleCandidates;
- (void)updateCanvasAfterSizeChange;
- (void)updateNumberOfLinesInWindow;
- (void)updateSelectionKeys;

@end
