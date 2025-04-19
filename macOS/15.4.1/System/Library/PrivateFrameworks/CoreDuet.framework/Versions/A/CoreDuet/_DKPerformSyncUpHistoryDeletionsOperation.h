@class _DKSyncPeer, _DKSyncType, NSArray, _DKSyncHistory, NSDate, _DKSync2Policy, _DKPerformSyncUpHistoryAdditionsOperation;
@protocol _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;

@interface _DKPerformSyncUpHistoryDeletionsOperation : _DKSyncCompositeOperation {
    _DKPerformSyncUpHistoryAdditionsOperation *_sibling;
    id<_DKSyncLocalKnowledgeStorage> _localStorage;
    id<_DKSyncRemoteKnowledgeStorage> _transport;
    _DKSyncPeer *_me;
    _DKSync2Policy *_policy;
    _DKSyncType *_type;
    NSArray *_streamNames;
    NSDate *_now;
    _DKSyncHistory *_history;
    unsigned long long _batchNumber;
}

- (void).cxx_destruct;
- (BOOL)isAsynchronous;
- (void)main;
- (void)endOperation;

@end
