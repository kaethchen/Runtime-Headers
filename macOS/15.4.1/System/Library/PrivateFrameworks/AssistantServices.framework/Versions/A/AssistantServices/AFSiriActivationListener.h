@class NSXPCListener, NSString, AFNotifyObserver, NSObject;
@protocol OS_dispatch_queue, AFSiriActivationListenerDelegate;

@interface AFSiriActivationListener : NSObject <AFNotifyObserverDelegate, AFSiriActivationService, NSXPCListenerDelegate, AFInvalidating> {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_xpcListener;
    id<AFSiriActivationListenerDelegate> _delegate;
    unsigned long long _clientState;
    AFNotifyObserver *_clientStateObserver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)stop;
- (void)_invalidate;
- (void)_stop;
- (oneway void)deactivateForReason:(long long)a0 options:(unsigned long long)a1 context:(id)a2 completion:(id /* block */)a3;
- (id)initWithServicePort:(long long)a0;
- (void)notifyObserver:(id)a0 didChangeStateFrom:(unsigned long long)a1 to:(unsigned long long)a2;
- (void)_activateWithRequestInfo:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)_deactivateForReason:(long long)a0 options:(unsigned long long)a1 context:(id)a2 completion:(id /* block */)a3;
- (void)_deliverButtonEventFromContext:(id)a0 completion:(id /* block */)a1;
- (void)_myriadEventWithRequestInfo:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)_prewarmWithRequestInfo:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)_startWithDelegate:(id)a0;
- (oneway void)activateWithRequestInfo:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (oneway void)handleContext:(id)a0 completion:(id /* block */)a1;
- (oneway void)handleIntent:(id)a0 inBackgroundAppWithBundleId:(id)a1 reply:(id /* block */)a2;
- (oneway void)handleIntentForwardingAction:(id)a0 inBackgroundApplicationWithBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (oneway void)prewarmWithRequestInfo:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)startWithDelegate:(id)a0;

@end
