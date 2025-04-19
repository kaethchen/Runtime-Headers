@class NSMapTable, NSDate, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HMFMemoryMonitor : HMFObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) HMFMemoryMonitor *memoryMonitor;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *memoryPressureSource;
@property (nonatomic, getter=isMonitoring) BOOL monitoring;
@property (nonatomic) long long systemMemoryState;
@property (nonatomic) long long lastProcessMemoryState;
@property (retain, nonatomic) NSDate *lastProcessMemoryStateUpdateTime;
@property (readonly) NSMapTable *memoryObservancesByObserver;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)start;
- (void)stop;
- (void)addObserver:(id)a0 debounceInterval:(double)a1 events:(id)a2;

@end
