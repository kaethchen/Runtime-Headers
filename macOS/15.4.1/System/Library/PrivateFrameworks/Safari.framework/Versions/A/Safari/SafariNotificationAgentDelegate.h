@class NSString, NSMutableDictionary, SafariNotificationAgentPrivate;

@interface SafariNotificationAgentDelegate : NSObject <NSXPCListenerDelegate> {
    NSMutableDictionary *_centers;
    SafariNotificationAgentPrivate *_agent;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)_ensureCenterDelegate:(id)a0;
- (void)centerDidActivateUserNotification:(id)a0;
- (void)centerDidShowUserNotification:(id)a0;
- (void)forgetRemoteNotificationPermissionForWebsite:(id)a0;
- (id)identifiersWithDisabledNotificationsForIdentifiers:(id)a0;
- (void)removeLocalNotification:(id)a0 forWebsite:(id)a1;
- (void)scheduleLocalNotification:(id)a0 forWebsite:(id)a1;
- (BOOL)tryToRegisterRemoteNotificationPermission:(id)a0;
- (void)unregisterRemoteNotificationPermission:(id)a0;

@end
