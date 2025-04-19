@class NSMapTable;

@interface PHAssociatedObjectsTable : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _locks[16];
    NSMapTable *_buckets[16];
}

@property (readonly) long long stripeCount;

- (id)init;
- (void).cxx_destruct;
- (id)associatedObjectOnObject:(id)a0 forKey:(id)a1;
- (void)removeAllAssociatedObjectsOnObject:(id)a0;
- (void)removeAssociatedObjectOnObject:(id)a0 forKey:(id)a1;
- (void)setAssociatedObject:(id)a0 onObject:(id)a1 forKey:(id)a2;
- (id)setAssociatedObjectIfNotSet:(id)a0 onObject:(id)a1 forKey:(id)a2;

@end
