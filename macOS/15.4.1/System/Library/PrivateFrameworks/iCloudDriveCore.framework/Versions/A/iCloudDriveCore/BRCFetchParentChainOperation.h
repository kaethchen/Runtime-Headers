@class BRCItemID, NSString, CKRecordID, BRCServerZone, NSMutableArray;
@protocol BRCSessionContext;

@interface BRCFetchParentChainOperation : _BRCOperation <BRCOperationSubclass> {
    unsigned long long _recordsFetched;
    unsigned long long _recordsFetchedTotalMetadataSize;
    unsigned long long _xattrsFetchedTotalSize;
    CKRecordID *_parentRecordID;
    BRCServerZone *_serverZone;
    BRCItemID *_parentID;
    id<BRCSessionContext> _sessionContext;
    NSMutableArray *_fetchParentChainCompletionBlocks;
}

@property (readonly, nonatomic) BRCItemID *parentIDToList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (BOOL)shouldRetryForError:(id)a0;
- (id)createActivity;
- (void)_fetchParentChain:(id)a0;
- (void)addFetchParentChainCompletionBlock:(id /* block */)a0;
- (void)cancelToBeReplacedByOperation:(id)a0;
- (id)initWithParentID:(id)a0 sessionContext:(id)a1 zone:(id)a2 isUserWaiting:(BOOL)a3;

@end
