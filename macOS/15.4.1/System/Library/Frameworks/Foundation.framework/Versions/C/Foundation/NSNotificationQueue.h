@class NSNotificationCenter, NSMutableArray;

@interface NSNotificationQueue : NSObject {
    NSNotificationCenter *_notificationCenter;
    NSMutableArray *_asapQueue;
    NSMutableArray *_idleQueue;
}

@property (class, readonly) NSNotificationQueue *defaultQueue;

- (void)dealloc;
- (id)init;
- (void)_flushNotificationQueue;
- (void)dequeueNotificationsMatching:(id)a0 coalesceMask:(unsigned long long)a1;
- (void)enqueueNotification:(id)a0 postingStyle:(unsigned long long)a1;
- (void)enqueueNotification:(id)a0 postingStyle:(unsigned long long)a1 coalesceMask:(unsigned long long)a2 forModes:(id)a3;
- (id)initWithNotificationCenter:(id)a0;

@end
