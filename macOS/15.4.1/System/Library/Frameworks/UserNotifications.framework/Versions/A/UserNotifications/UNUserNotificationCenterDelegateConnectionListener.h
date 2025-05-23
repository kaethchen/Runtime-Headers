@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface UNUserNotificationCenterDelegateConnectionListener : NSObject <NSXPCListenerDelegate, UNUserNotificationCenterDelegateServiceProtocol> {
    NSMutableDictionary *_listenerByBundleIdentifier;
    NSMutableDictionary *_delegateByBundleIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_queue_didChangeSettings:(id)a0 forBundleIdentifier:(id)a1;
- (void)_queue_didOpenApplicationForResponse:(id)a0 forBundleIdentifier:(id)a1;
- (void)_queue_didReceiveNotificationResponse:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)_queue_ensureListenerForBundleIdentifier:(id)a0;
- (void)_queue_invalidateListenerForBundleIdentifier:(id)a0;
- (void)_queue_setDelegate:(id)a0 forBundleIdentifier:(id)a1;
- (void)didChangeSettings:(id)a0 forBundleIdentifier:(id)a1;
- (void)didOpenApplicationForResponse:(id)a0 forBundleIdentifier:(id)a1;
- (void)didReceiveNotificationResponse:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)setDelegate:(id)a0 forBundleIdentifier:(id)a1;

@end
