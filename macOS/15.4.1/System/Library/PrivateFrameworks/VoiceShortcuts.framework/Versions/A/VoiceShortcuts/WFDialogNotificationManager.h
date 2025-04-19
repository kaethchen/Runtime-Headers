@class NSString, WFUserNotificationManager;

@interface WFDialogNotificationManager : NSObject <UNUserNotificationCenterDelegate>

@property (readonly, nonatomic) WFUserNotificationManager *userNotificationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)categoryIdentifiers;
+ (id)dialogNotificationCategory;
+ (id)dialogNotificationConfirmationCategory;

- (void).cxx_destruct;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)postNotificationWithRequest:(id)a0 presentationMode:(unsigned long long)a1 runningContext:(id)a2;
- (void)handleRemovedIgnoredNotifications:(id)a0;
- (id)initWithUserNotificationManager:(id)a0;

@end
