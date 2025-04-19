@class NSArray, NSDateFormatter, NSObject;
@protocol OS_dispatch_queue, CacheDeleteNotificationObserverDelegate;

@interface CacheDeleteNotificationObserver : NSObject {
    NSDateFormatter *_formatter;
}

@property (readonly, weak, nonatomic) id<CacheDeleteNotificationObserverDelegate> delegate;
@property (readonly, nonatomic) NSArray *observedPaths;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;

- (void).cxx_destruct;
- (BOOL)beginObserving;
- (void)_onQueueBeginObserving;
- (void)_onQueueConfigurePurgeMarkerForVolume:(struct __CFArray { } *)a0;
- (void)_onQueueProcessNotifications:(struct __CFArray { } *)a0;
- (void)_onQueueSubscribeToNotificationsForVolume:(id)a0;
- (id)initWithDelegate:(id)a0 observedPaths:(id)a1 notificationQueue:(id)a2;

@end
