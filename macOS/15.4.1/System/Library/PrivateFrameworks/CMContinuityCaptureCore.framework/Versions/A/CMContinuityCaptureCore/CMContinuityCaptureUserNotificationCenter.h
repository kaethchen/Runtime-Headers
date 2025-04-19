@interface CMContinuityCaptureUserNotificationCenter : NSObject

+ (void)invalidate;
+ (id)sharedInstance;

- (id)description;
- (void)invalidate;
- (id)initWithQueue:(id)a0;
- (void)scheduleNotification:(long long)a0 data:(id)a1;
- (void)unscheduleNotification:(long long)a0;
- (void)unscheduleNotificationForDeviceIdentifier:(id)a0 type:(long long)a1 clearHistory:(BOOL)a2;

@end
