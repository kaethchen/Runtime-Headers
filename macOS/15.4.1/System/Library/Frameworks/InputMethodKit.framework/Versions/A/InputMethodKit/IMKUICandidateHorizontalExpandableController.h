@interface IMKUICandidateHorizontalExpandableController : IMKUICandidateHorizontalController

@property (nonatomic) BOOL expandedInternal;
@property (nonatomic) long long UIState;

- (void)moveUp:(id)a0;
- (double)numberOfColumns;
- (void)collapse;
- (void)expand;
- (BOOL)isExpanded;
- (void)moveDown:(id)a0;
- (void)moveLeft:(id)a0;
- (void)moveRight:(id)a0;
- (double)numberOfRows;
- (void)setDocumentSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateLayout:(id)a0;
- (void)arrangeCanvasElements;
- (void)arrowViewPressed:(id)a0;
- (double)auxiliaryViewWidth;
- (void)calibrateLayoutForCollapsedHorizontalView;
- (void)calibrateLayoutForExpandedHorizontalView;
- (BOOL)canExpand;
- (BOOL)candidateViewCanScroll;
- (void)collapseWindowWithAnimation;
- (void)collapseWindowWithoutAnimation;
- (struct CGSize { double x0; double x1; })customSize;
- (struct CGSize { double x0; double x1; })customSizeForExpansion:(BOOL)a0;
- (void)didSelectSortingMode:(id)a0;
- (id)elementsPresentInLine:(id)a0 andLine:(id)a1;
- (void)expandWindowWithAnimation;
- (BOOL)flattensViewArchitecture;
- (void)forceCollapse;
- (BOOL)isSortable;
- (id)layoutConstraintsForData:(id)a0;
- (void)moveElementsInFromTheLeft:(id)a0 inLine:(id)a1;
- (struct CGSize { double x0; double x1; })preferredCanvasSize;
- (void)prepareNewLayoutForAnimation:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })recommendedWindowFrameWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resizeWindowIfNecessary:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)selectDefaultSortingMethod;
- (void)selectNextSortingMethod;
- (void)selectPreviousSortingMethod;
- (void)selectSortingMethod:(id)a0 expand:(BOOL)a1;
- (void)setOriginalFramesForNewLine:(id)a0 originalLine:(id)a1;
- (void)setWindowFrameWithAnimation:(BOOL)a0;
- (BOOL)shouldLimitWindowSizeToCanvasSize;
- (id)topVisibleCandidates;
- (void)updateAuxiliaryViews;
- (void)updateCanvasAfterSizeChange;
- (void)updateHighlightForLineView:(id)a0;
- (void)updateSelectionKeys;
- (void)windowAnimationDidFinish;
- (void)windowDidHide;

@end
