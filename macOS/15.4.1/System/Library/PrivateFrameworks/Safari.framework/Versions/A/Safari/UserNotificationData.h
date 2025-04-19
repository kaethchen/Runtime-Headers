@class NSString, UNNotification, BrowserViewController, NSUserNotification;

@interface UserNotificationData : NSObject

@property (readonly, nonatomic) unsigned long long notificationID;
@property (readonly, weak, nonatomic) BrowserViewController *browserViewController;
@property (readonly, copy, nonatomic) NSString *originAndReplaceID;
@property (readonly, copy, nonatomic) NSString *originDisplayName;
@property (retain, nonatomic) NSUserNotification *nsUserNotification;
@property (retain, nonatomic) UNNotification *unNotification;

- (void).cxx_destruct;
- (id)initWithNotificationID:(unsigned long long)a0 userNotification:(id)a1 browserViewController:(id)a2 originAndReplaceID:(id)a3 originDisplayName:(id)a4;

@end
