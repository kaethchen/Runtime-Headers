@class SMDeviceConfigurationChecker, RTAuthorizationManager, RTDistanceCalculator, NSObject, SMSuggestionsManager, RTDefaultsManager, RTEntitlementProvider, RTPlatform, SMSuggestionsHelper, SMEligibilityChecker, SMSessionStore, NSString, SMReceiverService, SMInitiatorService, SMSuggestionsStore, NSXPCConnection, SMMessagingService, SMAppDeletionManager;
@protocol OS_dispatch_queue;

@interface SMDaemonClient : NSObject <SMSessionManagerObserverProtocol, SMInitiatorServiceObserverProtocol, SMReceiverServiceObserverProtocol, SMDaemonProtocol, NSXPCConnectionDelegate>

@property BOOL enabled;
@property (nonatomic) BOOL supported;
@property (retain, nonatomic) RTEntitlementProvider *entitlementProvider;
@property (retain, nonatomic) SMInitiatorService *initiatorService;
@property (nonatomic) BOOL monitorInitiatorSafetyCache;
@property (nonatomic) BOOL monitorReceiverSessionStatus;
@property (nonatomic) BOOL monitorReceiverSafetyCache;
@property (retain, nonatomic) SMSessionStore *sessionStore;
@property (nonatomic) BOOL monitorSessionState;
@property (nonatomic) BOOL monitorLocalSessionState;
@property (retain, nonatomic) SMSuggestionsManager *suggestionsManager;
@property (retain, nonatomic) SMSuggestionsHelper *suggestionsHelper;
@property (retain, nonatomic) SMSuggestionsStore *suggestionsStore;
@property (retain, nonatomic) SMMessagingService *messagingService;
@property (retain, nonatomic) SMReceiverService *receiverService;
@property (retain, nonatomic) SMEligibilityChecker *eligibilityChecker;
@property (retain, nonatomic) SMDeviceConfigurationChecker *deviceConfigurationChecker;
@property (retain, nonatomic) SMAppDeletionManager *appDeletionManager;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) RTAuthorizationManager *authorizationManager;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (retain, nonatomic) RTPlatform *platform;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) NSString *executablePath;
@property (copy, nonatomic) NSString *executableName;
@property (nonatomic) int processIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (void)shutdown;
- (void)iMessageConversationDeletedFor:(id)a0;
- (void)_onLocalSessionStateChanged:(id)a0;
- (void)_onSessionStateChanged:(id)a0 forActiveDevice:(BOOL)a1;
- (void)calculateDistanceToDestination:(id)a0 completionHandler:(id /* block */)a1;
- (void)cancelInitializationForSessionID:(id)a0 handler:(id /* block */)a1;
- (void)cancelInitializationWithHandler:(id /* block */)a0;
- (void)cancelMadridMessageSendForMessageGUID:(id)a0 toConversation:(id)a1 completion:(id /* block */)a2;
- (void)checkConversationEligibility:(id)a0 handler:(id /* block */)a1;
- (void)checkEligibilityOfDestination:(id)a0 completionHandler:(id /* block */)a1;
- (void)checkHasSimWithHandler:(id /* block */)a0;
- (void)checkInitiatorEligibilityWithHandler:(id /* block */)a0;
- (void)clearSessionMonitorStatesWithHandler:(id /* block */)a0;
- (void)clearSessionsWithHandler:(id /* block */)a0;
- (void)clearSuggestionsWithHandler:(id /* block */)a0;
- (void)clearTriggerDestinationStatesWithHandler:(id /* block */)a0;
- (void)detailsViewOpenedForSessionID:(id)a0;
- (void)endSessionForSessionID:(id)a0 reason:(unsigned long long)a1 handler:(id /* block */)a2;
- (void)estimateEtaToDestination:(id)a0 transportType:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)fetchAllReceiverSessionStatusWithCompletion:(id /* block */)a0;
- (void)fetchCurrentLocalSessionStateWithHandler:(id /* block */)a0;
- (void)fetchCurrentSessionStateWithHandler:(id /* block */)a0;
- (void)fetchCurrentWorkoutSnapshotWithHandler:(id /* block */)a0;
- (void)fetchDeviceConfigurationLowPowerModeWarningStateWithHandler:(id /* block */)a0;
- (void)fetchInitiatorSafetyCacheForSessionID:(id)a0 completion:(id /* block */)a1;
- (void)fetchMostLikelyReceiverHandlesWithHandler:(id /* block */)a0;
- (void)fetchMostLikelyReceiverHandlesWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchMostLikelySessionDestinationsWithHandler:(id /* block */)a0;
- (void)fetchMostRecentSessionMonitorStateWithSessionID:(id)a0 handler:(id /* block */)a1;
- (void)fetchNumEmergencyRecipientsWithReceiverHandles:(id)a0 handler:(id /* block */)a1;
- (void)fetchNumFavoriteRecipientsWithReceiverHandles:(id)a0 handler:(id /* block */)a1;
- (void)fetchNumiCloudFamilyRecipientsWithReceiverHandles:(id)a0 handler:(id /* block */)a1;
- (void)fetchReceiverSafetyCacheForSessionID:(id)a0 completion:(id /* block */)a1;
- (void)fetchReceiverSessionStatusForSessionID:(id)a0 completion:(id /* block */)a1;
- (void)fetchSOSReceiversWithCompletion:(id /* block */)a0;
- (void)fetchSessionConfigurationsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchSessionManagerStatesWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchShouldShowProactiveSuggestionsWithHandler:(id /* block */)a0;
- (void)fetchSuggestedCheckInURLForWorkoutSuggestionWithHandler:(id /* block */)a0;
- (void)fetchSuggestedSessionConfigurationWithHandler:(id /* block */)a0;
- (void)fetchSuggestionsCountWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchSuggestionsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchTriggerDestinationStateWithSessionID:(id)a0 handler:(id /* block */)a1;
- (void)handoffSessionForSessionID:(id)a0 handler:(id /* block */)a1;
- (void)iMessageDeletedFor:(id)a0;
- (void)iMessageGroupDisplayNameChangedFor:(id)a0;
- (void)iMessageGroupMembershipChangedFor:(id)a0;
- (void)iMessageGroupPhotoChangedFor:(id)a0;
- (void)iMessageReceived:(id)a0 fromHandle:(id)a1 fromMe:(BOOL)a2;
- (void)iMessageScheduledSendCancelFor:(id)a0 successful:(BOOL)a1 withError:(id)a2;
- (void)iMessageScheduledSendScheduledFor:(id)a0 guid:(id)a1 successful:(BOOL)a2 withError:(id)a3;
- (void)iMessageScheduledSendTriggeredFor:(id)a0;
- (void)iMessageSendFor:(id)a0 guid:(id)a1 successful:(BOOL)a2 withError:(id)a3;
- (id)initWithQueue:(id)a0 authorizationManager:(id)a1 defaultsManager:(id)a2 distanceCalculator:(id)a3 platform:(id)a4 initiatorService:(id)a5 messagingService:(id)a6 receiverService:(id)a7 sessionStore:(id)a8 suggestionsManager:(id)a9 suggestionsHelper:(id)a10 suggestionsStore:(id)a11 eligibilityChecker:(id)a12 deviceConfigurationChecker:(id)a13 appDeletionManager:(id)a14;
- (void)initializeAndStartSessionWithConfiguration:(id)a0 handler:(id /* block */)a1;
- (void)initializeSessionWithConversation:(id)a0 handler:(id /* block */)a1;
- (void)kickedFromIMessageGroupWith:(id)a0;
- (void)launchSessionInitiationUIWithConfiguration:(id)a0 handler:(id /* block */)a1;
- (void)modifySessionWithConfiguration:(id)a0 handler:(id /* block */)a1;
- (void)onAuthorizationNotification:(id)a0;
- (void)onInitiatorSafetyCacheChangeForSessionID:(id)a0 phoneCache:(id)a1 watchCache:(id)a2 cacheExpiryDate:(id)a3 cacheReleaseDate:(id)a4;
- (void)onLocalSessionStateChanged:(id)a0;
- (void)onReceiverSafetyCacheChangeForSessionID:(id)a0 phoneCache:(id)a1 watchCache:(id)a2;
- (void)onReceiverSessionStatusChangeForSessionID:(id)a0 sessionStatus:(id)a1;
- (void)onSessionResumedWithState:(id)a0 forActiveDevice:(BOOL)a1;
- (void)onSessionStateChanged:(id)a0 forActiveDevice:(BOOL)a1;
- (void)promptDestinationAnomalyVerificationWithContext:(id)a0 handler:(id /* block */)a1;
- (void)promptRoundTripAnomalyVerificationWithContext:(id)a0 handler:(id /* block */)a1;
- (void)promptSafeArrivalWithContext:(id)a0 handler:(id /* block */)a1;
- (void)promptTimerEndedVerificationWithContext:(id)a0 handler:(id /* block */)a1;
- (void)promptWorkoutAnomalyVerificationWithContext:(id)a0 handler:(id /* block */)a1;
- (void)respondToNotificationWithIdentifier:(id)a0 sessionIdentifier:(id)a1 actionIdentifier:(id)a2 handler:(id /* block */)a3;
- (void)respondToTriggerPromptForSessionID:(id)a0 response:(long long)a1 handler:(id /* block */)a2;
- (void)runProactiveSuggestionsEngineWithContext:(id)a0 shouldStoreSuggestions:(BOOL)a1 handler:(id /* block */)a2;
- (void)scheduleMadridMessageSendForMessage:(id)a0 messageGUID:(id)a1 associatedGUID:(id)a2 sendDate:(id)a3 toConversation:(id)a4 summaryText:(id)a5 completion:(id /* block */)a6;
- (void)sendHeartbeatForSessionID:(id)a0 handler:(id /* block */)a1;
- (void)sendIDSMessage:(id)a0 toConversation:(id)a1 completion:(id /* block */)a2;
- (void)sendIDSMessageToMyDevices:(id)a0 completion:(id /* block */)a1;
- (void)sendIDSMessageToMyNearbyDevices:(id)a0 completion:(id /* block */)a1;
- (void)sendIDSMessageToPairedDevice:(id)a0 completion:(id /* block */)a1;
- (void)sendMadridMessage:(id)a0 associatedGUID:(id)a1 toConversation:(id)a2 summaryText:(id)a3 completion:(id /* block */)a4;
- (void)sendSafetyCacheForSessionID:(id)a0 handler:(id /* block */)a1;
- (void)shouldShowKeyboardSuggestionsForInitiator:(id)a0 receiver:(id)a1 handler:(id /* block */)a2;
- (void)shouldShowTipKitSuggestionsForInitiator:(id)a0 receiver:(id)a1 handler:(id /* block */)a2;
- (void)showAlwaysOnPromptWithConfiguration:(id)a0 handler:(id /* block */)a1;
- (void)showSuggestionsDetectionUIWithSuggestion:(id)a0 handler:(id /* block */)a1;
- (void)startMonitoringInitiatorSafetyCacheWithHandler:(id /* block */)a0;
- (void)startMonitoringLocalSessionStateWithHandler:(id /* block */)a0;
- (void)startMonitoringReceiverSafetyCacheWithHandler:(id /* block */)a0;
- (void)startMonitoringReceiverSessionStatusWithHandler:(id /* block */)a0;
- (void)startMonitoringSessionStateWithHandler:(id /* block */)a0;
- (void)startSessionWithConfiguration:(id)a0 handler:(id /* block */)a1;
- (void)stopMonitoringInitiatorSafetyCacheWithCompletion:(id /* block */)a0;
- (void)stopMonitoringLocalSessionStateWithHandler:(id /* block */)a0;
- (void)stopMonitoringReceiverSafetyCacheWithCompletion:(id /* block */)a0;
- (void)stopMonitoringReceiverSessionStatusWithCompletion:(id /* block */)a0;
- (void)stopMonitoringSessionStateWithHandler:(id /* block */)a0;
- (void)storeSessionConfigurations:(id)a0 handler:(id /* block */)a1;
- (void)storeSessionManagerStates:(id)a0 handler:(id /* block */)a1;
- (void)storeSessionMonitorStates:(id)a0 handler:(id /* block */)a1;
- (void)storeSuggestions:(id)a0 handler:(id /* block */)a1;
- (void)storeTriggerDestinationStates:(id)a0 handler:(id /* block */)a1;
- (void)userRequestedCacheDownloadForSessionID:(id)a0 completion:(id /* block */)a1;

@end
