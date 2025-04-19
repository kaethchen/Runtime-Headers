@class _TtC26AuthenticationServicesCore27ASProgressiveBackoffManager, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ASCAuthorizationTrafficController : NSObject {
    NSMutableDictionary *_appsWithActiveRequests;
    NSObject<OS_dispatch_queue> *_clearanceQueue;
    NSObject<OS_dispatch_queue> *_trafficQueue;
    _TtC26AuthenticationServicesCore27ASProgressiveBackoffManager *_backoffManager;
    NSMutableDictionary *_appIdentifiersToPresentationContexts;
}

+ (id)sharedInstance;
+ (BOOL)_appWithAppIdentifierIsWebBrowser:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)beginAuthorizationForApplicationIdentifier:(id)a0 token:(id)a1 withClearanceHandler:(id /* block */)a2;
- (void)cancelAuthorizationForAppIdentifierIfNecessary:(id)a0 token:(id)a1;
- (void)endAuthorizationForAppIdentifier:(id)a0 token:(id)a1 clearanceHandler:(id /* block */)a2;
- (void)getPresentationContextForApplicationWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)setPresentationContext:(id)a0 forApplicationWithIdentifier:(id)a1;

@end
