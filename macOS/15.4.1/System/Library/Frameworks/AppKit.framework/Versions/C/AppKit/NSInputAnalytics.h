@class NSIATransliterationState, NSInputAnalyticsProxy, NSIATrackedActionsManager;

@interface NSInputAnalytics : NSObject

@property (retain, nonatomic) NSInputAnalyticsProxy *frameworkProxy;
@property (retain, nonatomic) NSIATrackedActionsManager *trackedActions;
@property (retain, nonatomic) NSIATransliterationState *transliterationState;

+ (void)dictationEnded:(id)a0;
+ (void)didEndDictation;
+ (void)didInsertText:(id)a0 withSelectedText:(id)a1;
+ (void)didBeginSession;
+ (void)_routeLastSingleCharacterKeyboardToInsertion;
+ (void)allowActionTrackingAnalyticsWithName:(id)a0 forAction:(id /* block */)a1;
+ (void)applyMarkedTextForBlock:(id /* block */)a0;
+ (void)dictationPaused:(id)a0;
+ (void)dictationResumed:(id)a0;
+ (void)dictationStarted:(id)a0;
+ (void)didAutocorrectionForText:(id)a0 withText:(id)a1;
+ (void)didBeginDictation;
+ (void)didBeginSecureTextEntry;
+ (void)didCancelMarkedTextEntry;
+ (void)didChangeSelectionFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 toRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (void)didConversionFromMarkedText:(id)a0 toCommittedText:(id)a1;
+ (void)didConversionOfCurrentTransliterationStateToCommittedText:(id)a0;
+ (void)didDeleteText:(id)a0;
+ (void)didDeleteTextFromStorage:(id)a0 usingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (void)didDeleteTextWithCount:(unsigned long long)a0;
+ (void)didEndSecureTextEntry;
+ (void)didEndSession;
+ (void)didInlineCompletionForText:(id)a0 withText:(id)a1;
+ (void)didInsertText:(id)a0;
+ (void)didInsertText:(id)a0 withSelectedTextFromStorage:(id)a1 usingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
+ (id)getIAChannelFeedbackService;
+ (id)getIAChannelSmartReplies;
+ (id)getIAPayloadKeySmartRepliesDismissType;
+ (id)getIAPayloadKeySmartRepliesSelectedIntent;
+ (id)getIAPayloadValueForNSCorrectionPanelDismissType:(long long)a0;
+ (id)getIASignalFeedbackServiceLaunchSmartRepliesReportConcern;
+ (id)getIASignalFeedbackServiceSmartRepliesFeedbackUIPresented;
+ (id)getIASignalSmartRepliesIntentDismissed;
+ (id)getIASignalSmartRepliesIntentEngaged;
+ (id)getIASignalSmartRepliesIntentShown;
+ (BOOL)isMouseDown;
+ (BOOL)isTextMarkedForTransliteration;
+ (void)log_debug:(id)a0;
+ (void)log_error:(id)a0;
+ (void)resetTransliterationStateToMarkedText;
+ (void)sendSignal:(id)a0 toChannel:(id)a1 withUniqueStringID:(id)a2 withPayload:(id)a3;
+ (void)setMouseDownWithPreviousRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })setMouseUpAndGetPreviousRangeAtMouseDown;
+ (void)setSource:(long long)a0;
+ (void)setTransliterationStateToMarkedText:(id)a0 andCursorRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)sharedInputAnalyticsObject;
+ (BOOL)supportsFeedbackUI;
+ (void)triggerAnalyticsIfActionTrackingAllowedForName:(id)a0 forAnalytics:(id /* block */)a1;
+ (void)updateInputMode:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
