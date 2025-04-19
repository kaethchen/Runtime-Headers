@class UNUserNotificationCenter, IMDScreenTimeAskReponseHandler, NSString, IMDAskToBuyResponseHandler;

@interface IMDNotificationResponseUtilities : NSObject <UNUserNotificationCenterDelegate>

@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter;
@property (retain, nonatomic) IMDScreenTimeAskReponseHandler *screenTimeAskReponseHandler;
@property (retain, nonatomic) IMDAskToBuyResponseHandler *askToBuyResponseHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)_markMessageAsRead:(id)a0 inChat:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)_sendMessageResponse:(id)a0 toMessage:(id)a1 inChat:(id)a2 withCompletionHandler:(id /* block */)a3;
- (void)_setupNotificationCenter;
- (void)handleMessagesNotificationResponse:(id)a0 userNotificationCenter:(id)a1 completionHandler:(id /* block */)a2;

@end
