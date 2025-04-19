@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface NURenderNodeCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_cache;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)addNode:(id)a0;
- (void)_addNode:(id)a0;
- (id)cachedNodeForNode:(id)a0;
- (id)retrieveAndCacheNode:(id)a0;
- (unsigned long long)unhitCacheEntriesCount;

@end
