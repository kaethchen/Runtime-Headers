@interface AMSRemoteNotification : NSObject

+ (void)handleNotification:(id)a0;
+ (id)_sharedPushHandler;
+ (BOOL)shouldHandleNotification:(id)a0;

@end
