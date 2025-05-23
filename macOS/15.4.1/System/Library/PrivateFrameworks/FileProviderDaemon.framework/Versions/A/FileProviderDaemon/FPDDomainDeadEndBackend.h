@class FPDDomain, NSArray, NSString, NSData, NSFileProviderDomainVersion, NSError;

@interface FPDDomainDeadEndBackend : NSObject <FPDDomainBackend> {
    FPDDomain *_domain;
    NSError *_materializationError;
}

@property (readonly, copy) NSArray *rootURLs;
@property (readonly, copy) NSArray *coordinationRootURLs;
@property (readonly, copy) NSArray *checkableURLs;
@property (readonly, nonatomic) NSFileProviderDomainVersion *domainVersion;
@property (readonly, nonatomic) NSData *backingStoreIdentity;
@property (readonly, nonatomic) BOOL backgroundActivityIsPaused;
@property (readonly, nonatomic) long long errorGenerationCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithDomain:(id)a0;
- (void)currentMaterializedSetSyncAnchorWithCompletionHandler:(id /* block */)a0;
- (void)currentPendingSetSyncAnchorWithCompletionHandler:(id /* block */)a0;
- (void)enumerateMaterializedSetFromSyncAnchor:(id)a0 suggestedBatchSize:(long long)a1 completionHandler:(id /* block */)a2;
- (void)enumeratePendingSetFromSyncAnchor:(id)a0 suggestedBatchSize:(long long)a1 completionHandler:(id /* block */)a2;
- (void)forceUpdateBlockedProcessNamesFromDomain:(id)a0 completionHandler:(id /* block */)a1;
- (void)itemForItemID:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;
- (void)reimportItemsBelowItemWithID:(id)a0 markItemDataless:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)resolveConflictAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)setPutBackInfoOnItemAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)wakeForPushWithCompletionHandler:(id /* block */)a0;
- (void)materializeItemWithID:(id)a0 requestedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 request:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLForItemID:(id)a0 creatingPlaceholderIfMissing:(BOOL)a1 ignoreAlternateContentsURL:(BOOL)a2 forBookmarkResolution:(BOOL)a3 request:(id)a4 completionHandler:(id /* block */)a5;
- (void)bulkItemChanges:(id)a0 changedFields:(unsigned long long)a1 request:(id)a2 completionHandler:(id /* block */)a3;
- (void)clearDiagnosticState:(id /* block */)a0;
- (void)copyDatabaseToURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)createIndexerWithExtension:(id)a0 enabled:(BOOL)a1 error:(id *)a2;
- (void)createItemBasedOnTemplate:(id)a0 fields:(unsigned long long)a1 urlWrapper:(id)a2 options:(unsigned long long)a3 bounceOnCollision:(BOOL)a4 request:(id)a5 completionHandler:(id /* block */)a6;
- (id)createRootByImportingURL:(id)a0 knownFolders:(id)a1 error:(id *)a2;
- (void)didUpdateAlternateContentsDocumentForDocumentWithURL:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;
- (void)dumpStateTo:(id)a0 options:(unsigned long long)a1 request:(id)a2 completionHandler:(id /* block */)a3;
- (void)enumerateWithSettings:(id)a0 lifetimeExtender:(id)a1 observer:(id)a2 completionHandler:(id /* block */)a3;
- (id)evictItemAtURL:(id)a0 evictionReason:(unsigned int)a1 request:(id)a2 completionHandler:(id /* block */)a3;
- (void)evictItemWithID:(id)a0 evictionReason:(unsigned int)a1 request:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchFSItemsForItemIdentifiers:(id)a0 materializingIfNeeded:(BOOL)a1 request:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchOperationServiceOrEndpointWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchServicesForItemID:(id)a0 allowRestrictedSources:(BOOL)a1 request:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchTelemetryReportWithCompletionHandler:(id /* block */)a0;
- (void)fetchThumbnailsAtURL:(id)a0 versions:(id)a1 size:(struct CGSize { double x0; double x1; })a2 perThumbnailCompletionHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)fetchVendorEndpointWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)getSavedDiagnostics:(id /* block */)a0;
- (void)hasNonUploadedFilesWithCompletionHandler:(id /* block */)a0;
- (void)hierarchyForURL:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithDomain:(id)a0 materializationError:(id)a1;
- (BOOL)isAllowedToProvideItemID:(id)a0 toConsumerWithIdentifier:(id)a1;
- (BOOL)isDeadEndBackend;
- (BOOL)isProviderForRealPathURL:(id)a0;
- (void)itemChangedAtURL:(id)a0 request:(id)a1;
- (void)itemForItemID:(id)a0 creatingPlaceholderIfMissing:(BOOL)a1 ignoreAlternateContentsURL:(BOOL)a2 request:(id)a3 completionHandler:(id /* block */)a4;
- (void)itemForURL:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;
- (void)itemIDForURL:(id)a0 requireProviderItemID:(BOOL)a1 request:(id)a2 completionHandler:(id /* block */)a3;
- (void)launchFeedbackForDomain:(id)a0 itemIdentifier:(id)a1 triggeringError:(id)a2 when:(id)a3 useDiagnostic:(BOOL)a4 completionHandler:(id /* block */)a5;
- (void)listRemoteVersionsOfItemAtURL:(id)a0 includeCachedVersions:(BOOL)a1 request:(id)a2 completionHandler:(id /* block */)a3;
- (void)movingItemAtURL:(id)a0 withInfo:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)needsRootsCreation;
- (void)putBackURLForTrashedItemAtURL:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;
- (void)reindexAllItemsWithDropReason:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)reindexItemsWithIndexReason:(long long)a0 identifiers:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestDiagnosticCollectionForItemWithID:(id)a0 errorReason:(id)a1 completionHandler:(id /* block */)a2;
- (id)rootURLs;
- (id)rootURLsWithTransientState:(BOOL *)a0;
- (void)saveFPCKTelemetryReport:(id)a0;
- (void)signalNeedsReindexFromScratchWithDropReason:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (id)startProvidingItemAtURL:(id)a0 readerID:(id)a1 readingOptions:(unsigned long long)a2 request:(id)a3 completionHandler:(id /* block */)a4;
- (BOOL)startWithReason:(id)a0 userAllowedDBDrop:(BOOL)a1 error:(id *)a2;
- (void)stateWithCompletionHandler:(id /* block */)a0;
- (void)trashItemAtURL:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;
- (void)triggerFeedbackApprovalRequestForItemURL:(id)a0 domain:(id)a1 uiOnly:(BOOL)a2 completionHandler:(id /* block */)a3;
- (BOOL)updateRootAfterDomainChangeWithError:(id *)a0;
- (void)valuesForAttributes:(id)a0 forURL:(id)a1 request:(id)a2 completionHandler:(id /* block */)a3;
- (void)waitForStabilizationForRequest:(id)a0 mode:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)workingSetDidChangeWithCompletionHandler:(id /* block */)a0;

@end
