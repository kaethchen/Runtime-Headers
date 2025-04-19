@class NSOperationQueue, NSHashTable;

@interface COObserverSet : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSHashTable *registrations;
@property (readonly, nonatomic) NSOperationQueue *queue;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)postNotification:(id)a0;
- (id)registeredNames;
- (void)_withLock:(id /* block */)a0;
- (id)addObserverForName:(id)a0 observable:(id)a1 queue:(id)a2 usingBlock:(id /* block */)a3;

@end
