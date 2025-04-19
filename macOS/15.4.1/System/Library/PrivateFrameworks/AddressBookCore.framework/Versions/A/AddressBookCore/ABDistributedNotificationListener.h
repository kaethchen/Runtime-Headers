@class CNContactStore, NSNotificationCenter, NSData, NSMutableArray;
@protocol ABDistributedNotificationListenerDelegate, CNScheduler;

@interface ABDistributedNotificationListener : NSObject

@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (retain, nonatomic) NSMutableArray *notificationTokens;
@property (retain, nonatomic) id<CNScheduler> scheduler;
@property (retain, nonatomic) CNContactStore *store;
@property (retain, nonatomic) NSData *lastHistoryToken;
@property (readonly, weak, nonatomic) id<ABDistributedNotificationListenerDelegate> delegate;

+ (id)os_log;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)initWithDelegate:(id)a0 notificationCenter:(id)a1 contactStore:(id)a2 scheduler:(id)a3;
- (void)processChangesSinceLastNotification:(id)a0;
- (void)processTestNotification:(id)a0;
- (void)startListeningForDistributedNotificationsWithNames:(id)a0;
- (void)stopListeningForDistributedNotifications;

@end
