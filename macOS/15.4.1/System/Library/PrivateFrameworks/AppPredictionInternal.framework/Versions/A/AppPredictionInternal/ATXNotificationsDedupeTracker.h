@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface ATXNotificationsDedupeTracker : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_recordsTable;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)addNotificationId:(id)a0;
- (void)insertEvent:(long long)a0 notificationID:(id)a1;

@end
