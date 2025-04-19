@class NSString;

@interface _WKWebPushDaemonConnection : NSObject <WKObject> {
    struct ObjectStorage<API::WebPushDaemonConnection> { struct type { unsigned char __lx[24]; } data; } _connection;
}

@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfiguration:(id)a0;
- (struct Ref<API::WebPushDaemonConnection, WTF::RawPtrTraits<API::WebPushDaemonConnection>, WTF::DefaultRefDerefTraits<API::WebPushDaemonConnection>> { struct WebPushDaemonConnection *x0; })_protectedConnection;
- (void)cancelNotification:(id)a0 uuid:(id)a1;
- (void)getNextPendingPushMessage:(id /* block */)a0;
- (void)getNotifications:(id)a0 tag:(id)a1 completionHandler:(id /* block */)a2;
- (void)getPushPermissionStateForOrigin:(id)a0 completionHandler:(id /* block */)a1;
- (void)getSubscriptionForScope:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestPushPermissionForOrigin:(id)a0 completionHandler:(id /* block */)a1;
- (void)setAppBadge:(unsigned long long *)a0 origin:(id)a1;
- (void)showNotification:(id)a0 completionHandler:(id /* block */)a1;
- (void)subscribeToPushServiceForScope:(id)a0 applicationServerKey:(id)a1 completionHandler:(id /* block */)a2;
- (void)unsubscribeFromPushServiceForScope:(id)a0 completionHandler:(id /* block */)a1;

@end
