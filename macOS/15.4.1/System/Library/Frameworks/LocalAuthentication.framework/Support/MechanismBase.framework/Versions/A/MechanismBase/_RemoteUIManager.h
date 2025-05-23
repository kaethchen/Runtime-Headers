@class RemoteUIManagerConfig, NSString, RemoteUIParams, MechanismUI, NSDate;
@protocol LACUIMechanism, LACRemoteUIHost, LACRemoteUI, RemoteUIEndpointProvider;

@interface _RemoteUIManager : NSObject <RemoteUIManaging, RemoteUIActivatorDelegate> {
    RemoteUIParams *_request;
    id /* block */ _pendingShowUiReply;
    id /* block */ _pendingUiActivationBlock;
    MechanismUI<LACUIMechanism, LACRemoteUIHost> *_pendingUiMechanism;
    id<LACRemoteUI> _dismissingUi;
    BOOL _uiDismissedBeforeConnection;
    BOOL _ignoreDeactivation;
    int _showUiCounter;
    int _dismissUiCounter;
    RemoteUIManagerConfig *_config;
    id<RemoteUIEndpointProvider> _endpointProvider;
    NSDate *_latestAllowedUIExitTimestamp;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)anonymousListener;
- (id)workQueue;
- (id)initWithConfig:(id)a0;
- (void)checkHasPendingUIRequestsWithCompletion:(id /* block */)a0;
- (void)connectRemoteUI:(id)a0 requestID:(id)a1 reply:(id /* block */)a2;
- (void)disconnectRemoteUI;
- (void)_activateUi;
- (void)_assignPendingRequest:(id)a0 reply:(id /* block */)a1;
- (void)_replyOnceToShowUi:(BOOL)a0 error:(id)a1;
- (void)_setupUiActivationTimeoutForParams:(id)a0;
- (void)connectionToViewServiceInvalidatedForIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)didReceiveExpectedError:(id)a0;
- (void)didReceiveUnexpectedError:(id)a0;
- (void)dismissRemoteUI:(id)a0 uiMechanism:(id)a1 uiDisappeared:(BOOL)a2 shouldIdle:(BOOL)a3 reply:(id /* block */)a4;
- (void)prepareForRemoteViewControllerWithMechanism:(id)a0 reply:(id /* block */)a1;
- (void)setEndpointProvider:(id)a0;
- (void)showUIWithParams:(id)a0 reply:(id /* block */)a1;

@end
