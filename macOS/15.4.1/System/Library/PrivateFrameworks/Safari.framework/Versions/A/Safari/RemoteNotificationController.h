@class NSMutableDictionary, NSXPCConnection, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface RemoteNotificationController : NSObject <SafariNotificationAgentProxy> {
    NSMutableDictionary *_requestMap;
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_permissions;
    NSMutableSet *_originsDisabledInSystemSettings;
    BOOL _checkingSystemPreferencesPermissions;
}

@property (class, readonly, nonatomic) RemoteNotificationController *sharedController;

+ (id)iconForIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_ensureConnection;
- (void)_clearConnection;
- (void)performDelayedLaunchOperations;
- (void)_checkSystemPreferencesPermissions;
- (void)_clearConnectionIfNeeded;
- (unsigned long long)_generateRequestID;
- (void)_loadPermissionsIfNecessary;
- (id)_safariNotificationAgentProxy;
- (BOOL)_stageSafariIconAtRemoteNotificationPackagesDirectory;
- (void)_updatePermissions:(id)a0 remotePermissionData:(id)a1;
- (void)addRemoteNotificationPermissions:(void *)a0;
- (void)agentDidRegisterForRemoteNotifications:(unsigned long long)a0 allowedDomains:(id)a1 deviceToken:(id)a2;
- (void)agentDidUnregisterForRemoteNotifications:(unsigned long long)a0 disallowedDomains:(id)a1;
- (void)agentDidVerifyRemoteNotificationProviderRequest:(unsigned long long)a0 withResult:(int)a1 referrerURLHost:(id)a2 errorMessages:(id)a3;
- (void)cancelRequestWithID:(unsigned long long)a0;
- (void)centerDidActivateUserNotification:(id)a0;
- (void)centerDidShowUserNotification:(id)a0;
- (void)checkSystemPreferencesPermissions;
- (void)forgetLocalNotificationPermissionForWebsite:(id)a0;
- (void)getNotificationPermissionsWithCompletionHandler:(id /* block */)a0;
- (void)getPendingPersistentNotificationEventsWithCompletionHandler:(id /* block */)a0;
- (void)getPermissionDataCopyWithCompletionHandler:(id /* block */)a0;
- (void)getRemoteAndLocalPermissionDataCopyWithCompletionHandler:(id /* block */)a0;
- (BOOL)isPermissionDisabledInSystemSettingsForOrigin:(id)a0;
- (id)localNotificationWebsiteIdentifierForDomainName:(id)a0;
- (void)migrateAllRemoteNotificationsToUseSafariIcon;
- (id)notificationPermissionAlertForWebsiteName:(id)a0;
- (void)permissionsDidChange;
- (void)registerLocalNotificationsAsRemoteNotificationsForWebsite:(id)a0 websiteDomainString:(id)a1 usingDecisionHandler:(id /* block */)a2;
- (void)registerRemoteNotificationsForWebsiteWithRequestID:(unsigned long long)a0 client:(id)a1;
- (void)removeDeniedOriginPermissionsAddedBetweenDate:(id)a0 andDate:(id)a1;
- (void)removeLocalNotifcation:(id)a0 forDomain:(id)a1;
- (void)removeLocalNotifcationPermissionForWebsiteNames:(id)a0;
- (void)removePermissionForWebsiteWithIdentifiers:(id)a0;
- (void)scheduleLocalNotification:(id)a0 forDomain:(id)a1;
- (void)setPermissionPolicy:(int)a0 forWebsiteIdentifier:(id)a1;
- (id)startVerificationRequestForWebsiteWithIdentifier:(id)a0 apiURL:(id)a1 queryParameters:(id)a2 referrerURL:(id)a3 client:(id)a4;
- (void)unregisterRemoteNotificationsForWebsiteWithRequestID:(unsigned long long)a0 client:(id)a1;

@end
