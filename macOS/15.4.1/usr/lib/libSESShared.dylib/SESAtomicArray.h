@class NSMutableArray;

@interface SESAtomicArray : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_objects;
}

- (id)init;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (void)removeAllObjects;
- (void)removeObject:(id)a0;
- (id)snapshot;
- (id)firstWhere:(id /* block */)a0;

@end
