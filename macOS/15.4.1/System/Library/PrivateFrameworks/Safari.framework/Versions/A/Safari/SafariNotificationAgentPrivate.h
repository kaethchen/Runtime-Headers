@class NSString, NSXPCConnection, SafariNotificationAgentDelegate, NSMutableDictionary;

@interface SafariNotificationAgentPrivate : NSObject <SafariNotificationAgent, RemoteNotificationVerificationRequestProxyDelegate> {
    NSMutableDictionary *_pendingRequests;
}

@property (weak, nonatomic) SafariNotificationAgentDelegate *delegate;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)centerDidActivateUserNotification:(id)a0;
- (void)centerDidShowUserNotification:(id)a0;
- (void)centerDidUnregisterForRemoteNotifications:(unsigned long long)a0;
- (void)denyRemoteNotificationPermissionForRequestID:(unsigned long long)a0;
- (void)denyRemoteNotificationPermissionForWebsite:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchIdentifiersAddedAfterDate:(id)a0 beforeDate:(id)a1 withAllowedPermissions:(BOOL)a2 withDeniedPermissions:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)fetchPendingPersistentNotificationEvents:(id /* block */)a0;
- (void)forgetNotificationPermissionForWebsite:(id)a0;
- (void)grantLocalNotificationPermissionAsRemoteNotificationForWebsite:(id)a0 completionHandler:(id /* block */)a1;
- (void)grantRemoteNotificationPermissionForRequestID:(unsigned long long)a0;
- (void)grantRemoteNotificationPermissionForWebsite:(id)a0 completionHandler:(id /* block */)a1;
- (void)identifiersWithDisabledNotificationsForIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)migrateAllRemoteNotificationsToUseSafariIcon:(id)a0;
- (void)removeLocalNotification:(id)a0 forWebsite:(id)a1;
- (void)scheduleLocalNotification:(id)a0 forWebsite:(id)a1;
- (void)startVerificationForRemoteNotificationProviderWithApiURL:(id)a0 websiteIdentifier:(id)a1 queryParameters:(id)a2 referrerURL:(id)a3 requestID:(unsigned long long)a4;
- (void)verificationRequest:(id)a0 centerDidRegisterForRemoteNotifications:(unsigned long long)a1 withDeviceToken:(id)a2;
- (void)verificationRequest:(id)a0 didFinishHandshake:(int)a1 referrerURLHost:(id)a2 errorMessages:(id)a3;

@end
