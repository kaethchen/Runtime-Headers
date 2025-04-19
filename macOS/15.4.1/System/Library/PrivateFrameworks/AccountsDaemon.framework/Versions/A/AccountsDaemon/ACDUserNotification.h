@interface ACDUserNotification : NSObject

+ (void)showUserNotificationWithTitle:(id)a0 message:(id)a1 cancelButtonTitle:(id)a2 otherButtonTitle:(id)a3 withCompletionBlock:(id /* block */)a4;
+ (void)showUserNotificationWithTitle:(id)a0 message:(id)a1 cancelButtonTitle:(id)a2 otherButtonTitle:(id)a3 level:(unsigned long long)a4 withCompletionBlock:(id /* block */)a5;

@end
