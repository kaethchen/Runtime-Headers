@class IMKCandidates, NSString, NSArray;

@interface IMKCandidateBasedInputController : IMKInputController <IMKCandidateControllerDelegate, IMKCandidateSelectionViewDelegate, IMKCandidatesDelegate> {
    NSArray *_secondaryCandidates;
}

@property (nonatomic) BOOL primaryCandidatesShownByScrubbing;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectedRange;
@property (nonatomic) unsigned long long windowLevel;
@property (nonatomic) BOOL sInvalidateIMKTextOrientation;
@property (nonatomic) BOOL sInvalidateIsIncrementalSearchInputContext;
@property (nonatomic) BOOL sInvalidateIncrementalSearchClientGeometry;
@property (nonatomic) BOOL touchBarCandidatesDidPresent;
@property (nonatomic) unsigned long long touchBarCandidatesSelectionTimeStamp;
@property (retain, nonatomic) IMKCandidates *candidateController;
@property (retain, nonatomic) IMKCandidates *candidateControllerForScrubber;
@property (retain, nonatomic) IMKCandidates *candidateControllerForTouchBar;
@property (readonly, nonatomic) BOOL isVerticalLayout;
@property (readonly, nonatomic) BOOL isIncrementalSearchInputContext;
@property (readonly, nonatomic) unsigned long long incrementalSearchClientGeometry;
@property (nonatomic) BOOL automaticallyShowPrimaryCandidatesInSecondaryController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)didFinishInteracting:(id)a0;
- (void)insertText:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)activateServer:(id)a0;
- (void)deactivateServer:(id)a0;
- (void)setInputMethodProperty:(unsigned long long)a0 value:(id)a1;
- (void)setMarkedText:(id)a0 selectionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (long long)windowType;
- (id)inlineText;
- (void)showCandidates:(id)a0;
- (id)informationView;
- (id)makeTouchBarCandidateController;
- (void)candidateSelected:(id)a0 candidateController:(id)a1;
- (void)candidateSelectionChanged:(id)a0 candidateController:(id)a1;
- (id)candidatesForSortingMethod:(id)a0;
- (id)currentInlineText;
- (id)defaultDisplayMethod;
- (void)didHideCandidates:(id)a0;
- (void)didSelectSortingMode:(id)a0;
- (void)didSelectSortingMode:(id)a0 candidateController:(id)a1;
- (void)didShowCandidates:(id)a0;
- (void)didUpdateCandidates:(id)a0;
- (id)displayMethod;
- (id)displayMethods;
- (unsigned long long)firstVisibleLineForCandidateController:(id)a0;
- (id)functionRowItemTextInputViewController;
- (void)hideCandidates;
- (void)hideScrubberAndCancelFurtherRequests;
- (void)hideSecondaryCandidatesOnly;
- (void)invalidateClientSideInfoCache;
- (BOOL)isUsingIncrementalSearch;
- (id)makeCandidateController;
- (id)makeScrubbingCandidateController;
- (void)reflectOnScreenCandidatesInTouchBar;
- (void)reloadCandidates;
- (void)reloadSecondaryCandidatesOnly;
- (BOOL)selectDisplayMethod:(id)a0;
- (id)selectedCandidateForProposedCandidate:(id)a0 candidateController:(id)a1;
- (id)selectedDisplayMethod;
- (void)setSecondaryCandidates:(id)a0;
- (BOOL)shouldHandleTouchBarPresentationManually;
- (BOOL)shouldUpdateExistingCandidates;
- (void)showCandidateListDictionary:(id)a0 sortingModes:(id)a1;
- (void)showCandidateListDictionary:(id)a0 sortingModes:(id)a1 selectedSortingMode:(id)a2;
- (void)showCandidateListDictionary:(id)a0 sortingModes:(id)a1 selectedSortingMode:(id)a2 alignment:(long long)a3;
- (void)showScrubberPanel;
- (id)sortingMethods;
- (id)textClient;
- (void)updateCandidateController:(id)a0;
- (void)updateWindowLevel;

@end
