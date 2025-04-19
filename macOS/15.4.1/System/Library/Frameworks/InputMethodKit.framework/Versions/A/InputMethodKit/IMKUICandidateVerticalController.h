@interface IMKUICandidateVerticalController : IMKUIWindowBasedCandidateController

@property (readonly, nonatomic) double minimumSelectionViewWidth;

- (BOOL)isExpanded;
- (double)numberOfRows;
- (double)maxHeight;
- (void)arrangeCanvasElements;
- (struct CGSize { double x0; double x1; })customSize;
- (struct CGSize { double x0; double x1; })extraSize;
- (BOOL)isSortable;
- (id)layoutConstraintsForData:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })recommendedWindowFrameWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)topVisibleCandidates;
- (void)updateCanvasAfterSizeChange;
- (void)updateSelectionKeys;

@end
