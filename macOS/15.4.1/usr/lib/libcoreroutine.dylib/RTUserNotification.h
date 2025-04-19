@interface RTUserNotification : NSObject

+ (id)interruptionLevelToString:(unsigned long long)a0;

- (id)init;
- (BOOL)deleteNotificationWithError:(id *)a0;
- (id)initWithBundleIdentifier:(id)a0 notificationUUIDString:(id)a1;
- (void)postNotificationWithTitle:(id)a0 subtitle:(id)a1 body:(id)a2 footer:(id)a3 defaultActionUrl:(id)a4 categoryIdentifier:(id)a5 interruptionLevel:(unsigned long long)a6 destination:(unsigned long long)a7 actions:(id)a8 suppressDismissActionInCarPlay:(BOOL)a9 preventAutomaticRemoval:(BOOL)a10 expirationDate:(id)a11 userInfo:(id)a12 handler:(id /* block */)a13;

@end
