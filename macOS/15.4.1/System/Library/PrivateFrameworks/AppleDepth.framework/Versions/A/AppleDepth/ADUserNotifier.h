@class NSObject;
@protocol OS_dispatch_queue;

@interface ADUserNotifier : NSObject {
    struct __CFUserNotification { } *_notification;
    struct __CFRunLoopSource { } *_source;
    NSObject<OS_dispatch_queue> *_notificationQueue;
}

+ (id)defaultUserNotifier;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)buildTapToRadarURLWithRadarTitle:(id)a0 radarComponent:(unsigned long long)a1;
- (BOOL)createNotificationWithTitle:(id)a0 message:(id)a1 defaultButton:(id)a2 alternateButton:(id)a3 responseBlock:(id /* block */)a4;
- (void)dismissNotification;
- (void)setComponentID:(id)a0 componentName:(id)a1 forQuery:(id)a2;
- (void)showUserNotificationWithTitle:(id)a0 message:(id)a1;

@end
