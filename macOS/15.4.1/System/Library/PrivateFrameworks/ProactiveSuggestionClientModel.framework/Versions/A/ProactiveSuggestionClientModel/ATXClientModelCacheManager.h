@class NSString, _PASLock;

@interface ATXClientModelCacheManager : NSObject <ATXClientModelCacheManagerProtocol> {
    _PASLock *_clientModelCacheHandlersLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)cacheDirectory;
- (id)cachedSuggestionsForAllClientModels;
- (id)cachedSuggestionsForClientModel:(id)a0;
- (id)lastCacheUpdateDateForClientModel:(id)a0;
- (void)updateCachedSuggestions:(id)a0;
- (void)initGuardedData;
- (void)addCacheHandlersForExistingClientModelCaches;
- (void)addNewCacheHandlerIfNeededGivenExistingCacheHandlersInGuardedData:(id)a0 clientModelId:(id)a1;
- (double)cacheAgeForClientModel:(id)a0;
- (id)cacheFileHandlerForClientModel:(id)a0 guardedData:(id)a1;

@end
