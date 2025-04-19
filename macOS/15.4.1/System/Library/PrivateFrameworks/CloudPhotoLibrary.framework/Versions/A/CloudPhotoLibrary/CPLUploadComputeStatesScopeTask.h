@class CPLUploadComputeStatesAccumulator, CPLEngineScope, NSProgress, CPLTransportScopeMapping, CPLRecordTargetMapping, NSObject, NSDictionary;
@protocol CPLEngineTransportGroup, OS_dispatch_queue, CPLEngineTransportUploadComputeStatesTask;

@interface CPLUploadComputeStatesScopeTask : CPLEngineScopedTask {
    CPLRecordTargetMapping *_targetMapping;
    CPLTransportScopeMapping *_transportScopeMapping;
    id<CPLEngineTransportUploadComputeStatesTask> _uploadComputeStatesTask;
    id<CPLEngineTransportGroup> _transportGroup;
    NSProgress *_requestMissingPayloadsProgress;
    NSObject<OS_dispatch_queue> *_queue;
    CPLUploadComputeStatesAccumulator *_computeStatesAccumulator;
    NSDictionary *_knownRecords;
    CPLEngineScope *_sharedScope;
    BOOL _didUploadSomeComputeStates;
    long long _taskItem;
    unsigned long long _countOfComputeStatesPutAside;
    unsigned long long _countOfDroppedComputeStates;
    unsigned long long _countOfRequestedComputeStates;
    unsigned long long _countOfProvidedComputeStates;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)launch;
- (id)taskIdentifier;
- (BOOL)checkScopeIsValidInTransaction:(id)a0;
- (void)_deleteTempFolderForPayloads;
- (void)_discardExtractedBatchAndGetNextBatch;
- (void)_dropAllComputeStates;
- (void)_dropLocalComputeStates:(id)a0;
- (void)_getNextBatchAndUpload;
- (void)_requestMissingPayloads;
- (void)_updateComputeSyncUploadMetricsWithError:(id)a0;
- (void)_uploadComputeStatesTaskDidFinishWithError:(id)a0;
- (void)_uploadExtractedBatch;
- (id)initWithEngineLibrary:(id)a0 session:(id)a1 clientCacheIdentifier:(id)a2 scope:(id)a3 transportScope:(id)a4;
- (void)taskDidFinishWithError:(id)a0;

@end
