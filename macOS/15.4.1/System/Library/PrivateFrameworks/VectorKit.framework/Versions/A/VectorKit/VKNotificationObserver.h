@class NSObject;
@protocol OS_dispatch_source, VKNotificationObserverDelegate;

@interface VKNotificationObserver : NSObject {
    id<VKNotificationObserverDelegate> _target;
    SEL _selector;
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)_receivedMemoryNotification;
- (void)_receivedFlushTileCachesNotification;
- (void)_receivedLocalChangedNotification;
- (void)_receivedPowerStateDidChangeNotification;
- (void)_receivedThermalStateDidChangeNotification;
- (id)initWithTarget:(id)a0 taskContext:(const void *)a1;

@end
