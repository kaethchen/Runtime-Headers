@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface LACCache : NSObject {
    NSMutableDictionary *_cachedValues;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cachedValuesLock;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (nonatomic) double timeout;

- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithTimeout:(double)a0;
- (id)_identifierForParameter:(id)a0;
- (void)_invalidateCachedValue:(id)a0 identifier:(id)a1;
- (id)cachedValueWithParameter:(id)a0;
- (void)setCachedValue:(id)a0 withParameter:(id)a1;

@end
