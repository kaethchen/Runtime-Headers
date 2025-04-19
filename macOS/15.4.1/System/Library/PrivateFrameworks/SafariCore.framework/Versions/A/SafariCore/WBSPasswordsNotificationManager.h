@class NSString, WBSSavedAccount, NSData;

@interface WBSPasswordsNotificationManager : NSObject <SafariCore.WBSPasswordsNotificationManagerProtocol, UNUserNotificationCenterDelegate> {
    void /* unknown type, empty encoding */ userNotificationCenter;
}

@property (class, nonatomic, readonly) WBSPasswordsNotificationManager *sharedNotificationManager;

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (id)init;
- (void).cxx_destruct;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)userNotificationCenter:(id)a0 willPresentNotification:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)initIfAvailable;
- (void)schedulePasswordBreachNotificationRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeDeliveredTakeATourNotification;
- (void)requestPermissionToSendNotificationsProvisionally:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (void)requestStatusWithCompletionHandler:(id /* block */)a0;
- (void)scheduleAutomaticallyCreatedPasskeyNotificationWithServiceName:(NSString *)a0 relyingPartyID:(NSString *)a1 userName:(NSString *)a2 credentialID:(NSData *)a3 completionHandler:(void (^)(void))a4;
- (void)scheduleICloudKeychainSyncingNotification;
- (void)schedulePasswordSavedNotificationForSavedAccount:(WBSSavedAccount *)a0 completionHandler:(void (^)(void))a1;
- (void)schedulePasswordUpdatedNotificationForSavedAccount:(WBSSavedAccount *)a0 completionHandler:(void (^)(void))a1;
- (void)scheduleTakeATourNotificationIfNeededWithCompletionHandler:(void (^)(void))a0;

@end
