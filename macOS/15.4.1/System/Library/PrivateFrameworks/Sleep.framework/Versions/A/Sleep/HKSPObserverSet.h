@class NSMapTable;
@protocol NAScheduler;

@interface HKSPObserverSet : NSObject

@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } observersLock;
@property (readonly, nonatomic) NSMapTable *observerRecords;
@property (readonly, nonatomic) unsigned long long count;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (BOOL)containsObserver:(id)a0;
- (void)removeAllObservers;
- (void)enumerateObserversWithBlock:(id /* block */)a0;
- (void)_withLock:(id /* block */)a0;
- (void)addObserver:(id)a0 wasFirst:(BOOL *)a1;
- (id)initWithCallbackScheduler:(id)a0;
- (void)removeObserver:(id)a0 wasLast:(BOOL *)a1;
- (void)addObserver:(id)a0 callbackScheduler:(id)a1;
- (void)addObserver:(id)a0 callbackScheduler:(id)a1 wasFirst:(BOOL *)a2;
- (id)enumerateObserversWithFutureBlock:(id /* block */)a0;

@end
