@class NSMutableDictionary, AFQueue, NSError, NSObject, AFWatchdogTimer, AFClientConfiguration, AFInstanceContext, AFOneArgumentSafetyBlock, NSString, AFSiriClientStateManager, AFPreferences, AFCallSiteInfo, AFInterstitialProvider, NSArray, AFAnalytics, NSXPCConnection, AFAudioPowerUpdater, NSUUID;
@protocol AFSpeechDelegate, AFAssistantUIService, OS_dispatch_group, OS_dispatch_queue;

@interface AFConnection : NSObject <NSXPCListenerDelegate, AFAudioPowerUpdaterDelegate, AFAccessibilityListening, AFDeviceRingerSwitchListening, AFInterstitialProviderDelegate> {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSString *_outstandingRequestClass;
    void *_clientID;
    AFCallSiteInfo *_initiationCallSiteInfo;
    NSArray *_cachedBulletins;
    NSUUID *_activeRequestUUID;
    long long _activeRequestType;
    long long _activeRequestUsefulUserResultType;
    AFWatchdogTimer *_requestTimeoutTimer;
    AFOneArgumentSafetyBlock *_requestCompletion;
    long long _activeRequestActivationEvent;
    long long _activeRequestSpeechEvent;
    int _activeRequestTypeForRequestCategorization;
    BOOL _activeRequestHasSpeechRecognition;
    BOOL _activeRequestIsDucking;
    BOOL _activeRequestIsTwoShot;
    BOOL _connectionHadActiveNetwork;
    double _activeRequestBeginTime;
    unsigned long long _activeRequestSpeechEndHostTime;
    unsigned long long _activeRequestNumberOfPresentedInterstitials;
    double _activeRequestStartSpeechTimeRequested;
    double _activeRequestStartSpeechTimeAPICalled;
    double _activeRequestStopSpeechTimeRequested;
    double _activeRequestStopSpeechTimeAPICalled;
    double _activeRequestSpeechRecordingEndTimeInterval;
    double _activeRequestSpeechRecognitionTimeInterval;
    double _activeRequestInitialInterstitialBeginTimeInterval;
    NSUUID *_activeTurnIdentifier;
    NSMutableDictionary *_replyHandlerForAceId;
    unsigned char _stateInSync : 1;
    unsigned char _shouldSpeak : 1;
    unsigned char _isCapturingSpeech : 1;
    unsigned char _hasOutstandingRequest : 1;
    NSString *_recordRoute;
    NSString *_playbackRoute;
    AFAudioPowerUpdater *_inputAudioPowerUpdater;
    AFClientConfiguration *_clientConfiguration;
    AFInterstitialProvider *_interstitialProvider;
    AFQueue *_interstitialCommandQueue;
    unsigned char _clientConfigurationIsInSync : 1;
    unsigned char _voiceOverIsActive : 1;
    NSError *_lastRetryError;
    unsigned long long _pendingSpeechRequestCounter;
    NSObject<OS_dispatch_group> *_speechCallbackGroup;
    unsigned long long _uufrID;
    AFPreferences *_preferences;
    AFInstanceContext *_instanceContext;
    AFAnalytics *_analytics;
    AFSiriClientStateManager *_siriClientStateManager;
    _Atomic unsigned long long _activePlaybackCount;
}

@property (weak, nonatomic) id<AFAssistantUIService> delegate;
@property (weak, nonatomic) id<AFSpeechDelegate> speechDelegate;
@property (readonly, nonatomic) BOOL isRecording;
@property (readonly, nonatomic) BOOL hasActiveRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (BOOL)isAvailable;
+ (id)outputVoice;
+ (id)currentLanguageCode;
+ (BOOL)isNetworkAvailable;
+ (void)defrost;
+ (id)_networkAvailability;
+ (id)_sAvailabilityObserverForTestVerification;
+ (BOOL)assistantIsSupported;
+ (BOOL)assistantIsSupportedForLanguageCode:(id)a0 error:(id *)a1;
+ (void)beginMonitoringAvailability;
+ (BOOL)siriIsSupportedForLanguageCode:(id)a0 deviceProductVersion:(id)a1 error:(id *)a2;
+ (BOOL)siriIsSupportedForLanguageCode:(id)a0 productName:(id)a1 productVersion:(id)a2 error:(id *)a3;
+ (void)stopMonitoringAvailability;
+ (BOOL)userDataSyncNeeded;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)setConfiguration:(id)a0;
- (id)_connection;
- (void)cancelRequest;
- (void)setAccessibilityState:(id)a0;
- (void)_updateState;
- (void)endSession;
- (float)peakPower;
- (void)updateSpeechSynthesisRecord:(id)a0;
- (void)rollbackRequest;
- (void)cancelSpeech;
- (void)clearContext;
- (void)setApplicationContext:(id)a0;
- (void)startUIRequest;
- (void)_clearConnection;
- (void)_setRecordRoute:(id)a0;
- (void)_aceConnectionWillRetryOnError:(id)a0;
- (id)_clientServiceWithErrorHandler:(id /* block */)a0;
- (void)_invokeRequestTimeoutForReason:(id)a0;
- (void)_cancelRequestTimeoutForReason:(id)a0;
- (void)_resumeRequestTimeoutForReason:(id)a0;
- (void)_willEndSession;
- (id)acquireUserInteractionAssertion;
- (void)requestBarrier:(id /* block */)a0;
- (id)_activeRequestUUID;
- (void)_barrier;
- (void)_beginInterstitialsForReason:(id)a0;
- (id)_cachedBulletins;
- (void)_checkAndSetIsCapturingSpeech:(BOOL)a0;
- (void)_clearAssistantInfoForAccountWithIdentifier:(id)a0;
- (id)_clientConfiguration;
- (id)_clientService;
- (void)_completeRequestWithUUID:(id)a0 forReason:(long long)a1 error:(id)a2;
- (void)_connectionFailedWithError:(id)a0;
- (void)_dispatchCallbackGroupBlock:(id /* block */)a0;
- (void)_dispatchCommand:(id)a0 isInterstitial:(BOOL)a1 interstitialPhase:(long long)a2 interstitialDelay:(double)a3 reply:(id /* block */)a4;
- (void)_endInterstitialsForReason:(id)a0;
- (void)_enqueueInterstitialCommand:(id)a0;
- (void)_extendExistingRequestTimeoutForReason:(id)a0;
- (void)_extendExpiringRequestTimeout;
- (void)_extendRequestTimeoutForReason:(id)a0 durationInSeconds:(double)a1;
- (void)_fetchShouldSpeak:(id /* block */)a0;
- (long long)_getActiveSpeechEvent;
- (void)_handleCommand:(id)a0 reply:(id /* block */)a1;
- (void)_handleInterstitialPhase:(long long)a0 fromProvider:(id)a1 displayText:(id)a2 speakableText:(id)a3 expectedDelay:(double)a4 context:(id)a5 completion:(id /* block */)a6;
- (void)_markIsDucking;
- (void)_markIsTwoShot;
- (void)_markNetworkDidBecomeActive;
- (void)_markSpeechRecognized;
- (id)_metricContextValueForUseDeviceSpeakerForTTS:(long long)a0;
- (void)_pauseRequestTimeoutForReason:(id)a0;
- (void)_requestDidEnd;
- (void)_requestWillBeginWithRequestClass:(id)a0 isSpeechRequest:(BOOL)a1 speechRequestOptions:(id)a2 requestInfo:(id)a3 analyticsEventProvider:(id /* block */)a4;
- (void)_requestWillBeginWithRequestClass:(id)a0 isSpeechRequest:(BOOL)a1 speechRequestOptions:(id)a2 requestInfo:(id)a3 isBackgroundRequest:(BOOL)a4 analyticsEventProvider:(id /* block */)a5;
- (void)_scheduleRequestTimeoutForReason:(id)a0 durationInSeconds:(double)a1;
- (void)_setShouldSpeak:(BOOL)a0;
- (BOOL)_shouldEmitUEIRequestLinkForRequestInfo:(id)a0 speechRequestOptions:(id)a1;
- (id)_siriClientStateManager;
- (void)_speechRecordingDidFailWithError:(id)a0;
- (BOOL)_startInputAudioPowerUpdatesWithXPCWrapper:(id)a0;
- (id)_startRequestMetricSettings;
- (void)_startRequestTimeoutTimerWithTimeInterval:(double)a0 reason:(id)a1;
- (void)_startRequestWithAceCommand:(id)a0 turnIdentifier:(id)a1 suppressAlert:(BOOL)a2;
- (void)_startRequestWithInfo:(id)a0;
- (void)_startUIRequestWithInfo:(id)a0 completion:(id /* block */)a1;
- (void)_startUIRequestWithText:(id)a0 completion:(id /* block */)a1;
- (void)_stopInputAudioPowerUpdates;
- (void)_tellDelegateAudioPlaybackRequestDidStart:(id)a0;
- (void)_tellDelegateAudioPlaybackRequestDidStop:(id)a0 error:(id)a1;
- (void)_tellDelegateAudioPlaybackRequestWillStart:(id)a0;
- (void)_tellDelegateAudioSessionDidBecomeActive:(BOOL)a0;
- (void)_tellDelegateAudioSessionDidBeginInterruptionWithUserInfo:(id)a0;
- (void)_tellDelegateAudioSessionDidEndInterruption:(BOOL)a0 userInfo:(id)a1;
- (void)_tellDelegateAudioSessionWillBecomeActive:(BOOL)a0;
- (void)_tellDelegateCacheImage:(id)a0;
- (void)_tellDelegateDidDetectMusic;
- (void)_tellDelegateDidFinishAcousticIDRequestWithSuccess:(BOOL)a0;
- (void)_tellDelegateExtensionRequestFinishedForApplication:(id)a0 error:(id)a1;
- (void)_tellDelegateExtensionRequestWillStartForApplication:(id)a0;
- (void)_tellDelegateFailedToLaunchAppWithBundleIdentifier:(id)a0;
- (void)_tellDelegateInvalidateCurrentUserActivity;
- (void)_tellDelegateRequestWillStart;
- (void)_tellDelegateSetUserActivityInfo:(id)a0 webpageURL:(id)a1;
- (void)_tellDelegateShouldSpeakChanged:(BOOL)a0;
- (void)_tellDelegateStartPlaybackDidFail:(long long)a0;
- (void)_tellDelegateWillProcessAppLaunchWithBundleIdentifier:(id)a0;
- (void)_tellDelegateWillProcessStartPlayback:(long long)a0 intent:(id)a1 completion:(id /* block */)a2;
- (void)_tellDelegateWillStartAcousticIDRequest;
- (void)_tellSpeechDelegateRecognitionDidFail:(id)a0;
- (void)_tellSpeechDelegateRecognitionUpdateWillBeginForTask:(id)a0;
- (void)_tellSpeechDelegateRecognizedAdditionalSpeechInterpretation:(id)a0 refId:(id)a1;
- (void)_tellSpeechDelegateRecordingDidBeginOnAVRecordRoute:(id)a0;
- (void)_tellSpeechDelegateRecordingDidCancel;
- (void)_tellSpeechDelegateRecordingDidChangeAVRecordRoute:(id)a0;
- (void)_tellSpeechDelegateRecordingDidDetectStartpoint;
- (void)_tellSpeechDelegateRecordingDidEnd;
- (void)_tellSpeechDelegateRecordingDidFail:(id)a0;
- (void)_tellSpeechDelegateRecordingDidUpdateRecognitionPhrases:(id)a0 utterances:(id)a1 refId:(id)a2;
- (void)_tellSpeechDelegateRecordingWillBeginWithInputAudioPowerXPCWrapper:(id)a0;
- (void)_tellSpeechDelegateSpeechRecognized:(id)a0;
- (void)_tellSpeechDelegateSpeechRecognizedPartialResult:(id)a0;
- (void)_tellSpeechDelegateToPerformTwoShotPromptWithType:(long long)a0 reply:(id /* block */)a1;
- (void)_updateClientConfiguration;
- (void)_updateSpeechEndHostTime:(unsigned long long)a0;
- (void)_updateStateIfNotInSync;
- (void)_willCancelRequest;
- (void)_willCompleteRequest;
- (void)_willFailRequestWithError:(id)a0;
- (void)_willPresentUsefulUserResultWithType:(long long)a0;
- (void)_willStartRequestWithSpeech:(BOOL)a0 speechRequestOptions:(id)a1 requestInfo:(id)a2 analyticsEventProvider:(id /* block */)a3;
- (void)_willStopRecordingWithSignpostID:(unsigned long long)a0;
- (void)accessibilityObserver:(id)a0 stateDidChangeFrom:(id)a1 to:(id)a2;
- (void)acquireAudioSessionWithContext:(id)a0 completion:(id /* block */)a1;
- (void)adviseSessionArbiterToContinueWithPreviousWinner:(BOOL)a0;
- (void)audioPowerUpdaterDidUpdate:(id)a0 averagePower:(float)a1 peakPower:(float)a2;
- (float)averagePower;
- (void)boostedPreheatWithStyle:(long long)a0 completion:(id /* block */)a1;
- (void)broadcastCommandDictionary:(id)a0;
- (void)cancelRequestForReason:(long long)a0;
- (void)checkLanguageReady:(id)a0 completion:(id /* block */)a1;
- (void)deviceRingerObserver:(id)a0 didChangeState:(long long)a1;
- (void)didDismissUI;
- (void)failRequestWithError:(id)a0;
- (void)fetchAppicationContextForApplicationInfo:(id)a0 supplementalContext:(id)a1 refID:(id)a2;
- (void)fetchShouldSpeak:(id /* block */)a0;
- (void)forceAudioSessionActive;
- (void)forceAudioSessionActiveWithContext:(id)a0 completion:(id /* block */)a1;
- (void)forceAudioSessionActiveWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)forceAudioSessionActiveWithOptions:(unsigned long long)a0 reason:(long long)a1 completion:(id /* block */)a2;
- (void)forceAudioSessionActiveWithOptions:(unsigned long long)a0 reason:(long long)a1 speechRequestOptions:(id)a2 completion:(id /* block */)a3;
- (void)forceAudioSessionInactive;
- (void)forceAudioSessionInactiveWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)getCachedObjectsWithIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)getDeferredObjectsWithIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)getRemoteClockTimerSnapshotWithCompletion:(id /* block */)a0;
- (id)initWithTargetQueue:(id)a0;
- (id)initWithTargetQueue:(id)a0 instanceContext:(id)a1;
- (void)interstitialProvider:(id)a0 handlePhase:(long long)a1 displayText:(id)a2 speakableText:(id)a3 expectedDelay:(double)a4 context:(id)a5 completion:(id /* block */)a6;
- (void)preheatWithStyle:(long long)a0;
- (void)preheatWithStyle:(long long)a0 forOptions:(id)a1;
- (void)prepareForPhoneCall;
- (void)recordRequestMetric:(id)a0 withTimestamp:(double)a1;
- (void)recordUIMetrics:(id)a0;
- (void)reportIssueForError:(id)a0 type:(long long)a1 context:(id)a2;
- (void)reportIssueForError:(id)a0 type:(long long)a1 subtype:(id)a2 context:(id)a3;
- (void)reportIssueForType:(id)a0 subtype:(id)a1 context:(id)a2;
- (void)requestBarrierIfNecessary:(id /* block */)a0;
- (oneway void)requestDidAskForTimeoutExtension:(double)a0;
- (void)resumeInterruptedAudioPlaybackIfNeeded;
- (void)rollbackClearContext;
- (void)sendFeedbackToAppPreferencesPredictorForMetricsContext:(id)a0 selectedBundleId:(id)a1;
- (void)sendGenericAceCommand:(id)a0;
- (void)sendGenericAceCommand:(id)a0 conflictHandler:(id /* block */)a1;
- (void)sendGenericAceCommand:(id)a0 turnIdentifier:(id)a1 conflictHandler:(id /* block */)a2;
- (void)sendReplyCommand:(id)a0;
- (void)setAlertContextWithBulletins:(id)a0;
- (void)setAnnouncementRequestsPermittedByPresentationWhileActive:(BOOL)a0;
- (void)setApplicationContextForApplicationInfos:(id)a0;
- (void)setApplicationContextForApplicationInfos:(id)a0 withRefId:(id)a1;
- (void)setCarDNDActive:(BOOL)a0;
- (void)setDeviceRingerSwitchState:(long long)a0;
- (void)setIsDeviceInStarkMode:(BOOL)a0;
- (void)setLockState:(BOOL)a0 screenLocked:(BOOL)a1;
- (void)setModesConfiguration:(id)a0;
- (void)setMyriadDecisionResult:(BOOL)a0;
- (void)setOverriddenApplicationContext:(id)a0 withContext:(id)a1;
- (void)setShouldWaitForMyriad:(BOOL)a0;
- (void)setSupportsCarPlayVehicleData:(BOOL)a0;
- (void)setVoiceOverIsActive:(BOOL)a0;
- (void)setWatchAuthenticated:(BOOL)a0;
- (BOOL)shouldSpeak;
- (void)startAcousticIDRequestWithOptions:(id)a0;
- (void)startAudioPlaybackRequest:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)startContinuationRequestWithUserInfo:(id)a0;
- (void)startDirectActionRequestWithString:(id)a0;
- (id /* block */)startRecordingAndGetContinueBlockForPendingSpeechRequestWithOptions:(id)a0;
- (void)startRecordingForPendingSpeechRequestWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)startRequestWithAceCommand:(id)a0;
- (void)startRequestWithCorrectedText:(id)a0 forSpeechIdentifier:(id)a1 userSelectionResults:(id)a2;
- (void)startRequestWithCorrectedText:(id)a0 forSpeechIdentifier:(id)a1 userSelectionResults:(id)a2 turnIdentifier:(id)a3;
- (void)startRequestWithInfo:(id)a0;
- (void)startRequestWithInfo:(id)a0 activationEvent:(long long)a1;
- (void)startRequestWithText:(id)a0;
- (void)startSpeechPronunciationRequestWithOptions:(id)a0 pronunciationContext:(id)a1;
- (void)startSpeechRequestWithOptions:(id)a0;
- (void)startSpeechRequestWithSpeechFileAtURL:(id)a0;
- (void)startSpeechRequestWithSpeechFileAtURL:(id)a0 isNarrowBand:(BOOL)a1;
- (void)stopAllAudioPlaybackRequests:(BOOL)a0;
- (void)stopAudioPlaybackRequest:(id)a0 immediately:(BOOL)a1;
- (void)stopSpeech;
- (void)stopSpeechWithOptions:(id)a0;
- (void)telephonyRequestCompleted;
- (void)updateSpeechOptions:(id)a0;
- (void)usefulUserResultWillPresent;
- (void)willPresentUI;
- (void)willPresentUsefulUserResultWithType:(long long)a0;
- (void)willPresentUsefulUserResultWithType:(long long)a0 forCommand:(id)a1;
- (void)willSetApplicationContextWithRefId:(id)a0;

@end
