@class CLSPOICache;

@interface CLSBusinessCacheUpdater : NSObject {
    CLSPOICache *_businessCategoryCache;
}

- (void).cxx_destruct;
- (id)_resolvedBusinessMUIDs:(id)a0 progressBlock:(id /* block */)a1 error:(id *)a2;
- (id)enrichedBusinessItemsByMuidsForBusinessItems:(id)a0 progressBlock:(id /* block */)a1;
- (id)enrichedBusinessItemsByMuidsForMuids:(id)a0 progressBlock:(id /* block */)a1;
- (id)initWithBusinessCategoryCache:(id)a0;

@end
