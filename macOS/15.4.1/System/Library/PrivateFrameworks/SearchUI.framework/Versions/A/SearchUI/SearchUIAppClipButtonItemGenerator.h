@class NSString, TLKAsyncCache;

@interface SearchUIAppClipButtonItemGenerator : SearchUIButtonItemGenerator <SearchUIBatchedCachePrewarmer>

@property (readonly) TLKAsyncCache *cacheToPrewarm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)generateSearchUIButtonItemsWithSFButtonItem:(id)a0 completion:(id /* block */)a1;
- (id)itemsToBatchPreFetchForRowModel:(id)a0;

@end
