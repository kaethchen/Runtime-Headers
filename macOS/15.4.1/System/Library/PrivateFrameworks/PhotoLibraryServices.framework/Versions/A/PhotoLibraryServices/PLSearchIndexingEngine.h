@class CSManagedSearchableIndex, NSString, PLResult, PLSearchIndexingAccessManager, CSSearchableIndex, PSIDatabase, PLSearchSpotlightSandboxExtension, NSObject, NSMutableArray, PLSearchIndexingRebuildEngine, PLSearchIndexingIncrementalUpdateEngine, PLSearchIndexConfiguration;
@protocol OS_dispatch_queue, PLSearchIndexingEngineLibraryServicesProvider, OS_dispatch_group;

@interface PLSearchIndexingEngine : NSObject <PLSearchIndexingRebuildEngineDelegate, PLSearchIndexingIncrementalUpdateEngineDelegate> {
    id<PLSearchIndexingEngineLibraryServicesProvider> _libraryServicesProvider;
    PLSearchIndexingAccessManager *_accessManager;
    NSObject<OS_dispatch_queue> *_queue;
    CSSearchableIndex *_queue_spotlightIndex;
    CSManagedSearchableIndex *_queue_managedSpotlightIndex;
    PSIDatabase *_queue_psiDatabase;
    PLSearchIndexingRebuildEngine *_queue_rebuildEngine;
    PLSearchIndexingIncrementalUpdateEngine *_queue_updateEngine;
    PLSearchSpotlightSandboxExtension *_queue_spotlightSandboxExtension;
    BOOL _queue_closed;
    NSMutableArray *_queue_eventHistory;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _dropLock;
    BOOL _dropLock_dropInProgress;
    NSObject<OS_dispatch_group> *_dropLock_dropGroup;
    PLResult *_dropLock_dropResult;
}

@property (readonly, nonatomic) PLSearchIndexConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)close;
- (id)initWithLibraryServicesManager:(id)a0;
- (void)disableUISearch;
- (void)resumeSearchIndexRebuildIfNeededForLibrary:(id)a0 calledBy:(id)a1 completion:(id /* block */)a2;
- (id)_clientStateResultAndLogWithCode:(unsigned long long)a0 debugDescription:(id)a1 underlyingError:(id)a2;
- (void)_dropSearchIndexWithSourceName:(id)a0 reasons:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_inLibraryPerform_donateAssets:(id)a0 library:(id)a1 completion:(id /* block */)a2;
- (void)_inLibraryPerform_donateManagedObjects:(id)a0 partialUpdateMasks:(id)a1 entity:(unsigned long long)a2 deleteIdentifiers:(id)a3 identifiersRequiringAdditionalWorkByEntity:(id)a4 library:(id)a5 progress:(id)a6 completion:(id /* block */)a7;
- (void)_inq_acquireSpotlightSandboxExtensionIfNeeded;
- (void)_inq_close;
- (void)_inq_donatePSIObjectsByType:(id)a0 spotlightItemsByBundleID:(id)a1 deleteIdentifiers:(id)a2 spotlightClientState:(id)a3 completion:(id /* block */)a4;
- (void)_inq_dropSearchIndexWithSourceName:(id)a0 reasons:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_inq_handleClientStateValidationError:(id)a0 library:(id)a1;
- (void)_inq_open;
- (void)_inq_releaseSpotlightSandboxExtension;
- (void)_inq_validateSpotlightClientStateAgainstExpectedClientState:(id)a0 completion:(id /* block */)a1;
- (void)_safePerformBlock:(id /* block */)a0;
- (id)_spotlightIndexName;
- (id)configurationForIncrementalUpdateEngine:(id)a0;
- (void)dropSearchIndexForSearchIndexingRebuildEngine:(id)a0 completion:(id /* block */)a1;
- (void)dropSearchIndexWithSourceName:(id)a0 completion:(id /* block */)a1;
- (void)fetchRemainingWorkWithLibrary:(id)a0 completion:(id /* block */)a1;
- (BOOL)hasRebuildWorkToDoForLibrary:(id)a0;
- (void)inLibraryPerform_donateForIncrementalUpdateEngine:(id)a0 managedObjects:(id)a1 partialUpdateMasks:(id)a2 entity:(unsigned long long)a3 deleteIdentifiers:(id)a4 identifiersRequiringAdditionalWorkByEntity:(id)a5 library:(id)a6 progress:(id)a7 completion:(id /* block */)a8;
- (void)inLibraryPerform_donateForSearchIndexingRebuildEngine:(id)a0 managedObjects:(id)a1 entity:(unsigned long long)a2 entityName:(id)a3 library:(id)a4 progress:(id)a5 queue:(id)a6 completion:(id /* block */)a7;
- (void)indexAssetsIfNeededWithObjectIDs:(id)a0 library:(id)a1 completion:(id /* block */)a2;
- (void)indexAssetsWithUUIDs:(id)a0 partialUpdateMask:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)initWithLibraryServicesProvider:(id)a0;
- (void)openWithCompletion:(id /* block */)a0;
- (void)pauseProcessingIncrementalUpdates;
- (void)pauseSearchIndexRebuildWithSourceName:(id)a0;
- (id)processBatchOfJobsWithType:(short)a0 flags:(long long)a1 library:(id)a2 completion:(id /* block */)a3;
- (void)removeUnusedGroupsFromPSI;
- (void)resetSearchIndexWithReason:(long long)a0 library:(id)a1 dropCompletion:(id /* block */)a2 completion:(id /* block */)a3;
- (void)resumeProcessingIncrementalUpdatesInLibrary:(id)a0 completion:(id /* block */)a1;
- (id)sceneTaxonomyDigestsForSearchIndexingRebuildEngine:(id)a0;
- (BOOL)supportsPSI;
- (BOOL)supportsSpotlightClientState;
- (BOOL)supportsSpotlightDelete;
- (BOOL)supportsSpotlightDonate;
- (long long)wellKnownLibraryIdentifierForIncrementalUpdateEngine:(id)a0;
- (long long)wellKnownLibraryIdentifierForSearchIndexingRebuildEngine:(id)a0;

@end
