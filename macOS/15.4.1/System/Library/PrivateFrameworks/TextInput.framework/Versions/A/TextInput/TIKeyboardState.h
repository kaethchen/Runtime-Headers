@class TIInputContextHistory, TIAttributedDocumentState, TIKeyboardLayout, TITextInputTraits, NSDictionary, TIKeyboardCandidate, TIKeyboardLayoutState, TIDocumentState, TIKeyboardSecureCandidateRenderTraits, NSString, NSArray, BKSHIDEventAuthenticationMessage, NSUUID;

@interface TIKeyboardState : NSObject <NSCopying, NSSecureCoding> {
    union { long long integerValue; struct { unsigned char userSelectedCurrentCandidate : 1; unsigned char shouldSkipCandidateSelection : 1; unsigned char suppressingCandidateSelection : 1; unsigned char needsCandidateMetadata : 1; unsigned char keyboardEventsLagging : 1; unsigned char hardwareKeyboardMode : 1; unsigned char splitKeyboardMode : 1; unsigned char floatingKeyboardMode : 1; unsigned char wordLearningEnabled : 1; unsigned char autocorrectionEnabled : 1; unsigned char shortcutConversionEnabled : 1; unsigned char candidateSelectionPredictionEnabled : 1; unsigned char autocapitalizationEnabled : 1; unsigned char canSendCurrentLocation : 1; unsigned char isScreenLocked : 1; unsigned char longPredictionListEnabled : 1; unsigned char needAutofill : 1; unsigned char needOneTimeCodeAutofill : 1; unsigned char landscapeOrientation : 1; unsigned char omitEmojiCandidates : 1; unsigned char emojiSearchMode : 1; unsigned char emojiPopoverMode : 1; unsigned char canSuggestSupplementalItemsForCurrentSelection : 1; unsigned char inlineCompletionEnabled : 1; unsigned char imageSuggestionEnabled : 1; unsigned char needCellularAutofill : 1; } fields; } _mask;
    union { long long integerValue; struct { unsigned char displayed : 1; unsigned char autoDisplayMode : 1; } fields; } _autocorrectionListUIState;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long supplementalLexiconIdentifier;
@property (nonatomic) BOOL canSuggestSupplementalItemsForCurrentSelection;
@property (retain, nonatomic) NSUUID *documentIdentifier;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *inputMode;
@property (copy, nonatomic) NSArray *auxiliaryInputModeLanguages;
@property (copy, nonatomic) NSString *recipientIdentifier;
@property (retain, nonatomic) TIInputContextHistory *inputContextHistory;
@property (retain, nonatomic) TIKeyboardLayout *keyLayout;
@property (nonatomic) int shiftState;
@property (copy, nonatomic) TIKeyboardLayoutState *layoutState;
@property (retain, nonatomic) TIDocumentState *documentState;
@property (retain, nonatomic) TIAttributedDocumentState *attributedDocumentState;
@property (copy, nonatomic) TIKeyboardSecureCandidateRenderTraits *secureCandidateRenderTraits;
@property (copy, nonatomic) BKSHIDEventAuthenticationMessage *eventAuthenticationMessage;
@property (copy, nonatomic) NSString *inputForMarkedText;
@property (copy, nonatomic) NSString *searchStringForMarkedText;
@property (retain, nonatomic) TIKeyboardCandidate *currentCandidate;
@property (nonatomic) BOOL userSelectedCurrentCandidate;
@property (nonatomic) BOOL shouldSkipCandidateSelection;
@property (nonatomic) BOOL suppressingCandidateSelection;
@property (nonatomic) BOOL needsCandidateMetadata;
@property (nonatomic) BOOL keyboardEventsLagging;
@property (nonatomic) BOOL hardwareKeyboardMode;
@property (nonatomic) BOOL splitKeyboardMode;
@property (nonatomic) BOOL floatingKeyboardMode;
@property (nonatomic) BOOL landscapeOrientation;
@property (nonatomic) BOOL omitEmojiCandidates;
@property (nonatomic) BOOL emojiSearchMode;
@property (nonatomic) BOOL emojiPopoverMode;
@property (nonatomic) BOOL wordLearningEnabled;
@property (nonatomic) BOOL autocorrectionEnabled;
@property (nonatomic) BOOL shortcutConversionEnabled;
@property (nonatomic) BOOL candidateSelectionPredictionEnabled;
@property (nonatomic) BOOL autocapitalizationEnabled;
@property (nonatomic) BOOL inlineCompletionEnabled;
@property (nonatomic) BOOL imageSuggestionEnabled;
@property (retain, nonatomic) TITextInputTraits *textInputTraits;
@property (copy, nonatomic) NSString *responseContext;
@property (nonatomic) unsigned long long autocapitalizationType;
@property (nonatomic) unsigned long long keyboardType;
@property (nonatomic) BOOL secureTextEntry;
@property (nonatomic) BOOL autocorrectionListUIDisplayed;
@property (nonatomic) BOOL autocorrectionListUIAutoDisplayMode;
@property (nonatomic) BOOL canSendCurrentLocation;
@property (nonatomic) BOOL isScreenLocked;
@property (nonatomic) BOOL longPredictionListEnabled;
@property (nonatomic) BOOL needAutofill;
@property (nonatomic) unsigned long long autofillMode;
@property (nonatomic) unsigned long long autofillSubMode;
@property (retain, nonatomic) NSDictionary *autofillContext;
@property (nonatomic) BOOL needOneTimeCodeAutofill;
@property (readonly, nonatomic) BOOL needContactAutofill;
@property (nonatomic) BOOL needCellularAutofill;
@property (copy, nonatomic) NSArray *supportedPayloadIds;
@property (readonly, nonatomic) BOOL shouldOutputFullwidthSpace;
@property (copy, nonatomic) NSArray *statisticChanges;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_createTextInputTraitsIfNecessary;

@end
