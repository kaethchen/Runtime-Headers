@class BSZeroingWeakReference, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface BSPowerMonitor : NSObject {
    struct IONotificationPort { } *_notificationPort;
    unsigned int _notifier;
    BSZeroingWeakReference *_weakSelfWrapper;
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
    NSHashTable *_lock_observers;
    unsigned int _rootDomainConnect;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;

@end
