@class CALNUNNotificationContentMapper, CALNUNNotificationRequestMapper, CALNUNNotificationResponseMapper, NSString, CALNUNNotificationMapper;
@protocol CALNUNUserNotificationCenterProtocol, CALNNotificationStorage, CALNUserNotificationCenterDelegate;

@interface CALNUNUserNotificationCenter : NSObject <UNUserNotificationCenterDelegate, CALNUserNotificationCenter>

@property (readonly, nonatomic) id<CALNUNUserNotificationCenterProtocol> userNotificationCenter;
@property (readonly, nonatomic) id<CALNNotificationStorage> storage;
@property (readonly, nonatomic) CALNUNNotificationMapper *notificationMapper;
@property (readonly, nonatomic) CALNUNNotificationRequestMapper *notificationRequestMapper;
@property (readonly, nonatomic) CALNUNNotificationContentMapper *notificationContentMapper;
@property (readonly, nonatomic) CALNUNNotificationResponseMapper *notificationResponseMapper;
@property (nonatomic, getter=isActive) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CALNUserNotificationCenterDelegate> delegate;

+ (void)_addSettingName:(id)a0 value:(id)a1 toStatsPayload:(id)a2 forTopicIdentifier:(id)a3;
+ (id)_statsPayloadKeyForSettingName:(id)a0 topicIdentifier:(id)a1;

- (void).cxx_destruct;
- (void)activate;
- (void)removeAllDeliveredNotifications;
- (id)deliveredNotifications;
- (void)deactivate;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)a0;
- (void)setNotificationCategories:(id)a0;
- (void)userNotificationCenter:(id)a0 willPresentNotification:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)notificationCategories;
- (void)removeAllPendingNotificationRequests;
- (id)_updatedRecord:(id)a0;
- (BOOL)addNotificationRequest:(id)a0 error:(id *)a1;
- (void)collectSettingsStats:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 userNotificationCenterFactory:(id)a1 storage:(id)a2 notificationIconCache:(id)a3;
- (BOOL)replaceNotificationRequest:(id)a0 error:(id *)a1;

@end
