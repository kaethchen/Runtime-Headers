@class NSArray;

@interface ATXUserNotificationGroup : NSObject {
    long long _hasCriticalNotifications;
    long long _hasTimeSensitiveNotifications;
    long long _hasCommunicationsNotifications;
    long long _qualifiesForHighEngagement;
}

@property (readonly, nonatomic) NSArray *notifications;

- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)initWithNotifications:(id)a0;
- (BOOL)hasCommunicationsNotifications;
- (BOOL)hasCriticalNotifications;
- (BOOL)hasTimeSensitiveNotifications;
- (double)latestNotificationTimestamp;
- (BOOL)qualifiesForHighEngagement;
- (BOOL)runCachedCheckOnNotificationsWithIvar:(long long *)a0 block:(id /* block */)a1;

@end
