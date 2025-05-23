@class SAAceView, NSMutableDictionary, SAUISayIt, NSObject, AFUISiriViewController, AFConversationStore, NSMutableArray, NSString, SRUIFAnalyticsSupplement, NSTimer, SiriUIRequestOptions, NSMutableSet, SiriUISiriLanguage, AFManagedStorageConnection, SRUIFAceCommandRecords, SiriSharedUIPhPicker;
@protocol SRUIFSpeechSynthesizing, AFUISiriSession, SiriUIPresentation, OS_dispatch_source;

@interface SVSSiriViewController : NSViewController <SRUIFDomainObjectStore, SRUIFAceCommandRecordsDelegate, SiriUISiriLanguageDelegate, AFConversationDelegate, SiriUIPresentationDataSource, SiriUIPresentationDelegate, SRUIFSpeechSynthesizerClientStateManagerDelegate, SVSSiriViewControllerServing> {
    BOOL _synthesisIsSpeaking;
    BOOL _ttsSpokenForRequest;
    NSString *_responseViewId;
    unsigned long long _lockState;
    NSMutableSet *_presentedConversationItemRevisionIdentifiers;
    NSMutableDictionary *_synthesisPreparationDictionary;
    NSMutableDictionary *_synthesisAnimationDictionary;
    NSObject<OS_dispatch_source> *_connectionErrorDismissalTimer;
    SAUISayIt *_repeatableAudioSayit;
    SRUIFAnalyticsSupplement *_analyticsSupplement;
    NSMutableDictionary *_modeForAceIdentifiers;
    SiriSharedUIPhPicker *_phPicker;
}

@property (readonly, nonatomic, getter=_conversationStore) AFConversationStore *conversationStore;
@property (readonly, getter=_conversations) NSMutableArray *conversations;
@property (readonly, getter=_presentation) id<SiriUIPresentation> presentation;
@property (readonly, nonatomic, getter=_language) SiriUISiriLanguage *language;
@property (readonly, getter=_speechSynthesis) id<SRUIFSpeechSynthesizing> speechSynthesis;
@property (readonly, getter=_aceCommandRecords) SRUIFAceCommandRecords *aceCommandRecords;
@property (retain, nonatomic, getter=_completedCommandAppPunchOutIds) NSMutableSet *completedCommandAppPunchOutIds;
@property (retain, nonatomic, getter=_requestOptions, setter=_setRequestOptions:) SiriUIRequestOptions *requestOptions;
@property (retain, getter=_currentAVRecordRoute, setter=_setCurrentAVRecordRoute:) NSString *currentAVRecordRoute;
@property (getter=_requestStartedCount, setter=_setRequestStartedCount:) unsigned long long requestStartedCount;
@property (getter=_siriState, setter=_setSiriState:) long long siriState;
@property (retain, setter=_setSpeechIdleTimer:) NSTimer *_speechIdleTimer;
@property (getter=_isSpeechIdleTimerEnabled, setter=_setSpeechIdleTimerEnabled:) BOOL _speechIdleTimerEnabled;
@property (retain, setter=_setIdleTimer:) NSTimer *_idleTimer;
@property (getter=_isIdleTimerEnabled, setter=_setIdleTimerEnabled:) BOOL _idleTimerEnabled;
@property (getter=_isAcousticIdAllowed, setter=_setAcousticIdAllowed:) BOOL acousticIdAllowed;
@property (getter=_wasSiriIdleAndQuiet, setter=_setWasSiriIdleAndQuiet:) unsigned long long wasSiriIdleAndQuiet;
@property (readonly, getter=_domainObjectStorageConnection) AFManagedStorageConnection *domainObjectStorageConnection;
@property (getter=_isWaitingForStartRequest, setter=_setWaitingForStartRequest:) BOOL waitingForStartRequest;
@property (getter=_isRequestActive, setter=_setRequestActive:) BOOL requestActive;
@property (retain, getter=_repeatablePhrases, setter=_setRepeatablePhrases:) NSMutableArray *repeatablePhrases;
@property (retain, getter=_utteranceToSpeakAfterClearScreenCommand, setter=_setUtteranceToSpeakAfterClearScreenCommand:) SAAceView *viewToSpeakAfterClearScreenCommand;
@property (readonly, nonatomic, getter=_session) id<AFUISiriSession> session;
@property (readonly, nonatomic) BOOL isPresentingContent;
@property (weak) AFUISiriViewController *host;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_emitSiriAssetsWereUnavailableEvent;
+ (id)_getMissingAssetTypes:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)view;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)setSession:(id)a0;
- (void)setRequestOptions:(id)a0;
- (void)_clearIdleTimer;
- (id)_presentationViewController;
- (double)contentHeight;
- (void)conversation:(id)a0 didChangeWithTransaction:(id)a1;
- (void)conversation:(id)a0 didRemoveItemsWithIdentifiers:(id)a1 atIndexPaths:(id)a2 parentItemIdentifiers:(id)a3;
- (void)_cancelLastRootProvisionalSnippetFromLastRequestInConversation:(id)a0;
- (id)_dialogPhaseForItemAtIndexPath:(id)a0;
- (void)siriSessionDidEnterLatencyState;
- (void)didBreakOutOfNotificationCenter;
- (void)siriPresentation:(id)a0 openURL:(id)a1 conversationItemIdentifier:(id)a2 completion:(id /* block */)a3;
- (id)_aceCommandWithIdentifier:(id)a0;
- (void)_activateConversation:(id)a0;
- (id)_activeConversation;
- (id)_activeConversationItemAtIndexPath:(id)a0;
- (void)_activeRequestOptionsDidChange:(id)a0 previousOptions:(id)a1;
- (void)_addErrorUtterance:(id)a0 dialogIdentifier:(id)a1;
- (void)_audioSessionRouteDidChange:(id)a0;
- (void)_cancelCurrentTTS:(id)a0;
- (void)_cancelSpeechSynthesis;
- (void)_clearConnectionErrorDismissalTimer;
- (void)_clearSpeechIdleTimer;
- (id)_configuredSpeakableUtteranceParserForCommand:(id)a0 context:(id)a1 speakableText:(id)a2 listenAfterSpeaking:(BOOL)a3 subCompletion:(id /* block */)a4 speakPreparation:(id /* block */ *)a5 speakCompletion:(id /* block */ *)a6;
- (id)_conversationWithIdentifier:(id)a0;
- (void)_delayAceCommandSuccess:(id)a0 forDuration:(double)a1;
- (void)_deleteConversationWithIdentifier:(id)a0;
- (void)_deletePreviousConversation;
- (void)_didCompleteActionForAceCommand:(id)a0;
- (void)_didReceiveAceCommand:(id)a0 completion:(id /* block */)a1;
- (void)_didStartActionForAceCommand:(id)a0;
- (void)_didStartActionForItemAtIndexPath:(id)a0 inConversation:(id)a1;
- (void)_displayNotReadyError;
- (void)_handleRequestError:(id)a0;
- (void)_idleTimerFired:(id)a0;
- (BOOL)_isSiriIdleAndQuiet;
- (BOOL)_isSpeechSynthesisSpeaking;
- (BOOL)_languageMatchesConversation:(id)a0;
- (void)_listenAfterSpeakingWithResult:(long long)a0 recordedRequestCount:(unsigned long long)a1;
- (void)_logAceObjectPresented:(id)a0 dialogPhase:(id)a1;
- (void)_logAceObjectSpoken:(id)a0 dialogPhase:(id)a1 speakableText:(id)a2;
- (void)_logPatternExecutedEventForAddViewsCommand:(id)a0;
- (int)_mapState:(long long)a0;
- (int)_modeForAceObject:(id)a0;
- (void)_openSensitiveURL:(id)a0 delaySessionEndForTTS:(BOOL)a1 completion:(id /* block */)a2;
- (void)_openSensitiveURL:(id)a0 delaySessionEndForTTS:(BOOL)a1 conversationItemIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)_openURL:(id)a0 appBundleID:(id)a1 allowSiriDismissal:(BOOL)a2;
- (void)_performAppPunchOutCommand:(id)a0 completion:(id /* block */)a1;
- (void)_performAppPunchOutCommand:(id)a0 conversationItemIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)_performGenericAceCommand:(id)a0 completion:(id /* block */)a1;
- (void)_performSayItCommand:(id)a0;
- (id)_presentedConversationItemRevisionIdentifiers;
- (id)_previousConversation;
- (id)_punchoutMetricsAceCommandIdForItemWithIdentifier:(id)a0;
- (void)_registerReplayCallback:(BOOL)a0;
- (void)_removePreviousConversationFromStore;
- (void)_requestDismissalFromHost:(BOOL)a0 dismissalOptions:(id)a1;
- (void)_requestPresentationDismissalWithDelayForTTS:(BOOL)a0 dismissalOptions:(id)a1;
- (void)_rescheduleIdleTimerIfNeeded;
- (void)_resetContext;
- (void)_saveConversation;
- (void)_scheduleIdleTimer;
- (void)_scheduleSpeechIdleTimer;
- (void)_setPresentation:(id)a0;
- (void)_sharePatternIdFromAddViewsCommand:(id)a0;
- (void)_siriPresentation:(id)a0 speakTextForConversationItemIdentifier:(id)a1 animationBlock:(id /* block */)a2;
- (void)_siriSessionDidReceiveOpenLinkCommand:(id)a0;
- (void)_speakText:(id)a0 audioData:(id)a1 ignoreMuteSwitch:(BOOL)a2 identifier:(id)a3 sessionId:(id)a4 provisionally:(BOOL)a5 eligibleAfterDuration:(double)a6 canUseServerTTS:(BOOL)a7 speakableUtteranceParser:(id)a8 preparation:(id /* block */)a9 completion:(id /* block */)a10 animationBlock:(id /* block */)a11;
- (void)_speakText:(id)a0 identifier:(id)a1 sessionId:(id)a2 provisionally:(BOOL)a3 eligibleAfterDuration:(double)a4 canUseServerTTS:(BOOL)a5 speakableUtteranceParser:(id)a6 preparation:(id /* block */)a7 completion:(id /* block */)a8 animationBlock:(id /* block */)a9;
- (id)_speechIdentifierForConversationItem:(id)a0;
- (void)_speechIdleTimerFired:(id)a0;
- (id)_startNewConversation;
- (void)_startRequestWithOptions:(id)a0;
- (void)_synthesizePhoneticText:(id)a0 canUseServerTTS:(BOOL)a1 completion:(id /* block */)a2;
- (void)_synthesizeProvisionalText:(id)a0 canUseServerTTS:(BOOL)a1 completion:(id /* block */)a2;
- (void)_synthesizeSpeechWithText:(id)a0 sessionId:(id)a1 isPhonetic:(BOOL)a2 canUseServerTTS:(BOOL)a3 provisionally:(BOOL)a4 completion:(id /* block */)a5;
- (void)_synthesizeText:(id)a0 sessionId:(id)a1 canUseServerTTS:(BOOL)a2 completion:(id /* block */)a3;
- (long long)_visualModeFromResponseMode:(id)a0;
- (void)aceCommandRecords:(id)a0 didChangeResultForCommand:(id)a1 completion:(id /* block */)a2;
- (id)activeRequestOptionsForSiriPresentation:(id)a0;
- (void)audioInputPowerLevelDidUpdate:(float)a0;
- (void)cancelRequestAndStopAttendingForSiriPresentation:(id)a0;
- (void)cancelRequestForSiriPresentation:(id)a0;
- (double)contentWidthForForSiriPresentation:(id)a0;
- (id)conversationIdentifiersForSiriPresentation:(id)a0;
- (void)didChangeWindowHeight:(BOOL)a0;
- (void)didCompleteBreakOutOfNotificationCenterGesture;
- (void)didPresentCreateBugTemplateWithConfirm:(BOOL)a0 values:(id)a1;
- (void)didReceiveDismissalAction:(BOOL)a0 delayForTTS:(BOOL)a1 completion:(id /* block */)a2;
- (void)didReceiveHelpAction;
- (void)didReceiveReportBugAction;
- (void)didReceiveShortTapAction;
- (void)disableIdleTimerForSiriPresentation:(id)a0;
- (void)dismissLatencyView;
- (id)domainObjectForIdentifier:(id)a0;
- (id)domainObjectStoreForSiriPresentation:(id)a0;
- (id)effectiveCoreLocationBundleForSiriPresentation:(id)a0;
- (void)enableIdleTimerForSiriPresentation:(id)a0;
- (void)endSiriSessionForSiriPresentation:(id)a0;
- (void)endSiriSessionForSiriPresentation:(id)a0 delayForTTS:(BOOL)a1;
- (void)forceAudioSessionInactiveForSiriPresentation:(id)a0;
- (void)getScreenshotImageForSiriPresentation:(id)a0 withCompletion:(id /* block */)a1;
- (double)maximumHeightForPresentation:(id)a0;
- (void)notifyClientStateManagerSpeakingBegan:(id)a0;
- (void)notifyClientStateManagerSpeakingEnded:(id)a0;
- (void)notifyClientStateManagerTransactionBegan:(id)a0;
- (void)notifyClientStateManagerTransactionEnded:(id)a0;
- (void)notifyOnNextUserInteractionForSiriPresentation:(id)a0;
- (void)orchestrationDidPresentResponseFullyInApp;
- (void)releaseKeyForSiriPresentation:(id)a0;
- (id)removeAlternativeFeatureViews:(id)a0;
- (void)reportConcernButtonTapped;
- (void)setDomainObject:(id)a0 forIdentifier:(id)a1;
- (void)setOffersDismissal:(BOOL)a0;
- (void)setSpeechSynthesis:(id)a0;
- (void)showPresentationWithIdentifier:(id)a0 properties:(id)a1;
- (void)showReportConcernButtonForSiriPresentation:(id)a0;
- (unsigned long long)siriDeviceLockStateForSiriPresentation:(id)a0;
- (void)siriDidActivateFromSource:(long long)a0;
- (void)siriDidDeactivate;
- (void)siriDidEnterLatencyStateWithLatencyUtterance:(id)a0;
- (BOOL)siriIsAnimatingResult;
- (BOOL)siriIsDisplayingLatency;
- (void)siriIsListening:(BOOL)a0;
- (BOOL)siriIsSpeakingForSiriPresentation:(id)a0;
- (void)siriLanguageSpokenLanguageCodeDidChange:(id)a0;
- (id)siriPresentation:(id)a0 aceCommandIdentifierForItemAtIndexPath:(id)a1;
- (id)siriPresentation:(id)a0 aceObjectForItemAtIndexPath:(id)a1;
- (void)siriPresentation:(id)a0 acousticIDRequestDidFinishWithSuccess:(BOOL)a1;
- (void)siriPresentation:(id)a0 activateConversationWithIdentifier:(id)a1;
- (void)siriPresentation:(id)a0 addSelectionResponse:(id)a1;
- (id)siriPresentation:(id)a0 conversationWithIdentifier:(id)a1;
- (void)siriPresentation:(id)a0 deleteConversationWithIdentifier:(id)a1;
- (id)siriPresentation:(id)a0 dialogPhaseForItemAtIndexPath:(id)a1;
- (void)siriPresentation:(id)a0 didChangePeekMode:(unsigned long long)a1;
- (void)siriPresentation:(id)a0 didCorrectRecognition:(id)a1 correctionIdentifier:(id)a2 forConversationItemWithIdentifier:(id)a3 userSelectionResults:(id)a4;
- (void)siriPresentation:(id)a0 didCorrectRecognition:(id)a1 correctionIdentifier:(id)a2 forItemAtIndexPath:(id)a3;
- (void)siriPresentation:(id)a0 didEditSpeechRecognized:(id)a1 forInterval:(double)a2;
- (void)siriPresentation:(id)a0 didPrepareAnimationLinkedConversationItem:(id)a1 animationBlock:(id /* block */)a2;
- (void)siriPresentation:(id)a0 didPresentConversationItemsWithIdentifiers:(id)a1;
- (void)siriPresentation:(id)a0 didPresentItemsAtIndexPaths:(id)a1;
- (void)siriPresentation:(id)a0 didScrollForInterval:(double)a1;
- (void)siriPresentation:(id)a0 didShowSnippetWithIdentifier:(id)a1 metricsContext:(id)a2 forInterval:(double)a3;
- (void)siriPresentation:(id)a0 didUpdateSpeechRecognitionHypothesis:(id)a1;
- (id)siriPresentation:(id)a0 domainObjectForIdentifier:(id)a1;
- (id)siriPresentation:(id)a0 identifierOfItemAtIndexPath:(id)a1;
- (id)siriPresentation:(id)a0 indexPathForItemWithIdentifier:(id)a1;
- (void)siriPresentation:(id)a0 insertAceViews:(id)a1 withDialogPhase:(id)a2 asItemsAtIndexPaths:(id)a3;
- (BOOL)siriPresentation:(id)a0 itemAtIndexPathIsVirgin:(id)a1;
- (void)siriPresentation:(id)a0 makeKeyWithCompletion:(id /* block */)a1;
- (long long)siriPresentation:(id)a0 numberOfChildrenForItemAtIndexPath:(id)a1;
- (void)siriPresentation:(id)a0 openURL:(id)a1 appBundleID:(id)a2 allowSiriDismissal:(BOOL)a3;
- (void)siriPresentation:(id)a0 performAceCommand:(id)a1 conversationItemIdentifier:(id)a2 completion:(id /* block */)a3;
- (long long)siriPresentation:(id)a0 presentationStateForItemAtIndexPath:(id)a1;
- (void)siriPresentation:(id)a0 removeItemsAtIndexPaths:(id)a1;
- (void)siriPresentation:(id)a0 requestsDismissalWithReason:(unsigned long long)a1;
- (void)siriPresentation:(id)a0 requestsFocusChangeToAccessibilityElement:(id)a1;
- (void)siriPresentation:(id)a0 setBugReportingAvailable:(BOOL)a1;
- (void)siriPresentation:(id)a0 setDomainObject:(id)a1 forIdentifier:(id)a2;
- (void)siriPresentation:(id)a0 setHelpButtonEmphasized:(BOOL)a1;
- (void)siriPresentation:(id)a0 setStatusViewDisabled:(BOOL)a1;
- (void)siriPresentation:(id)a0 setStatusViewHidden:(BOOL)a1;
- (void)siriPresentation:(id)a0 showBugTemplateWithInformation:(id)a1;
- (void)siriPresentation:(id)a0 siriRequestCommittedFromSuggestion:(id)a1;
- (void)siriPresentation:(id)a0 startRequestWithOptions:(id)a1;
- (void)siriPresentation:(id)a0 stashSnippetControllerCard:(id)a1;
- (void)siriPresentation:(id)a0 synthesizeSpeechWithPhoneticText:(id)a1 completion:(id /* block */)a2;
- (void)siriPresentation:(id)a0 synthesizeSpeechWithText:(id)a1 completion:(id /* block */)a2;
- (long long)siriPresentation:(id)a0 typeOfItemAtIndexPath:(id)a1;
- (void)siriPresentation:(id)a0 viewDidAppearWithAceObject:(id)a1;
- (void)siriPresentation:(id)a0 willDismissViewController:(id)a1;
- (void)siriPresentation:(id)a0 willPresentViewController:(id)a1;
- (void)siriPresentationClearContext:(id)a0;
- (void)siriPresentationContentHeightDidChange:(id)a0;
- (void)siriPresentationDidPresentUserInterface:(id)a0;
- (void)siriPresentationDidPunchout;
- (void)siriPresentationPresentAcousticIDSpinner:(id)a0;
- (void)siriPresentationPulseHelpButton:(id)a0;
- (void)siriPresentationRemoveAcousticIDSpinner:(id)a0;
- (void)siriPresentationShouldClearUserInput:(id)a0;
- (void)siriPresentationShouldFadeTextDown:(id)a0;
- (void)siriPresentationShouldSelectUserInput:(id)a0;
- (void)siriPresentationWillStartAcousticIDRequest:(id)a0;
- (void)siriSessionAudioRecordingDidChangePowerLevel:(float)a0;
- (void)siriSessionDidBeginTaskWithIdentifier:(id)a0;
- (void)siriSessionDidChangeLockState:(unsigned long long)a0;
- (void)siriSessionDidChangeNetworkAvailability;
- (void)siriSessionDidDetectMusic;
- (void)siriSessionDidDetectSpeechStartpoint;
- (void)siriSessionDidEnterLatencyStateWithIntentSummary:(id)a0;
- (void)siriSessionDidFinishAcousticIDRequestWithSuccess:(BOOL)a0;
- (void)siriSessionDidFinishRequestWithError:(id)a0;
- (void)siriSessionDidReceiveAddViewsCommand:(id)a0 completion:(id /* block */)a1;
- (void)siriSessionDidReceiveAppPunchOutCommand:(id)a0;
- (void)siriSessionDidReceiveClearScreenCommand:(id)a0;
- (void)siriSessionDidReceiveCloseAssistantCommand:(id)a0;
- (void)siriSessionDidReceiveGuideUpdateCommand:(id)a0;
- (void)siriSessionDidReceiveHideSiriOverlayCommand:(id)a0;
- (void)siriSessionDidReceiveLatencyInformation:(id)a0;
- (void)siriSessionDidReceiveListenForPronunciationCommand:(id)a0;
- (void)siriSessionDidReceiveOpenLinkCommand:(id)a0;
- (void)siriSessionDidReceivePhotoPickerRequestCommand:(id)a0 completion:(id /* block */)a1;
- (void)siriSessionDidReceivePlayVoicemailCommand:(id)a0;
- (void)siriSessionDidReceiveRepeatItCommand:(id)a0;
- (void)siriSessionDidReceiveRevealRecognizedSpeechCommand:(id)a0 completion:(id /* block */)a1;
- (void)siriSessionDidReceiveSayItCommand:(id)a0;
- (void)siriSessionDidReceiveShowHelpCommand:(id)a0;
- (void)siriSessionDidReceiveShowNextCardCommand:(id)a0 completion:(id)a1;
- (void)siriSessionDidReceiveShowNextSnippetCommand:(id)a0;
- (void)siriSessionDidReceiveSmsPlayAudioCommand:(id)a0;
- (void)siriSessionDidReceiveSnippetDisplayConfigurationRequest:(id)a0 completion:(id /* block */)a1;
- (void)siriSessionDidReceiveSpeechPartialResultCommand:(id)a0;
- (void)siriSessionDidReceiveSpeechRecognizedCommand:(id)a0;
- (void)siriSessionDidReceiveStartGenAIEnablementFlowCommand:(id)a0 completion:(id /* block */)a1;
- (void)siriSessionDidReceiveUpdateViewsCommand:(id)a0;
- (void)siriSessionDidReceiveUpdateVisualResponseSnippetCommand:(id)a0;
- (void)siriSessionDidTransitionFromState:(long long)a0 toState:(long long)a1 event:(long long)a2;
- (void)siriSessionGetRequestContextWithCompletionHandler:(id /* block */)a0;
- (void)siriSessionOpenApplicationWithBundleID:(id)a0 URL:(id)a1 completion:(id /* block */)a2;
- (void)siriSessionOpenURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)siriSessionReplayAll:(unsigned long long)a0 with:(id)a1;
- (void)siriSessionReplayAt:(unsigned long long)a0 with:(id)a1;
- (void)siriSessionRequestsDismissal:(unsigned long long)a0;
- (void)siriSessionResultForAceCommand:(id)a0 completion:(id /* block */)a1;
- (void)siriSessionSetReplayEnabled:(BOOL)a0;
- (void)siriSessionSetReplayOverridePath:(id)a0;
- (BOOL)siriSessionShouldRequestUpdateForViewWithIdentifier:(id)a0;
- (void)siriSessionSpeechRecordingDidCancel;
- (void)siriSessionSpeechRecordingDidChangeAVRecordRoute:(id)a0;
- (void)siriSessionSpeechRecordingDidEnd;
- (void)siriSessionSpeechRecordingDidFailWithError:(id)a0;
- (void)siriSessionWillCancelRequest;
- (void)siriSessionWillStartAcousticIDRequest;
- (void)siriSessionWillStartRequest;
- (void)siriSessionWillStartRequestWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)siriSessionWillStartUIRequestWithText:(id)a0 completionHandler:(id /* block */)a1;
- (long long)siriStateForSiriPresentation:(id)a0;
- (void)siriViewDidChangeText:(id)a0;
- (void)siriWillActivateFromSource:(long long)a0;
- (void)siriWillShowPasscodeUnlock;
- (void)siriWillShowPasscodeUnlockAndCancelRequest:(BOOL)a0;
- (void)siriWillStopAttending:(id)a0;
- (void)speechSynthesisDidFinish:(id)a0;
- (void)speechSynthesisDidStartSpeakingWithIdentifier:(id)a0;
- (void)speechSynthesisDidStopSpeakingWithIdentifier:(id)a0 queueIsEmpty:(BOOL)a1;
- (void)speechSynthesisDidUpdatePowerLevelTo:(float)a0;
- (void)speechSynthesisExecuteAnimationForIdentifier:(id)a0;
- (void)speechSynthesisGetPreparedTextForIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)startNewConversationForSiriPresentation:(id)a0;
- (void)stopRecordingSpeechForSiriPresentation:(id)a0;
- (void)stopSpeakingForSiriPresentation:(id)a0;
- (BOOL)switchFocusToResultsViewRemovingResponder:(id)a0;
- (BOOL)switchFocusToSuggestionsRemovingResponder:(id)a0;
- (void)toggleSuggestions;
- (void)updateStatusViewHeight:(double)a0;
- (void)userInteractionDidOccur;
- (double)windowWidthForForSiriPresentation:(id)a0;

@end
