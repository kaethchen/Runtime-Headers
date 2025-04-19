@interface CSFSoftLinking : NSObject

+ (BOOL)isDeviceEnrolledWithDeKOTA:(id *)a0;
+ (void)registerForLoggedOutPushNotifications;
+ (void)unregisterForLoggedOutPushNotifications;

@end
