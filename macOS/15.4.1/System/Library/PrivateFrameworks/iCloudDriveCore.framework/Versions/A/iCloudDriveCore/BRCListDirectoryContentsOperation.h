@class BRCItemID, CKRecordID, NSHashTable, CKQueryOperation, BRCServerZone, NSMutableArray;

@interface BRCListDirectoryContentsOperation : BRCAutoCancelOperation {
    BRCServerZone *_serverZone;
    CKRecordID *_recordID;
    unsigned int _batchSize;
    unsigned long long _recordsFetched;
    unsigned long long _recordsFetchedTotalMetadataSize;
    unsigned long long _xattrsFetchedTotalSize;
    NSMutableArray *_listCompletionBlocks;
    NSMutableArray *_preFlushListCompletionBlocks;
    NSHashTable *_delegates;
    BOOL _hasNilDelegate;
    CKQueryOperation *_queryOp;
    id /* block */ _rescheduleApplyBlock;
}

@property (readonly, nonatomic) BRCItemID *folderToList;
@property (nonatomic) BOOL rescheduleApply;

- (void).cxx_destruct;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (BOOL)shouldRetryForError:(id)a0;
- (void)_cursorWasUpdated:(id)a0 subResourcesOp:(id)a1;
- (void)_scheduleQueryOp;
- (void)_waitForFlushAndRescheduleApplyIfNecessaryWithError:(id)a0;
- (void)addDirectoryListCompletionBlock:(id /* block */)a0;
- (void)addPreFlushDirectoryListCompletionBlock:(id /* block */)a0;
- (void)beginObservingChangesWithDelegate:(id)a0;
- (void)cancelToBeReplacedByOperation:(id)a0;
- (void)endObservingChangesWithDelegate:(id)a0;
- (id)initWithItemID:(id)a0 sessionContext:(id)a1 zone:(id)a2 isUserWaiting:(BOOL)a3 rescheduleApplyBlock:(id /* block */)a4;

@end
