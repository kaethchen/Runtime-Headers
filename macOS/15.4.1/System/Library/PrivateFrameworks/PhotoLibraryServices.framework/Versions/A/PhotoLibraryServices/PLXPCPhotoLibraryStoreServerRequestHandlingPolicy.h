@class NSString, NSDictionary, PLLimitedLibraryFetchFilter, PLAssetsdConnectionAuthorization, NSNumber;

@interface PLXPCPhotoLibraryStoreServerRequestHandlingPolicy : NSXPCStoreServerRequestHandlingPolicy {
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _fetchFilterLock;
    NSString *_fetchFilterLock_fetchFilterClientIdentifier;
    NSDictionary *_fetchFilterLock_fetchFilterEntityNameToPredicateMap;
    NSNumber *_fetchFilterLock_fetchFilterEnabledStatus;
    PLLimitedLibraryFetchFilter *_fetchFilterLock_fetchFilter;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _crashLogMessageLock;
    char _crashLogMessageLock_crashLogMessage[2048];
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _restrictedAccessLock;
    NSNumber *_restrictedAccessLock_lockedContentAccessAllowed;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)allowableClassesForClientWithContext:(id)a0;
- (id)processFaultForObjectWithID:(id)a0 fromClientWithContext:(id)a1 error:(id *)a2;
- (id)processFaultForRelationshipWithName:(id)a0 onObjectWithID:(id)a1 fromClientWithContext:(id)a2 error:(id *)a3;
- (id)processRequest:(id)a0 fromClientWithContext:(id)a1 error:(id *)a2;
- (id)restrictingPullChangeHistoryPredicateForEntity:(id)a0 fromClientWithContext:(id)a1;
- (id)restrictingReadPredicateForEntity:(id)a0 fromClientWithContext:(id)a1;
- (id)restrictingWritePredicateForEntity:(id)a0 fromClientWithContext:(id)a1;
- (BOOL)shouldAcceptConnectionsFromClientWithContext:(id)a0;
- (BOOL)shouldAcceptMetadataChangesFromClientWithContext:(id)a0;
- (id)_assetFilterPredicateWithClientContext:(id)a0;
- (id)_captureSessionPredicateForEntityName:(id)a0;
- (id)_entityNamesAllowedByRestrictedDataEntitlements:(id)a0;
- (id)_filterPredicateForEntityName:(id)a0 withClientContext:(id)a1;
- (id)_internalResourceFilterPredicate;
- (id)_limitedLibraryFilterPredicateForEntityName:(id)a0 withClientContext:(id)a1;
- (id)_lockedCaptureSessionPredicateForEntityName:(id)a0 sessionIdentifier:(id)a1;
- (id)_predicateForEntityName:(id)a0 captureSessionState:(id)a1;
- (id)_restrictedEntityNamesAllowedForContext:(id)a0;
- (BOOL)_restrictedLockedContentAccessAllowedForContext:(id)a0;
- (void)clearCrashLogMessage;
- (id)initWithConnectionAuthorization:(id)a0;
- (void)limitedLibraryFetchFiltersUpdated:(id)a0;
- (void)setCrashLogMessageForRequest:(id)a0 context:(id)a1;

@end
