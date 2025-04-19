@class UNUserNotificationCenter;

@interface IMDiagnosticNotifier : NSObject

@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter;

- (id)init;
- (void).cxx_destruct;
- (void)postNotification:(id)a0;
- (void)postNotificationWithTitle:(id)a0 body:(id)a1;

@end
