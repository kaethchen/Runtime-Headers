@class PLPhotoLibrary, CSSearchableIndex, NSOperationQueue, NSString, CSManagedSearchableIndex, PLSearchSpotlightSandboxExtension;

@interface PLSpotlightDonationManager : NSObject <PLSpotlightDonationManagerSignpostDelegate> {
    PLSearchSpotlightSandboxExtension *_spotlightSandboxExtension;
}

@property (readonly, nonatomic) CSSearchableIndex *spotlightIndex;
@property (readonly, nonatomic) CSManagedSearchableIndex *managedSpotlightIndex;
@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSString *photoLibraryTypeDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_deleteAllSearchableItemsForSystemPhotoLibraryWithError:(out id *)a0;
+ (id)_photolibraryDatabaseUUIDForPhotolibraryWithURL:(id)a0;
+ (void)handleDeletionForPhotoLibraryWithURL:(id)a0 completion:(id /* block */)a1;
+ (void)handleUniversalSearchPhotoLibraryEligibilityChangeWithDetectedPathChange:(BOOL)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (void)_acquireSpotlightSandboxExtensionIfNeeded;
- (void)_releaseSpotlightSandboxExtension;
- (void)disableUISearch;
- (void)_signPostIntervalForOperationType:(unsigned long long)a0 searchableItemCount:(unsigned long long)a1 isBegin:(BOOL)a2;
- (void)addOperationCountObserver:(id)a0;
- (void)beginSignpostIntervalForOperationType:(unsigned long long)a0 searchableItemCount:(unsigned long long)a1;
- (unsigned long long)deleteAllSearchableItemsFromSpotlight;
- (void)deleteAllSearchableItemsWithCompletion:(id /* block */)a0;
- (unsigned long long)deleteItemsFromSpotlightWithSearchableItemIdentifiers:(id)a0;
- (void)deleteSearchableItemsWithIdentifiers:(id)a0;
- (void)donateSearchableItems:(id)a0 bundleIdentifier:(id)a1;
- (unsigned long long)donateSearchableItemsToSpotlight:(id)a0 bundleIdentifier:(id)a1;
- (void)endSignpostIntervalForOperationType:(unsigned long long)a0 searchableItemCount:(unsigned long long)a1;
- (unsigned long long)pendingOperationCount;
- (void)removeOperationCountObserver:(id)a0;
- (void)setSpotlightOperationQueueSuspended:(BOOL)a0;
- (id)spotlightDonationManagerLog;

@end
