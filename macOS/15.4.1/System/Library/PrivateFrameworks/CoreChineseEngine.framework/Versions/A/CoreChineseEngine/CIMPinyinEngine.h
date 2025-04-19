@class CIMMecabraEngine, NSString, NSViewController, CIMCandidate;

@interface CIMPinyinEngine : CIMBaseEngine

@property (nonatomic) BOOL capsLockEnabled;
@property (nonatomic) BOOL lastCharacterWasNumber;
@property (nonatomic) BOOL leftSingleQuotationMarkInserted;
@property (nonatomic) BOOL leftDoubleQuotationMarkInserted;
@property (nonatomic) NSString *pairedPunctuationsInsertedInLastAction;
@property (retain, nonatomic) CIMMecabraEngine *mecabraEngine;
@property (retain, nonatomic) CIMCandidate *selectedCandidate;
@property (retain, nonatomic) NSViewController *strokeInformationViewController;
@property (nonatomic) BOOL previousInputSelectedTone;
@property (nonatomic) BOOL usesStandardPinyinKeyboardLayout;
@property (readonly, nonatomic) BOOL isShuangpin;
@property (readonly, nonatomic) CIMCandidate *selectedMecabraCandidate;

+ (id)contextualVariantMapping;

- (void).cxx_destruct;
- (void)reset;
- (unsigned long long)panelType;
- (void)updateSettings;
- (void)endSession;
- (id)helpAnchorName;
- (id)inputString;
- (int)mecabraInputMethodType;
- (id)informationView;
- (id)currentInlineText;
- (BOOL)shouldUpdateExistingCandidates;
- (id)sortingMethods;
- (void)updateCandidateController:(id)a0;
- (id)mecabraEnvironment;
- (id)convertedPunctuationFromString:(id)a0;
- (void)updateSettingsForKeyboardLayout;
- (id)candidateListDictionaryWithSortingMethod:(id)a0;
- (void)checkSettings:(id)a0 withClient:(id)a1;
- (BOOL)commitCandidate:(id)a0 selectionMethod:(id)a1;
- (BOOL)commitCandidateWithSelection:(id)a0 method:(id)a1;
- (void)commitInlineForSpecialWindow;
- (BOOL)commitInlineTextCandidate;
- (BOOL)commitSelectedCandidate;
- (id)composedText;
- (id)contextualVariantForPunctuation:(id)a0;
- (id)convertedBasicLatinPunctuationFromStringForURL:(id)a0;
- (void)didHandleCandidateSelected:(id)a0 candidateController:(id)a1;
- (void)didHandleCandidateSelected:(id)a0 isSecondary:(BOOL)a1;
- (void)didHandleCandidateSelectionChanged:(id)a0 candidateController:(id)a1;
- (void)didHandleSecondaryCandidateSelected:(id)a0;
- (void)doCommandBySelector:(SEL)a0 withUserInfo:(id)a1;
- (void)endSessionAbandoningInlineText;
- (void)endSessionConfirmingInlineText;
- (void)enterStrokeSequence;
- (BOOL)expandableWindowIsShownAboveInlineAndEventIsRepeating;
- (void)forgetSelectedWord;
- (BOOL)handleEventDynamic;
- (BOOL)handleITABCEvent;
- (BOOL)handleKeyEvent;
- (void)handleMecabraSettings;
- (id)insertApostrophesForPinyinString:(void *)a0;
- (BOOL)insertPairedPunctuations:(id)a0;
- (BOOL)isFirstCandidateSelected;
- (BOOL)isInlineEmpty;
- (BOOL)isShowingCandidateViewAboveInline;
- (BOOL)isUsingSortingBar;
- (void)mouseClicked;
- (void)performPageNavigationLeft:(id)a0;
- (void)performPageNavigationRight:(id)a0;
- (void)preflightSpellChecker;
- (void)selectNextTone;
- (void)selectPreviousTone;
- (BOOL)shouldShowStrokeInformationWindow;
- (BOOL)shouldShowStrokeInformationWindowForCandidates:(id)a0;
- (void)showCandidateWindowIfNeeded;
- (void)showPunctationCandidates;
- (void)updateMarkedText;
- (void)updateTextReplacementEntries;

@end
