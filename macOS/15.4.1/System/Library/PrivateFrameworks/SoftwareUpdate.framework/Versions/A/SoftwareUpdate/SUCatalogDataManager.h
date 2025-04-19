@class NSString, SUCatalog, NSURL, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface SUCatalogDataManager : NSObject {
    NSString *_catalogEntityTag;
    NSURL *_currentlySetCatalogURL;
    NSMutableDictionary *_lastClientRetrievalPostDateByKey;
    BOOL _isCatalogEVProtected;
    BOOL _isDefaultCatalogURL;
    NSString *_cachePathRoot;
    NSObject<OS_dispatch_semaphore> *_inFlightSemaphore;
    NSObject<OS_dispatch_queue> *_updateQueue;
    NSObject<OS_dispatch_queue> *_loadQueue;
    NSObject<OS_dispatch_queue> *_handlerQueue;
}

@property (retain, nonatomic) SUCatalog *catalog;

+ (id)sharedCatalogDataManager;

- (void)dealloc;
- (id)init;
- (void)resetState;
- (void)archiveToCoder:(id)a0;
- (id)_cachePathForProduct:(id)a0;
- (id)_cachePathForURL:(id)a0 inProduct:(id)a1;
- (void)_purgeChangedAndRemovedProductsFromCache;
- (void)_removeCacheForProduct:(id)a0 reason:(id)a1;
- (void)_retrieveURL:(id)a0 forProduct:(id)a1 withHandler:(id /* block */)a2;
- (id)currentlySetCatalogURL;
- (void)dumpDebugInfo;
- (void)dumpStateFromCoder:(id)a0;
- (void)enumerateProductsWithHandler:(id /* block */)a0;
- (void)invalidateResourcesForProduct:(id)a0;
- (BOOL)isCurrentCatalogDefault;
- (BOOL)isCurrentCatalogEVProtected;
- (void)restoreFromCoder:(id)a0;
- (void)retrieveCatalogWithHandler:(id /* block */)a0;
- (void)retrieveDistributionDataForProduct:(id)a0 preferredLocalizations:(id)a1 withHandler:(id /* block */)a2;
- (void)retrieveIntegrityInformationForProduct:(id)a0 withHandler:(id /* block */)a1;
- (void)retrievePKMDataForProduct:(id)a0 withHandler:(id /* block */)a1;
- (void)undoRetrieveDistributionDataForProduct:(id)a0;

@end
