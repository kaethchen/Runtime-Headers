@class NSArray, NSURL;

@interface AMCache : NSObject

@property (retain) NSArray *cacheLocationEntries;
@property (retain) NSArray *actionLocations;
@property (retain) NSURL *cacheFileURL;
@property BOOL didLoadAllActions;
@property BOOL cacheIsDirty;

+ (unsigned long long)_actionDiscoveryDomainMaskForActionDomain:(long long)a0;
+ (id)_automatorLibraryFolderURLsForDomainMask:(unsigned long long)a0;
+ (id)_cacheFileURLWithCacheFileName:(id)a0 inDomain:(unsigned long long)a1;
+ (id)actionLocationsForDomain:(long long)a0;
+ (id)cacheFileURLForDomain:(long long)a0;
+ (id)readOnlySystemCacheFileURL;

- (id)description;
- (void).cxx_destruct;
- (id)_cacheFileDataForCacheLocationEntries:(id)a0 error:(id *)a1;
- (id)_cacheLocationEntriesFromCacheFileURL:(id)a0 expectedActionLocationURLs:(id)a1 shouldDirtyCache:(BOOL *)a2;
- (id)_cacheLocationEntryURLsFromCacheFileData:(id)a0 error:(id *)a1;
- (id)_currentLanguages;
- (id)_dataFromCacheFileAtURL:(id)a0 error:(id *)a1;
- (id)_validCacheLocationEntriesFromCacheFileURL:(id)a0 expectedActionLocationURLs:(id)a1 shouldDirtyCache:(BOOL *)a2;
- (BOOL)_writeCacheFileForLocationEntries:(id)a0 toURL:(id)a1 error:(id *)a2;
- (id)actionWithBundleIdentifier:(id)a0;
- (id)actionsForActionType:(id)a0;
- (id)dateAddedForActionWithBundleIdentifier:(id)a0;
- (id)initWithCacheFileURL:(id)a0 actionLocations:(id)a1;
- (void)loadAllActionsIfNeededForActionType:(id)a0;
- (BOOL)validateCacheFileData:(id)a0 error:(id *)a1;
- (void)writeUpdatedCacheFileIfNeeded;

@end
