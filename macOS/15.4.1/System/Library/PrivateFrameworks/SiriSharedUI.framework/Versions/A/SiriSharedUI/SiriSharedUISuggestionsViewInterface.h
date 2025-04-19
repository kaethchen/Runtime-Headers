@class _TtC12SiriSharedUI44SiriSharedUIAssistantSuggestionsViewProvider;

@interface SiriSharedUISuggestionsViewInterface : NSObject {
    _TtC12SiriSharedUI44SiriSharedUIAssistantSuggestionsViewProvider *suggestionsViewProvider;
}

- (void).cxx_destruct;
- (void)setDialogPhase:(id)a0;
- (void)suggestionsWereShownForCallback;
- (void)autoCompleteSuggestionsWereShownForCallback;
- (void)fetchAutoCompletionSuggestionsViewsWithQuery:(id)a0 deviceLocked:(BOOL)a1 turnId:(id)a2 completion:(id /* block */)a3;
- (void)fetchConversationContinuerViewsWithRequestId:(id)a0 currentMode:(id)a1 deviceLocked:(BOOL)a2 completion:(id /* block */)a3;
- (void)fetchStarterSuggestionsViewsWithDeviceLocked:(BOOL)a0 isVoiceTrigger:(BOOL)a1 invocationSource:(long long)a2 isFirstInvocationSinceOSInstalled:(BOOL)a3 turnId:(id)a4 completion:(id /* block */)a5;
- (id)initWithPressDownHandler:(id /* block */)a0 pressUpHandler:(id /* block */)a1;
- (id)initWithTapHandler:(id /* block */)a0;
- (void)fetchAutoCompletionSuggestionsViewsWithQuery:(id)a0 deviceLocked:(BOOL)a1 completion:(id /* block */)a2;
- (void)fetchContinuerSuggestionsViewsWithRequestId:(id)a0 currentMode:(id)a1 deviceLocked:(BOOL)a2 completion:(id /* block */)a3;
- (void)fetchConversationStarterViewsWithDeviceLocked:(BOOL)a0 isVoiceTrigger:(BOOL)a1 invocationSource:(long long)a2 completion:(id /* block */)a3;
- (void)fetchConversationStarterViewsWithDeviceLocked:(BOOL)a0 isVoiceTrigger:(BOOL)a1 invocationSource:(long long)a2 isFirstInvocationSinceOSInstalled:(BOOL)a3 completion:(id /* block */)a4;
- (id)getInitialSuggestionViewWrappers;
- (void)startNewTypingSession;

@end
