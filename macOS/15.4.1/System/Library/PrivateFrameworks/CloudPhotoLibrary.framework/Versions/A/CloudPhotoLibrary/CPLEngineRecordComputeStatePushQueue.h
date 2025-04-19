@class NSString, CPLPlatformObject, NSURL, NSDate, NSMutableArray, CPLEngineFileStorage;

@interface CPLEngineRecordComputeStatePushQueue : CPLEngineStorage <CPLAbstractObject> {
    NSMutableArray *_filesToCommit;
    NSMutableArray *_filesToDelete;
    NSDate *_incomingDownloadFolderCreationDate;
    NSURL *_outgoingUploadFolderURL;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lastComputeStateDownloadRequestDateLock;
    NSDate *_lastComputeStateDownloadRequestDate;
    unsigned long long _tempFolderIndex;
}

@property (readonly, nonatomic) CPLEngineFileStorage *fileStorage;
@property (readonly, nonatomic) NSURL *incomingDownloadFolderURL;
@property (copy) NSDate *throttlingDate;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)status;
- (BOOL)openWithError:(id *)a0;
- (unsigned long long)scopeType;
- (id)statusDictionary;
- (void)noteComputeStateDownloadRequest;
- (BOOL)addComputeState:(id)a0 error:(id *)a1;
- (id)computeStatesToUploadWithScopeIdentifier:(id)a0 localState:(unsigned long long)a1 maximumCount:(unsigned long long)a2;
- (unsigned long long)countOfComputeStates;
- (BOOL)createIncomingDownloadFolderIfNecessaryWithError:(id *)a0;
- (id)createNewTempDownloadFolderWithError:(id *)a0;
- (id)createTempUploadFolderWithError:(id *)a0;
- (BOOL)deleteIncomingDownloadFolderWithError:(id *)a0;
- (BOOL)deleteRecordsForScopeIndex:(long long)a0 maxCount:(long long)a1 deletedCount:(long long *)a2 error:(id *)a3;
- (BOOL)deleteTempUploadFolderWithError:(id *)a0;
- (unsigned long long)fileSizeForComputeStatePayloadFileURL:(id)a0 error:(id *)a1;
- (BOOL)hasChangesInScopeWithIdentifier:(id)a0;
- (id)initWithEngineStore:(id)a0 name:(id)a1;
- (BOOL)performMaintenanceWithError:(id *)a0;
- (BOOL)releaseFileURL:(id)a0 forComputeState:(id)a1 error:(id *)a2;
- (BOOL)removeComputeState:(id)a0 error:(id *)a1;
- (BOOL)removeComputeStateWithLocalScopedIdentifier:(id)a0 version:(id)a1 adjustmentFingerprint:(id)a2 error:(id *)a3;
- (id)retainFileURLForComputeState:(id)a0 error:(id *)a1;
- (BOOL)updateFileURLForComputeState:(id)a0 error:(id *)a1;
- (BOOL)updateLocalStateForComputeState:(id)a0 newLocalState:(unsigned long long)a1 error:(id *)a2;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;

@end
