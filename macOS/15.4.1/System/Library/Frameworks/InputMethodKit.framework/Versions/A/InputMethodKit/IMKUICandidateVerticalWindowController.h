@class IMKUIFastTrackVerticalLayout, IMKUISingleCandidateListView, NSArray;

@interface IMKUICandidateVerticalWindowController : IMKUICandidateWindowController

@property (nonatomic) double accumulatedLengthOfCandidates;
@property (nonatomic) BOOL annotationMarginCalculated;
@property (nonatomic) struct CGSize { double width; double height; } currentSize;
@property (retain, nonatomic) IMKUIFastTrackVerticalLayout *fastTrackVerticalLayout;
@property (nonatomic) BOOL hasAnnotations;
@property (retain, nonatomic) IMKUISingleCandidateListView *listView;
@property (nonatomic) BOOL updatingCandidates;
@property (retain, nonatomic) NSArray *visibleLineIndices;
@property (nonatomic) BOOL changesSizeWhenScrolling;

- (id)init;
- (void).cxx_destruct;
- (void)moveUp:(id)a0;
- (id)UICandidates;
- (long long)accessibilityOrientation;
- (void)hide;
- (void)loadWindow;
- (void)moveDown:(id)a0;
- (void)moveLeft:(id)a0;
- (void)moveRight:(id)a0;
- (id)parentView;
- (void)updateLayout;
- (void)updateVisualElements;
- (id)visibleCandidates;
- (void)moveToBeginning;
- (id)appearanceView;
- (id)candidateItemForCandidate:(id)a0 layout:(id)a1;
- (id)candidatesSelectableByKeyboard;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForAccessibilityElement:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForListView;
- (struct CGSize { double x0; double x1; })minimumListViewSize;
- (void)moveAccessibilityElementToVisibleArea:(id)a0;
- (void)moveBackwardOneElement;
- (void)moveBackwardOnePage;
- (void)moveForwardOneElement;
- (void)moveForwardOnePage;
- (void)moveToEnd;
- (struct CGSize { double x0; double x1; })proposedInformationViewSize;
- (struct CGSize { double x0; double x1; })proposedListViewSize;
- (struct CGSize { double x0; double x1; })proposedSortingBarSize;
- (struct CGSize { double x0; double x1; })proposedWindowSize;
- (void)selectNextSortingMode;
- (void)selectPreviousSortingMode;
- (void)setCandidateGroups:(id)a0;
- (void)setTopVisibleLine:(unsigned long long)a0;
- (BOOL)shouldShowSortingBar;
- (unsigned long long)topVisibleLine;
- (struct CGSize { double x0; double x1; })totalSizeForLayout;
- (void)updateAnnotationMargin;
- (void)updateLayoutForCurrentSize;
- (void)updateLayoutTraits;
- (void)updateListView;
- (void)updateSortingBarView;
- (void)visibleIndicesChanged:(id)a0 sender:(id)a1;

@end
