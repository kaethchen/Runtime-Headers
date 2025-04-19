@interface PFCachePolicy : NSObject

- (id)cacheEntryWithKey:(id)a0 value:(id)a1;
- (unsigned long long)capacityHint;
- (void)didAddCacheEntry:(id)a0;
- (void)didGetCacheEntry:(id)a0;
- (void)didRemoveAllCacheEntries;
- (void)didRemoveCacheEntry:(id)a0;
- (id)willAddOrReplaceEntry:(id)a0 add:(BOOL)a1 contents:(id)a2;

@end
