@class NSPointerArray;
@protocol PFWeakHashDelegate;

@interface PFWeakHash : PFWeakContainer {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _serializer;
    BOOL _objectHashing;
    _Atomic struct _opaque_pthread_t *_serializedThread;
    id *_objects;
    unsigned long long _capacity;
    NSPointerArray *_payload;
    unsigned long long _payloadPurgeCounter;
    unsigned long long *_inUse;
    unsigned long long _count;
    long long _nilledWeakCount;
}

@property (weak) id<PFWeakHashDelegate> delegate;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)containsObject:(id)a0;
- (id)member:(id)a0;
- (void)addObject:(id)a0;
- (id)allObjects;
- (void)removeAllObjects;
- (BOOL)removeObject:(id)a0;
- (void)_serialize:(id /* block */)a0;
- (unsigned long long)capacity;
- (void)enumerateObjectsWithBlock:(id /* block */)a0;
- (unsigned long long)_addObject:(id)a0;
- (void)_resize;
- (void)_doEnumeration:(id /* block */)a0;
- (unsigned long long)_bucketForObject:(id)a0 foundInHash:(BOOL *)a1;
- (void)_dumpBuckets;
- (BOOL)_onSerializedThread;
- (void)_processNilledWeakReferences;
- (void)_purgeOrphanedPayloads;
- (void)_rehashWithNewCapacity:(unsigned long long)a0;
- (BOOL)_removeAllObjects;
- (void)_setPayload:(id)a0 inBucket:(unsigned long long)a1;
- (BOOL)_shouldGrow;
- (BOOL)_shouldShrink;
- (void)addObject:(id)a0 withPayload:(id)a1;
- (unsigned long long)countByVerifyingWeakObjects;
- (unsigned long long)countEstimate;
- (void)enumerateObjectsAndPayloadsWithBlock:(id /* block */)a0;
- (id)initWithObjectHashing;
- (id)initWithPointerHashing;
- (id)payloadForObject:(id)a0;
- (void)postDelegateBecameEmptyNotice;
- (void)setPayload:(id)a0 forObject:(id)a1;
- (void)weakReferenceBecameNil;

@end
