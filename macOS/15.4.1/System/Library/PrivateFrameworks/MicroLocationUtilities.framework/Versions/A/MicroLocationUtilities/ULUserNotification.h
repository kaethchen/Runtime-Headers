@interface ULUserNotification : NSObject

+ (id)_queue;
+ (long long)_responseButtonFromOptionFlags:(unsigned long long)a0;
+ (void)_postNotificationWithAlertLevel:(long long)a0 alertOptions:(id)a1 handler:(id /* block */)a2;
+ (void)_presentWithAlertLevel:(long long)a0 title:(id)a1 message:(id)a2 defaultButton:(id)a3 cancelButton:(id)a4 otherButton:(id)a5 handler:(id /* block */)a6;
+ (unsigned long long)_userNotificationAlertLevelFlagsFromAlertLevel:(long long)a0;
+ (void)presentWithAlertLevel:(long long)a0 title:(id)a1 message:(id)a2 defaultButton:(id)a3 cancelButton:(id)a4 otherButton:(id)a5 handler:(id /* block */)a6;

@end
