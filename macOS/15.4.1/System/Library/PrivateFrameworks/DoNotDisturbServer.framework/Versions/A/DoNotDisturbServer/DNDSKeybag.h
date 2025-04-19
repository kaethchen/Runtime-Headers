@class NSString, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface DNDSKeybag : NSObject <DNDSKeybagStateProviding> {
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_queue_priorityObservers;
    BOOL _queue_priorityHasUnlockedSinceBoot;
    NSHashTable *_queue_observers;
    BOOL _queue_hasUnlockedSinceBoot;
}

@property (readonly, nonatomic) BOOL isLocked;
@property (readonly, nonatomic) BOOL hasUnlockedSinceBoot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)addPriorityObserver:(id)a0;
- (void)_queue_handleKeybagStatusChanged;
- (void)_beginObservingKeybag;
- (BOOL)_hasUnlockedSinceBootForObserver:(id)a0;
- (void)_queue_handleFirstUnlock;
- (BOOL)hasUnlockedSinceBootForObserver:(id)a0;

@end
