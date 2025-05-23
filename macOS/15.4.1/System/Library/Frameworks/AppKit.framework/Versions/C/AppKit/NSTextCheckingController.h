@class NSArray, NSView, NSTimer, NSAttributedString;
@protocol NSTextCheckingClient;

@interface NSTextCheckingController : NSObject {
    id _client;
    NSView *_correctingView;
    NSView *_completingView;
    NSArray *_smartLinkLocations;
    NSArray *_textCheckingChangeLocations;
    NSArray *_textCheckingScheduledRanges;
    NSArray *_correctionIndicatorUnderlineRanges;
    NSAttributedString *_annotatedStringForHandlingResults;
    id /* block */ _performTextChecking;
    struct __CFRunLoopTimer { } *_bubbleTimer;
    NSTimer *_correctionIndicatorUnderlineTimer;
    struct _NSRange { unsigned long long location; unsigned long long length; } _bubbleRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _spellingFromMenuRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _temporaryCorrectionRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _previousConsideredRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _previousSelectedRange;
    unsigned long long _previousCheckingSequenceNumber;
    unsigned long long _prechangeCheckingSequenceNumber;
    unsigned long long _candidateSequenceNumber;
    long long _spellCheckerDocumentTag;
    long long _offsetForHandlingResults;
    long long _grammarCheckingSequenceNumber;
    struct __tccFlags { unsigned char startOfTextReplaced : 1; unsigned char startOfTextReplacedRecently : 1; unsigned char pendingMarkForTextCheckingAfterChange : 1; unsigned char scheduleTextCheckingQuickly : 1; unsigned char textHasBeenEdited : 1; unsigned char correctingText : 1; unsigned char checkSpellingInFlight : 1; unsigned char pendingCandidateUpdate : 1; unsigned char registeredForNotifications : 1; unsigned char generatingMenu : 1; unsigned char globalAutomaticSpellingCorrectionEnabled : 1; unsigned char globalAutomaticSpellCheckingEnabled : 1; unsigned char globalAutomaticGrammarCheckingEnabled : 1; unsigned char globalAutomaticDataDetectionEnabled : 1; unsigned char globalAutomaticLinkDetectionEnabled : 1; unsigned char globalAutomaticQuoteSubstitutionEnabled : 1; unsigned char globalAutomaticDashSubstitutionEnabled : 1; unsigned char globalAutomaticSmartInsertDeleteEnabled : 1; unsigned char globalAutomaticTextReplacementEnabled : 1; unsigned char globalAutomaticTextCompletionEnabled : 1; unsigned char globalAutomaticInlinePredictionEnabled : 1; unsigned char clientIsAsynchronous : 1; unsigned char usesStringAnnotations : 1; unsigned char startOfTextReplacedByPostEditing : 1; unsigned char clientIsBridged : 1; unsigned char clientRecentlyReplacedCompletionPrefix : 1; unsigned char suppressClientChecking : 1; unsigned char reserved : 5; } _tccFlags;
    struct __tccClientFlags { unsigned char respondsToAutocorrectionType : 1; unsigned char respondsToSpellCheckingType : 1; unsigned char respondsToGrammarCheckingType : 1; unsigned char respondsToSmartQuotesType : 1; unsigned char respondsToSmartDashesType : 1; unsigned char respondsToSmartInsertDeleteType : 1; unsigned char respondsToTextReplacementType : 1; unsigned char respondsToDataDetectionType : 1; unsigned char respondsToLinkDetectionType : 1; unsigned char respondsToTextCompletionType : 1; unsigned char respondsToSetAutocorrectionType : 1; unsigned char respondsToSetSpellCheckingType : 1; unsigned char respondsToSetGrammarCheckingType : 1; unsigned char respondsToSetSmartQuotesType : 1; unsigned char respondsToSetSmartDashesType : 1; unsigned char respondsToSetSmartInsertDeleteType : 1; unsigned char respondsToSetTextReplacementType : 1; unsigned char respondsToSetDataDetectionType : 1; unsigned char respondsToSetLinkDetectionType : 1; unsigned char respondsToSetTextCompletionType : 1; unsigned char respondsToAutomaticLanguageDetectionEnabled : 1; unsigned char respondsToSelectedRanges : 1; unsigned char respondsToIsSelectable : 1; unsigned char respondsToIsEditable : 1; unsigned char respondsToIsRichText : 1; unsigned char respondsToLayoutOrientation : 1; unsigned char respondsToReplaceWithReplacementRange : 1; unsigned char respondsToLacksAnnotatedString : 1; unsigned char respondsToSuppressTextCheckingAdaptation : 1; unsigned char respondsToUpdateCandidates : 1; unsigned char respondsToCheckTextInRange : 1; unsigned char respondsToHandleTextCheckingResults : 1; } _tccClientFlags;
    struct __tccClientFlags2 { unsigned char respondsToInlinePredictionType : 1; unsigned char respondsToMathExpressionCompletionType : 1; unsigned char respondsToBeginShowingCorrectionIndicatorUnderlines : 1; unsigned char respondsToEndShowingCorrectionIndicatorUnderlines : 1; unsigned char respondsToFinalSentenceRange : 1; unsigned char respondsToSetSoftSpaceRange : 1; unsigned int reserved : 27; } _tccClientFlags2;
}

@property (readonly) id<NSTextCheckingClient> client;
@property long long spellCheckerDocumentTag;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_characterRangeByTrimmingWhitespaceFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inAnnotatedString:(id)a1;
- (void)checkTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 types:(unsigned long long)a1 options:(id)a2;
- (id)convertToStringAnnotatedString:(id)a0;
- (id)initWithClient:(id)a0;
- (BOOL)isAutomaticDataDetectionEnabled;
- (void)showGuessPanel:(id)a0;
- (long long)smartQuotesType;
- (void)viewForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 completionHandler:(id /* block */)a1;
- (void)_changeSpellingForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 toWord:(id)a1;
- (void)_markForTextCheckingAfterChange;
- (void)_reversionTimer;
- (void)_turnOnTextReplacementFromMenu:(id)a0;
- (void)changeSpelling:(id)a0;
- (void)ignoreSpelling:(id)a0;
- (BOOL)isAutomaticLinkDetectionEnabled;
- (long long)smartDashesType;
- (id)_URLForString:(id)a0;
- (id)_URLStringForString:(id)a0;
- (void)_addCorrectionIndicatorUnderlineIndexes:(id)a0;
- (void)_addCorrectionIndicatorUnderlineIndexesForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 correction:(id)a1 forString:(id)a2 language:(id)a3 toIndexes:(id)a4;
- (void)_addGrammarAttributesForDetailRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 detail:(id)a1 inAnnotatedString:(id)a2;
- (void)_addGrammarAttributesForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 detailRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 detail:(id)a2 inAnnotatedString:(id)a3;
- (void)_addGrammarAttributesForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 details:(id)a1 inAnnotatedString:(id)a2 spellingStateRanges:(id)a3;
- (void)_addSpellingAttributeForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inAnnotatedString:(id)a1;
- (void)_adjustCorrectionIndicatorUnderlinesAfterChangeToRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementLength:(unsigned long long)a1;
- (void)_alternativesTimer;
- (BOOL)_canUnlearnSpellingForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inAnnotatedString:(id)a1;
- (void)_changeAlternativesForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 toString:(id)a1;
- (void)_changeAlternativesFromMenu:(id)a0;
- (void)_changeAlternativesToString:(id)a0;
- (void)_changeSpellingFromMenu:(id)a0;
- (void)_changeSpellingToWord:(id)a0;
- (void)_checkBubblesAfterMovementFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_checkLinksAfterChange;
- (void)_checkSpellingForPanel:(BOOL)a0;
- (void)_checkSpellingWithOriginalStartLocation:(unsigned long long)a0 currentStartLocation:(unsigned long long)a1 firstTime:(BOOL)a2 alreadyWrapped:(BOOL)a3 forPanel:(BOOL)a4;
- (void)_checkTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 types:(unsigned long long)a1 options:(id)a2;
- (void)_clearSpellingForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inAnnotatedString:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_doubleClickAtIndex:(unsigned long long)a0 limitedRangeOK:(BOOL)a1 inAnnotatedString:(id)a2;
- (id)_finalGrammarResultsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 types:(unsigned long long)a1 inAnnotatedString:(id)a2;
- (void)_guessesTimer;
- (void)_handleAlternativesIndicatorForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 contents:(id)a1 textAlternatives:(id)a2 acceptedString:(id)a3;
- (void)_handleCompletionResult:(id)a0 forReplacingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 string:(id)a2 withString:(id)a3;
- (void)_handleCorrectionIndicatorForCheckingType:(unsigned long long)a0 replacingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 string:(id)a2 withString:(id)a3 acceptedString:(id)a4 orthography:(id)a5;
- (void)_handleGrammarCheckingResults:(id)a0 sequenceNumber:(long long)a1 forRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 inAnnotatedString:(id)a3 offset:(long long)a4 types:(unsigned long long)a5 options:(id)a6 orthography:(id)a7;
- (void)_handleGrammarResultWithChecker:(id)a0 grammarRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 offset:(long long)a2 grammarDetailRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 grammarDetail:(id)a4 orthography:(id)a5 inAnnotatedString:(id)a6;
- (void)_handleGuessesIndicatorForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 contents:(id)a1 acceptedString:(id)a2;
- (void)_handleReversionIndicatorForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 contents:(id)a1 correction:(id)a2 string:(id)a3 acceptedString:(id)a4;
- (void)_handleSpellingResultWithChecker:(id)a0 misspellRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 offset:(long long)a2 orthography:(id)a3 inAnnotatedString:(id)a4;
- (void)_handleTextCheckingResults:(id)a0 forRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 inAnnotatedString:(id)a2 offset:(long long)a3 types:(unsigned long long)a4 options:(id)a5 orthography:(id)a6 wordCount:(long long)a7;
- (void)_handleTextCheckingResults:(id)a0 sequenceNumber:(long long)a1 forRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 inAnnotatedString:(id)a3 offset:(long long)a4 types:(unsigned long long)a5 options:(id)a6 orthography:(id)a7 wordCount:(long long)a8 applyNow:(BOOL)a9 checkSynchronously:(BOOL)a10;
- (BOOL)_hasCorrectionIndicator;
- (void)_ignoreGrammarFromMenu:(id)a0;
- (void)_ignoreSpellingFromMenu:(id)a0;
- (void)_invalidateBubbleTimer;
- (void)_invalidateCorrectionIndicatorUnderlineTimer;
- (void)_learnSpellingFromMenu:(id)a0;
- (void)_markAllForTextChecking;
- (void)_markAsCheckedForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inAnnotatedString:(id)a1;
- (void)_markUncheckedAfterMovementFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_modifiedGrammarRangeForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 details:(id)a1 inAnnotatedString:(id)a2;
- (void)_noteUndoOfCorrections:(id)a0;
- (void)_noticeGlobalSettings;
- (void)_performPendingTextChecking;
- (void)_performScheduledTextChecking:(BOOL)a0;
- (void)_registerForNotifications;
- (void)_registerUndoOfCorrections:(id)a0;
- (void)_removeAllCorrectionIndicatorUnderlineRanges;
- (void)_removeCorrectionIndicatorUnderlineRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_removeGrammarAttributeForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inAnnotatedString:(id)a1;
- (void)_removeGrammarAttributeForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 includeAccessibility:(BOOL)a1 inAnnotatedString:(id)a2;
- (void)_removeSpellingAttributeAfterChangeToRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementLength:(unsigned long long)a1;
- (void)_removeSpellingAttributeForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inAnnotatedString:(id)a1;
- (void)_removeSpellingAttributeForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 includeAccessibility:(BOOL)a1 inAnnotatedString:(id)a2;
- (void)_replaceTextFromMenu:(id)a0;
- (void)_scheduleTextCheckingForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_selectionRangeForProposedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inAnnotatedString:(id)a1;
- (void)_setAnnotatedSubstring:(id)a0 forRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 offset:(long long)a2 replacementRanges:(id)a3 resultingRanges:(id)a4;
- (void)_setBubbleTimer:(void /* function */ *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 offset:(unsigned long long)a2;
- (void)_setMarkedTextForReplacingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 string:(id)a1 withString:(id)a2;
- (void)_showAlternativesIndicatorForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 contents:(id)a1 textAlternatives:(id)a2;
- (void)_showCorrectionIndicatorForCheckingType:(unsigned long long)a0 replacingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 string:(id)a2 withString:(id)a3 alternativeStrings:(id)a4 orthography:(id)a5;
- (void)_showCorrectionIndicatorUnderlineForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_showCorrectionIndicatorUnderlines;
- (void)_showCorrectionIndicatorUnderlines:(id)a0;
- (void)_showGuessesIndicatorForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 contents:(id)a1 guesses:(id)a2;
- (void)_showReversionIndicatorForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 contents:(id)a1 correction:(id)a2 string:(id)a3 alternativeStrings:(id)a4;
- (id)_spellingGuessesForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inAnnotatedString:(id)a1;
- (id)_spellingGuessesForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inAnnotatedString:(id)a1 canCorrect:(BOOL *)a2;
- (void)_turnOnSpellingCorrectionFromMenu:(id)a0;
- (void)_unifiedSetAnnotatedSubstring:(id)a0 forRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 offset:(long long)a2 replacementRanges:(id)a3 resultingRanges:(id)a4;
- (void)_unlearnSpellingFromMenu:(id)a0;
- (void)_unmarkTextEdited;
- (void)_unregisterForNotifications;
- (void)_updateCandidates;
- (void)_updateCorrectionIndicatorUnderlines;
- (void)_updateCorrectionIndicatorUnderlines:(id)a0;
- (void)addLinksInSelection:(id)a0;
- (void)annotatedSubstringForProposedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 completionHandler:(id /* block */)a1;
- (void)annotatedSubstringForProposedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 wrap:(BOOL)a1 completionHandler:(id /* block */)a2 failureHandler:(id /* block */)a3;
- (void)annotatedSubstringForSelectedRangeWithCompletionHandler:(id /* block */)a0;
- (void)applyConditionalGrammarCheckingIndicationWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)applyGrammarCheckingIndicationWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (long long)autocorrectionType;
- (void)cancelCorrectionIndicator;
- (id)candidateListTouchBarItem;
- (void)checkGrammarInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 types:(unsigned long long)a1 options:(id)a2 orthography:(id)a3;
- (void)checkSpelling:(id)a0;
- (void)checkTextInDocument:(id)a0;
- (void)checkTextInDocumentUsingTypes:(unsigned long long)a0 options:(id)a1 restrictToSelection:(BOOL)a2;
- (void)checkTextInSelection:(id)a0;
- (BOOL)clientRecentlyReplacedCompletionPrefix;
- (void)considerTextCheckingForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)convertFromStringAnnotatedString:(id)a0;
- (id)convertFromStringAnnotationDictionary:(id)a0;
- (id)convertToStringAnnotationDictionary:(id)a0;
- (long long)dataDetectionType;
- (void)didChangeSelectedRange;
- (void)didChangeSelectionFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)didChangeText;
- (void)didChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)dismissCorrectionIndicator;
- (void)dismissCorrectionIndicatorUnderlines;
- (unsigned long long)enabledTextCheckingTypes;
- (long long)grammarCheckingType;
- (void)handleCandidates:(id)a0 sequenceNumber:(long long)a1;
- (void)handleCompletionFromCandidates:(id)a0 forSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 offset:(unsigned long long)a2 inAnnotatedString:(id)a3 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 view:(id)a5;
- (void)handleMathCandidates:(id)a0 sequenceNumber:(long long)a1;
- (void)handleTextCheckingResults:(id)a0 forRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 inAnnotatedString:(id)a2 offset:(long long)a3 types:(unsigned long long)a4 options:(id)a5 orthography:(id)a6 wordCount:(long long)a7;
- (void)handleTextCheckingResults:(id)a0 forRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 types:(unsigned long long)a2 options:(id)a3 orthography:(id)a4 wordCount:(long long)a5;
- (BOOL)hasCorrectionIndicatorUnderlines;
- (BOOL)hasCorrectionPanels;
- (BOOL)hasPrereplacedStringAttributeAtIndex:(unsigned long long)a0;
- (BOOL)inlinePredictionActive;
- (long long)inlinePredictionType;
- (void)insertedTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isAutomaticDashSubstitutionEnabled;
- (BOOL)isAutomaticInlinePredictionEnabled;
- (BOOL)isAutomaticLanguageIdentificationEnabled;
- (BOOL)isAutomaticMathExpressionCompletionEnabled;
- (BOOL)isAutomaticQuoteSubstitutionEnabled;
- (BOOL)isAutomaticSpellingCorrectionEnabled;
- (BOOL)isAutomaticTextCompletionEnabled;
- (BOOL)isAutomaticTextReplacementEnabled;
- (BOOL)isContinuousSpellCheckingEnabled;
- (BOOL)isEditable;
- (BOOL)isGrammarCheckingEnabled;
- (BOOL)isRichText;
- (BOOL)isSelectable;
- (BOOL)lacksAnnotatedString;
- (long long)layoutOrientation;
- (long long)linkDetectionType;
- (long long)mathExpressionCompletionType;
- (id)menuAtIndex:(unsigned long long)a0 clickedOnSelection:(BOOL)a1 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (BOOL)needsLinkAnnotations;
- (void)orderFrontSubstitutionsPanel:(id)a0;
- (BOOL)pendingCandidateUpdate;
- (void)performFinalGrammarCheckingWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)performFinalGrammarCheckingWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 allowAutocorrection:(BOOL)a1 conditionalOnTerminationEstimation:(BOOL)a2;
- (void)performPendingTextChecking;
- (void)recordResponse:(long long)a0 toCorrection:(id)a1 forWord:(id)a2;
- (void)recordResponse:(long long)a0 toCorrection:(id)a1 forWord:(id)a2 considerPostEditing:(BOOL)a3;
- (void)recordResponse:(unsigned long long)a0 toGrammarDetailInAnnotatedString:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)removeAnnotation:(id)a0;
- (void)removeAnnotation:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 offset:(unsigned long long)a2;
- (void)removeCorrectionIndicatorUnderlines;
- (void)replaceDashesInSelection:(id)a0;
- (void)replaceQuotesInSelection:(id)a0;
- (void)replaceTextInSelection:(id)a0;
- (void)scheduleShowingCorrectionIndicatorUnderlines;
- (void)selectAndShowRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)selectedRangeWithCompletionHandler:(id /* block */)a0;
- (void)selectedRangesWithCompletionHandler:(id /* block */)a0;
- (void)setAnnotatedSubstring:(id)a0 forRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 offset:(long long)a2 replacementRanges:(id)a3 resultingRanges:(id)a4;
- (void)setAutocorrectionType:(long long)a0;
- (void)setClientRecentlyReplacedCompletionPrefix:(BOOL)a0;
- (void)setDataDetectionType:(long long)a0;
- (void)setGrammarCheckingType:(long long)a0;
- (void)setLinkDetectionType:(long long)a0;
- (void)setPendingCandidateUpdate:(BOOL)a0;
- (void)setPrereplacedStringAttributeAtIndex:(unsigned long long)a0;
- (void)setSmartDashesType:(long long)a0;
- (void)setSmartInsertDeleteType:(long long)a0;
- (void)setSmartQuotesType:(long long)a0;
- (void)setSpellCheckingType:(long long)a0;
- (void)setSpellingState:(long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 inAnnotatedString:(id)a2;
- (void)setSuppressTextChecking:(BOOL)a0;
- (void)setTextCheckedAnnotationForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 offset:(unsigned long long)a1;
- (void)setTextCheckingInfo:(id)a0;
- (void)setTextCompletionType:(long long)a0;
- (void)setTextReplacementType:(long long)a0;
- (void)setUsesStringAnnotations:(BOOL)a0;
- (void)showCorrectionIndicatorUnderlines;
- (void)showWritingTools:(id)a0 forDelegate:(id)a1;
- (BOOL)smartInsertDeleteEnabled;
- (long long)smartInsertDeleteType;
- (void)spellCheckerDidChangeCompletion:(id)a0;
- (void)spellCheckerDidChangeCorrection:(id)a0;
- (void)spellCheckerDidChangeDashSubstitution:(id)a0;
- (void)spellCheckerDidChangeInlinePrediction:(id)a0;
- (void)spellCheckerDidChangeLanguage:(id)a0;
- (void)spellCheckerDidChangeQuoteSubstitution:(id)a0;
- (void)spellCheckerDidChangeReplacement:(id)a0;
- (void)spellCheckerDidLearnWord:(id)a0;
- (void)spellCheckerDidUnlearnWord:(id)a0;
- (long long)spellCheckingType;
- (BOOL)suppressTextCheckingAdaptation;
- (id)textCheckingInfo;
- (long long)textCompletionType;
- (long long)textReplacementType;
- (void)updateCandidates;
- (void)updateCorrectionIndicatorUnderlines;
- (void)updateCorrectionPanels;
- (void)updateSpellingPanel;
- (BOOL)usesStringAnnotations;
- (id)validAnnotations;
- (BOOL)validateMenuItem:(id)a0;
- (BOOL)validateUserInterfaceItem:(id)a0;
- (void)viewAndVisibleSelectionRectForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 completionHandler:(id /* block */)a1;
- (void)willChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementString:(id)a1;
- (void)willChangeTextInRanges:(id)a0 replacementStrings:(id)a1;

@end
