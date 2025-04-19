@class NSString, NSObject;
@protocol RemoteUIManaging, OS_dispatch_queue, RemoteUIActivatorDelegate;

@interface RemoteUIManager : NSObject <RemoteUIActivatorDelegate, RemoteUIManaging> {
    id<RemoteUIManaging, RemoteUIActivatorDelegate> _responder;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)anonymousListener;
- (id)workQueue;
- (id)initWithConfig:(id)a0;
- (void)checkHasPendingUIRequestsWithCompletion:(id /* block */)a0;
- (void)connectRemoteUI:(id)a0 requestID:(id)a1 reply:(id /* block */)a2;
- (void)disconnectRemoteUI;
- (void)connectionToViewServiceInvalidatedForIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)didReceiveExpectedError:(id)a0;
- (void)didReceiveUnexpectedError:(id)a0;
- (void)dismissRemoteUI:(id)a0 uiMechanism:(id)a1 uiDisappeared:(BOOL)a2 shouldIdle:(BOOL)a3 reply:(id /* block */)a4;
- (void)prepareForRemoteViewControllerWithMechanism:(id)a0 reply:(id /* block */)a1;
- (void)setEndpointProvider:(id)a0;
- (void)showUIWithParams:(id)a0 reply:(id /* block */)a1;

@end
