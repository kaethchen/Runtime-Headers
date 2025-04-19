@interface SiriSharedUI.SiriSharedUIAssistantSuggestionsViewProvider : NSObject {
    void /* unknown type, empty encoding */ suggestionViews;
    void /* unknown type, empty encoding */ suggestionsList;
    void /* unknown type, empty encoding */ continuerSuggestionViews;
    void /* unknown type, empty encoding */ continuerSuggestionsList;
    void /* unknown type, empty encoding */ requestId;
    void /* unknown type, empty encoding */ suggestionsProvider;
    void /* unknown type, empty encoding */ suggestionsDataForExposureCallback;
    void /* unknown type, empty encoding */ autoCompleteSuggestionsDataForExposureCallback;
    void /* unknown type, empty encoding */ shouldSuppressSuggestions;
    void /* unknown type, empty encoding */ conversationStarterHesitationCountdown;
    void /* unknown type, empty encoding */ speechTwoShotPromptDetected;
    void /* unknown type, empty encoding */ dismissSuggestionsRendering;
    void /* unknown type, empty encoding */ isVoiceTriggerActivation;
    void /* unknown type, empty encoding */ pressDownHandler;
    void /* unknown type, empty encoding */ pressUpHandler;
    void /* unknown type, empty encoding */ conversationStarterHesitationCountdownCompleted;
}

- (id)init;
- (void).cxx_destruct;
- (void)setDialogPhase:(id)a0;
- (void)suggestionsWereShownForCallback;
- (void)autoCompleteSuggestionsWereShownForCallback;
- (void)fetchConversationContinuerViewsWithRequestId:(id)a0 currentMode:(id)a1 deviceLocked:(BOOL)a2 completion:(id /* block */)a3;
- (void)fetchStarterSuggestionsViewsWithDeviceLocked:(BOOL)a0 isVoiceTrigger:(BOOL)a1 invocationSource:(long long)a2 isFirstInvocationSinceOSInstalled:(BOOL)a3 turnId:(id)a4 completion:(id /* block */)a5;
- (id)initWithPressDownHandler:(id /* block */)a0 pressUpHandler:(id /* block */)a1;
- (id)initWithTapHandler:(id /* block */)a0;
- (void)fetchAutoCompletionViewsWithQuery:(id)a0 deviceLocked:(BOOL)a1 turnId:(id)a2 completion:(id /* block */)a3;
- (void)fetchContinuerViewsWithRequestId:(id)a0 currentMode:(id)a1 deviceLocked:(BOOL)a2 completion:(id /* block */)a3;
- (void)fetchConversationStarterViewsWithDeviceLocked:(BOOL)a0 isVoiceTrigger:(BOOL)a1 invocationSource:(long long)a2 isFirstInvocationSinceOSInstalled:(BOOL)a3 completion:(id /* block */)a4;
- (id)getInitialSuggestionViewWrappers;
- (void)resetContinuerSuggestions;
- (void)resetSuggestions;
- (void)startNewTypingSession;

@end
