@class SMDeviceConfigurationChecker, SMAppDeletionManager, NSXPCInterface, SMSuggestionsManager, RTDefaultsManager, RTPlatform, SMSuggestionsHelper, SMEligibilityChecker, SMSessionStore, NSString, SMReceiverService, SMInitiatorService, SMSuggestionsStore, RTAuthorizationManager, SMMessagingService, RTDistanceCalculator;

@interface SMClientListener : RTXPCListener <NSXPCListenerDelegate> {
    NSXPCInterface *_frameworkInterface;
    NSXPCInterface *_daemonInterface;
}

@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTAuthorizationManager *authorizationManager;
@property (retain, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (retain, nonatomic) RTPlatform *platform;
@property (retain, nonatomic) SMInitiatorService *initiatorService;
@property (retain, nonatomic) SMSessionStore *sessionStore;
@property (retain, nonatomic) SMSuggestionsManager *suggestionsManager;
@property (retain, nonatomic) SMSuggestionsHelper *suggestionsHelper;
@property (retain, nonatomic) SMSuggestionsStore *suggestionsStore;
@property (retain, nonatomic) SMMessagingService *messagingService;
@property (retain, nonatomic) SMReceiverService *receiverService;
@property (retain, nonatomic) SMEligibilityChecker *eligibilityChecker;
@property (retain, nonatomic) SMDeviceConfigurationChecker *deviceConfigurationChecker;
@property (retain, nonatomic) SMAppDeletionManager *appDeletionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_setup;
- (id)initWithDefaultsManager:(id)a0 authorizationManager:(id)a1 distanceCalculator:(id)a2 platform:(id)a3 initiatorService:(id)a4 messagingService:(id)a5 receiverService:(id)a6 sessionStore:(id)a7 suggestionsManager:(id)a8 suggestionsHelper:(id)a9 suggestionsStore:(id)a10 eligibilityChecker:(id)a11 deviceConfigurationChecker:(id)a12 appDeletionManager:(id)a13;
- (void)_setupConnection:(id)a0 forClient:(id)a1;
- (id)handleClientConnection:(id)a0;
- (void)handleDisconnectionForDaemonClient:(id)a0;

@end
