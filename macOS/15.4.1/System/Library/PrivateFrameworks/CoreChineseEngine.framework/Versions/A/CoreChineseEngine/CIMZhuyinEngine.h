@class NSString, NSAttributedString, CIMMecabraZhuyinEngine;

@interface CIMZhuyinEngine : CIMBaseEngine <CIMMecabraZhuyinEngineDelegate>

@property (copy, nonatomic) NSAttributedString *inlineText;
@property (retain, nonatomic) CIMMecabraZhuyinEngine *mecabraEngine;
@property (copy) NSString *selectedCandidateSurface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (unsigned long long)panelType;
- (void)commitComposition:(id)a0;
- (void)setCandidates:(id)a0;
- (id)helpAnchorName;
- (int)mecabraInputMethodType;
- (id)currentInlineText;
- (BOOL)forceNoIncrementalSearchPositioning;
- (void)setSecondaryCandidates:(id)a0;
- (id)sortingMethods;
- (id)mecabraEnvironment;
- (BOOL)inputModeShowsDynamicCandidates;
- (id)candidateListDictionaryWithSortingMethod:(id)a0;
- (void)checkSettings:(id)a0 withClient:(id)a1;
- (void)clearCandidateAnnotationsForCandidates:(id)a0;
- (void)commitCurrentlySelectedCandidateOrInline;
- (void)didHandleCandidateSelected:(id)a0 candidateController:(id)a1;
- (void)didHandleCandidateSelectionChanged:(id)a0 candidateController:(id)a1;
- (void)didHandleSecondaryCandidateSelected:(id)a0;
- (void)didHandleSecondaryCandidateSelectionChanged:(id)a0;
- (void)forgetSelectedWord;
- (BOOL)handleKeyEvent;
- (BOOL)incrementalSearchClientShouldHandleEvent:(id)a0;
- (id)inputModeNameForMecabraEngine:(id)a0;
- (BOOL)isInlineEmpty;
- (BOOL)isUsingSortingBar;
- (void)mecabraEngine:(id)a0 didUpdateComposedText:(id)a1 withCursorLocation:(unsigned long long)a2;
- (id)mecabraEngine:(id)a0 textAttributeForStyle:(long long)a1 atRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)mecabraEngine:(id)a0 willDropComposedText:(id)a1;
- (id)preConvertedTextForDebugging;
- (void)showCandidateWindowWithSelectedCandidate:(id)a0;
- (void)showPunctationCandidates;
- (BOOL)showsHorizontalWindowInIncrementalSearchMode;
- (void)updateMecabraEnvironmentWithCandidates:(id)a0;
- (void)updateTextReplacementEntries;

@end
