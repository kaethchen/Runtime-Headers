@class RemoteNotificationCenterRequest, NSString, NSArray, NSURL, NSDate, SafariNotificationAgentDelegate, NSUserNotificationCenter, NSMutableSet;

@interface RemoteNotificationCenterDelegate : NSObject <_NSUserNotificationCenterDelegatePrivate> {
    NSMutableSet *_requests;
    RemoteNotificationCenterRequest *_pendingCenterRequest;
    BOOL _websitePackageDataLoaded;
    SafariNotificationAgentDelegate *_agentDelegate;
    NSString *_referrerURLHost;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *urlFormatString;
@property (retain, nonatomic) NSArray *allowedDomains;
@property (retain, nonatomic) NSString *authorizationToken;
@property (retain, nonatomic) NSURL *apiURL;
@property (retain, nonatomic) NSString *deviceToken;
@property (retain, nonatomic) NSDate *dateAdded;
@property (retain, nonatomic) NSString *websiteIdentifier;
@property (retain, nonatomic) NSUserNotificationCenter *center;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)userNotificationCenter:(id)a0 didActivateNotification:(id)a1;
- (void)userNotificationCenter:(id)a0 didDeliverNotification:(id)a1;
- (void)userNotificationCenter:(id)a0 didFailToRegisterForRemoteNotificationsWithError:(id)a1;
- (void)userNotificationCenter:(id)a0 didRegisterForRemoteNotificationsWithDeviceToken:(id)a1;
- (id)_safariLaunchAgentConnection;
- (void)registerForRemoteNotifications:(id)a0;
- (void)_completePendingRequest;
- (void)_deliverNotificationWithTitle:(id)a0 informativeText:(id)a1 buttonTitle:(id)a2 activationURLArguments:(id)a3 isRemote:(BOOL)a4;
- (void)_sendAsynchronousRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)_sendUnregisterRequestIfNecessary:(id /* block */)a0;
- (void)_updateWebsiteData:(id)a0;
- (void)forgetRemoteNotificationPermission;
- (id)initWithWebsiteIdentifier:(id)a0 agentDelegate:(id)a1;
- (BOOL)isNotificationPermissionDisabledInSystemSettings;
- (void)removeLocalNotification:(id)a0;
- (void)scheduleLocalNotification:(id)a0;
- (void)unregisterForRemoteNotifications:(id)a0;

@end
