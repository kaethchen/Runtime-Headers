@class _CFPasteboardCache, _CFPasteboardClientInstanceID, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _CFPasteboardStore : NSObject {
    struct __CFString { } *_name;
    NSObject<OS_dispatch_queue> *_queue;
    _CFPasteboardCache *_cache;
    NSObject<OS_dispatch_queue> *_patternDetectionQueue;
    unsigned char _restrictSandboxExtension;
    int _allowedSandboxExtensionPID;
    struct { unsigned int val[8]; } _allowedSandboxExtensionAuditToken;
    _CFPasteboardClientInstanceID *_owner;
    unsigned char _ownerHasPendingChanges;
    _CFPasteboardClientInstanceID *_destinationProcessID;
    struct __CFDictionary { } *_clientInstancesByUUID;
    struct __CFSet { } *_clientInstancesWithCacheInfoForCurrentGeneration;
    NSObject<OS_dispatch_source> *_expirationTimer;
    double _detectionLastDialogRequestTime;
    long long _detectionLastDialogGeneration;
    unsigned char _detectionLastDialogResponse;
}

+ (void)_removePasteboardWithName:(struct __CFString { } *)a0;
+ (struct __CFArray { } *)copyAllPasteboards;
+ (struct __CFString { } *)dumpAllClients;
+ (id)pasteboardStoreWithName:(struct __CFString { } *)a0 createIfNecessary:(BOOL)a1;

- (void)dealloc;
- (id)description;
- (void)performBarrier:(id /* block */)a0;
- (void)_handleDetectionOfType:(long long)a0 withMessage:(id)a1;
- (id)_initWithName:(struct __CFString { } *)a0;
- (void)_onqueue_beginGenerationWithNewOwner:(struct __CFUUID { } *)a0;
- (id)_onqueue_cacheForGeneration:(long long)a0;
- (void)_onqueue_clearGenerationSpecificData;
- (void)_onqueue_handleExpirationTimer;
- (void)_onqueue_handleNewRegularEntries:(struct __CFArray { } *)a0 forMessage:(id)a1 withSourceAuditToken:(struct { unsigned int x0[8]; })a2 shouldInvalidateClientMetadata:(BOOL *)a3;
- (void)_onqueue_handleNewSecurityScopeEntries:(struct __CFArray { } *)a0 forMessage:(id)a1 withSourceAuditToken:(struct { unsigned int x0[8]; })a2 shouldInvalidateClientMetadata:(BOOL *)a3;
- (void)_onqueue_invalidateCachesWithCurrentGeneration;
- (void)_onqueue_invalidateCurrentGenerationCacheEntries:(struct __CFArray { } *)a0 inResponseToMessage:(id)a1;
- (BOOL)_onqueue_isManagedPromiseDragWithCache:(id)a0 forGeneration:(unsigned long long)a1 itemIdentifier:(unsigned long long)a2;
- (unsigned char)_onqueue_isPasteLocationRelatedEntryAllowedForMessage:(id)a0;
- (long long)_onqueue_nextGenerationCount;
- (void)_onqueue_noteMessageSenderNeedsCacheInvalidation:(id)a0;
- (void)_onqueue_postflightNewEntries:(struct __CFArray { } *)a0 forMessage:(id)a1 withPreflightData:(const struct __CFArray { } *)a2;
- (const struct __CFArray { } *)_onqueue_preflightNewEntries:(struct __CFArray { } *)a0 forMessage:(id)a1;
- (void)flushOwnerChangesIfNecessaryInResponseToMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)getUserApproval:(id)a0 inApp:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)handleAllowExtensionProcess:(id)a0;
- (void)handleBeginGeneration:(id)a0;
- (void)handleCreate:(id)a0;
- (void)handleDeadClientWithUUID:(struct __CFUUID { } *)a0 allowPasteboardDeletion:(BOOL)a1;
- (void)handleDetectMetadata:(id)a0;
- (void)handleDetectPatterns:(id)a0;
- (void)handleDetectValues:(id)a0;
- (void)handleGetCounts:(id)a0;
- (void)handleMakeGenerationLocal:(id)a0;
- (void)handleNotifyHasEntries:(id)a0;
- (void)handleRefreshCache:(id)a0;
- (void)handleRegisterEntries:(id)a0;
- (void)handleRelease:(id)a0;
- (void)handleRequestData:(id)a0;
- (void)handleResolvePromises:(id)a0;
- (void)handleRestrictExtension:(id)a0;
- (void)handleSetDataFlags:(id)a0;
- (void)handleSetExpirationDate:(id)a0;
- (void)handleUniquePromiseFile:(id)a0;
- (void)handleVerificationTokenCreate:(id)a0;
- (int)onqueue_analyzeSandboxExtensionEntry:(id)a0 destinedForClient:(id)a1;
- (id)onqueue_filterDataFromEntry:(id)a0 inResponseToMessage:(id)a1 error:(int *)a2;
- (void)onqueue_handleDeadClient:(id)a0 withUUID:(struct __CFUUID { } *)a1;
- (id)onqueue_reissueSandboxExtensionFromEntry:(id)a0 toClient:(id)a1 error:(int *)a2;
- (void)requestDataForGeneration:(unsigned long long)a0 itemIdentifier:(unsigned long long)a1 flavor:(struct __CFString { } *)a2 inResponseToMessage:(id)a3 completionHandler:(id /* block */)a4;
- (void)resolveAllPromisesOwnedByProcessWithIdentifier:(int)a0 completionHandler:(id /* block */)a1;

@end
