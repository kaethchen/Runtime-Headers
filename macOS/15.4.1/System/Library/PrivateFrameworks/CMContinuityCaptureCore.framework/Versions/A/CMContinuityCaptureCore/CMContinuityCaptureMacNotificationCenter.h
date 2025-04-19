@class UNUserNotificationCenter, NSString, NSMutableDictionary, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CMContinuityCaptureMacNotificationCenter : CMContinuityCaptureUserNotificationCenter <UNUserNotificationCenterDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    UNUserNotificationCenter *_userNotificationCenter;
    NSMutableDictionary *_activeNotificationIdentifierByType;
    NSMutableDictionary *_activeDeviceIdentifierByNotificationType;
    NSDictionary *_deviceModelToNotificationIcon;
    BOOL _invalidated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithQueue:(id)a0;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)_scheduleNotification:(long long)a0 data:(id)a1;
- (void)_unscheduleNotification:(long long)a0;
- (void)addNotificationRequest:(id)a0 identifier:(id)a1;
- (id)iconForNotificationType:(long long)a0 deviceModel:(id)a1;
- (void)removeNotificationRequest:(id)a0;
- (void)scheduleNotification:(long long)a0 data:(id)a1;
- (void)setupNotificationCenter;
- (BOOL)shouldDisplayNotification:(long long)a0;
- (void)unscheduleNotification:(long long)a0;
- (void)unscheduleNotificationForDeviceIdentifier:(id)a0 type:(long long)a1 clearHistory:(BOOL)a2;

@end
