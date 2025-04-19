@class NSMutableArray;

@interface IMExtensionNotificationManager : NSObject

@property (retain, nonatomic) NSMutableArray *notificationsContext;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)notificationCategories;
- (BOOL)canPopulateUserInfoForMessageBalloonBundleID:(id)a0;
- (void)populateUserInfoForNotificationContent:(id)a0 messageBalloonBundleID:(id)a1 payloadData:(id)a2 chatIdentifier:(id)a3 isUrgentMessageTrigger:(BOOL *)a4 shouldSuppressNotification:(BOOL *)a5;
- (BOOL)shouldRetractedMessageForBalloonBundleID:(id)a0;

@end
