@class NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface BMResourceContainerAvailabilityMonitor : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSHashTable *observers;

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)_stopUserVaultMonitoringSession;
- (void)_startUserVaultMonitoringSession;
- (void)addObserver:(id)a0 forContainerType:(unsigned char)a1;
- (void)removeObserver:(id)a0 forContainerType:(unsigned char)a1;

@end
