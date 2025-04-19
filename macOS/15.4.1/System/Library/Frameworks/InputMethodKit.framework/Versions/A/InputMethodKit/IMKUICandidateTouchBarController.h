@class NSViewController;

@interface IMKUICandidateTouchBarController : IMKUICandidateController {
    NSViewController *_viewController;
}

@property (nonatomic) unsigned long long numberOfSimilarWidthCandidates;
@property (nonatomic) BOOL secondaryCandidatesShowChevron;
@property (nonatomic) double surfaceWidth;
@property (readonly, nonatomic) NSViewController *viewController;

- (void)dealloc;
- (id)init;
- (double)numberOfColumns;
- (BOOL)handleKeyboardEvent:(id)a0;
- (BOOL)showsAnnotations;
- (void)touchesEnded;
- (void)arrangeCanvasElements;
- (id)candidateDataForSortingMethod:(id)a0;
- (id)candidateDataToFit:(id)a0;
- (struct CGSize { double x0; double x1; })customSize;
- (void)initializeCanvas;
- (id)layoutConstraintsForData:(id)a0;
- (double)lineViewWidth;
- (double)maxWidthForTouchBarCandidates;
- (double)minimumWidthForCandidate:(id)a0;
- (struct CGSize { double x0; double x1; })preferredCanvasSize;
- (void)reloadWithUpdatingFirstCandidate:(BOOL)a0;
- (void)scrubbedCandidate:(id)a0;
- (void)shouldUpdateForPressAndHold:(id)a0;
- (void)showPrimaryCandidateWindowAndSelectCandidate:(id)a0;
- (void)touchesEndedOutsideView;
- (void)updateCandidateCanvas;
- (void)updateCandidateThickness;
- (void)updateHighlightForLineView:(id)a0;
- (double)widthOfStandardRow;

@end
