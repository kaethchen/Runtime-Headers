@class NSString, NSMutableDictionary;

@interface PLGraphCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_cacheIsPopulated;
    NSMutableDictionary *_lock_classesByLabelID;
    NSMutableDictionary *_lock_labelIDsByCode;
}

@property (readonly) NSString *logPrefix;

- (id)init;
- (void).cxx_destruct;
- (void)clearCache;
- (id)objectIDForLabelWithCode:(unsigned int)a0 inContext:(id)a1;
- (id)_existingLabelWithID:(id)a0 inContext:(id)a1;
- (id)cachedObjectIDForLabelWithCode:(unsigned int)a0;
- (void)_lock_addLabelToCache:(id)a0;
- (void)_lock_clearCache;
- (void)_lock_fetchAndCacheWithLabelCode:(unsigned int)a0 inContext:(id)a1;
- (id)_lock_objectIDForLabelWithCode:(unsigned int)a0 inContext:(id)a1;
- (void)_lock_populateCacheIfNecessaryWithContext:(id)a0;
- (void)_lock_populateCacheWithAllLabelsInContext:(id)a0;
- (Class)cachedClassFromLabelID:(id)a0;
- (Class)classFromLabelID:(id)a0 withContext:(id)a1;
- (unsigned long long)countOfCachedClasses;
- (unsigned long long)countOfCachedObjectIDs;
- (id)labelWithCode:(unsigned int)a0 inContext:(id)a1;

@end
