@class NSXPCListener, NSString, APSConnection, NSObject;
@protocol OS_dispatch_queue;

@interface WBSCloudHistoryPushAgent : NSObject <NSXPCListenerDelegate, WBSCloudHistoryPushAgent> {
    NSXPCListener *_xpcListener;
    APSConnection *_pushConnection;
    NSObject<OS_dispatch_queue> *_pushNotificationStateQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)connection:(id)a0 didReceiveToken:(id)a1 forTopic:(id)a2 identifier:(id)a3;
- (BOOL)_hasAcknowledgedPushNotifications;
- (BOOL)_hasUnacknowledgedPushNotifications;
- (id)_pushTopic;
- (void)_setHasAcknowlegedPushNotifications:(BOOL)a0;
- (void)_setHasUnacknowledgedPushNotifications:(BOOL)a0;
- (id)_userDefaults;
- (void)acknowledgePendingPushNotifications;
- (void)clearAcknowledgedPushNotifications;
- (void)getPushNotifications:(id /* block */)a0;
- (void)queryMemoryFootprint:(id /* block */)a0;

@end
