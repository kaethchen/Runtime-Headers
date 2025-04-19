@class NSString, BRCAppLibrary, BRCListDirectoryContentsOperation, BRCServerItem;
@protocol BRCSyncUpCallbackProtocol;

@interface BRCPCSChainingOperation : _BRCOperation <BRCListOperationDelegate, BRCOperationSubclass> {
    BRCAppLibrary *_appLibrary;
    BRCServerItem *_rootItem;
    BOOL _completed;
    unsigned long long _batchSize;
    int _tryCount;
    BOOL _syncDownBeforeRetry;
    unsigned long long _chainedRecordsCount;
    BRCListDirectoryContentsOperation *_listOperation;
    id<BRCSyncUpCallbackProtocol> _syncUpCallback;
}

@property (copy, nonatomic) id /* block */ pcsChainCompletionBlock;
@property (nonatomic) BOOL shouldFillBatch;
@property (nonatomic) BOOL canSyncDownBeforeRetry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (BOOL)shouldRetryForError:(id)a0;
- (id)createActivity;
- (void)_buildRecordListWithCompletion:(id /* block */)a0;
- (void)_chainRecords;
- (void)_sendRecordBatch:(id)a0 completion:(id /* block */)a1;
- (void)_sendRecordBatch:(id)a0 recursed:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithRootItem:(id)a0 appLibrary:(id)a1 sessionContext:(id)a2 syncUpCallback:(id)a3;
- (void)listOperation:(id)a0 wasReplacedByOperation:(id)a1;

@end
