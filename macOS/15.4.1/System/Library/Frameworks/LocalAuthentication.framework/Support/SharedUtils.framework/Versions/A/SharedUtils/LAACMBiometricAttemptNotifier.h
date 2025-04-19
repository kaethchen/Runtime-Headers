@class NSString;

@interface LAACMBiometricAttemptNotifier : NSObject <LACDarwinNotificationCenterObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)notificationCenter:(id)a0 didReceiveNotification:(struct __CFString { } *)a1;

@end
