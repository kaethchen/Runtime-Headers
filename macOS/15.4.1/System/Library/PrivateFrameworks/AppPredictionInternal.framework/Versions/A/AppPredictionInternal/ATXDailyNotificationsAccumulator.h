@class NSArray;

@interface ATXDailyNotificationsAccumulator : NSObject

@property (readonly, copy, nonatomic) NSArray *allDeliveredNotifications;

- (void).cxx_destruct;
- (BOOL)successfullyAccumulatedNotificationEvents;

@end
