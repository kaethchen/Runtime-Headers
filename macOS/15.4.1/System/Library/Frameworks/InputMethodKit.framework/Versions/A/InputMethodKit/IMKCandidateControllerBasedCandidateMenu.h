@class IMKCandidateList, NSString, IMKCandidate, IMKCandidates;
@protocol IMKTextInput, IMKCandidateMenuDelegate;

@interface IMKCandidateControllerBasedCandidateMenu : NSObject <IMKCandidateMenu>

@property (retain, nonatomic) IMKCandidateList *candidateList;
@property (readonly, nonatomic) IMKCandidates *candidateController;
@property (retain, nonatomic) id<IMKTextInput> textInput;
@property (weak, nonatomic) id<IMKCandidateMenuDelegate> delegate;
@property (readonly, nonatomic) BOOL isShown;
@property (retain, nonatomic) IMKCandidate *focusedCandidate;
@property (readonly, nonatomic) IMKCandidateList *visibleCandidates;
@property (nonatomic) unsigned long long candidateStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)didFinishInteracting:(id)a0;
- (void)hide;
- (void)showCandidates:(id)a0;
- (void)candidateSelected:(id)a0 candidateController:(id)a1;
- (void)candidateSelectionChanged:(id)a0 candidateController:(id)a1;
- (void)didHideCandidates:(id)a0;
- (void)didSelectSortingMode:(id)a0 candidateController:(id)a1;
- (void)didShowCandidates:(id)a0;
- (void)didUpdateCandidates:(id)a0;
- (unsigned long long)firstVisibleLineForCandidateController:(id)a0;
- (id)initWithCandidateController:(id)a0;
- (id)initWithCandidateController:(id)a0 textInput:(id)a1;
- (void)moveFocusDown;
- (void)moveFocusLeft;
- (void)moveFocusRight;
- (void)moveFocusUp;
- (unsigned long long)onScreenPanelTypeForCandidateStyle:(unsigned long long)a0;
- (unsigned long long)panelTypeForCandidateStyle:(unsigned long long)a0 isTouchBar:(BOOL)a1;
- (BOOL)selectCandidateNumbered:(unsigned long long)a0;
- (void)selectFocusedCandidate;
- (id)selectedCandidateForProposedCandidate:(id)a0 candidateController:(id)a1;
- (unsigned long long)touchBarPanelTypeForCandidateStyle:(unsigned long long)a0;

@end
