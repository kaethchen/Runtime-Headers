@class IMKUICandidateBarView, NSMutableDictionary, IMKUICandidateLineLayout, IMKUICandidateLineLayoutIterator, IMKUICandidateStepperView;

@interface IMKUICandidateSteppingWindowController : IMKUICandidateWindowController <IMKUICandidateItemViewHandling, IMKUICandidateStepperViewDelegate>

@property (retain, nonatomic) IMKUICandidateBarView *candidateBar;
@property (retain, nonatomic) NSMutableDictionary *candidateIdentifierToViewMap;
@property (nonatomic) long long lineIndex;
@property (retain, nonatomic) IMKUICandidateLineLayoutIterator *lineLayoutIterator;
@property (retain, nonatomic) IMKUICandidateLineLayout *lineLayout;
@property (retain, nonatomic) IMKUICandidateStepperView *stepperView;
@property (readonly, nonatomic) BOOL canMoveUpward;
@property (readonly, nonatomic) BOOL canMoveDownward;
@property (nonatomic) BOOL showsStepper;

- (id)init;
- (void).cxx_destruct;
- (id)parentView;
- (void)updateLayout;
- (void)updateVisualElements;
- (id)visibleCandidates;
- (void)selectionDidChangeForCandidate:(id)a0;
- (void)updateWindowFrameWithAnimation:(BOOL)a0;
- (void)moveToBeginning;
- (id)candidateAtLocalIndex:(unsigned long long)a0;
- (id)candidateItemAtLocalIndex:(long long)a0;
- (id)candidateItemForCandidate:(id)a0 layout:(id)a1;
- (id)candidatesSelectableByKeyboard;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForAccessibilityElement:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForSelectedIndex;
- (unsigned long long)localSelectedIndex;
- (void)moveAccessibilityElementToVisibleArea:(id)a0;
- (void)moveBackwardOneElement;
- (void)moveBackwardOneLine;
- (void)moveBackwardOnePage;
- (void)moveForwardOneElement;
- (void)moveForwardOneLine;
- (void)moveForwardOnePage;
- (void)moveToEnd;
- (struct CGSize { double x0; double x1; })preferredSizeForItem:(id)a0 layout:(id)a1;
- (struct CGSize { double x0; double x1; })recommendedWindowSize;
- (void)selectCandidateIntersectingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 movement:(long long)a1;
- (void)selectFirstCandidateInLineIfNecessary;
- (void)stepperViewDownArrowPressed;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })stepperViewFrame;
- (void)stepperViewUpArrowPressed;
- (void)updateLayoutTraits;
- (unsigned long long)visibleElementCount;
- (id)visibleSelectionKeys;

@end
