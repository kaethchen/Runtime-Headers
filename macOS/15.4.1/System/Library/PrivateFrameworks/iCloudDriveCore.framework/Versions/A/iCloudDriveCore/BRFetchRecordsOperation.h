@class NSMutableSet;

@interface BRFetchRecordsOperation : CKFetchRecordsOperation {
    id /* block */ _fetchRecordsCompletionBlock;
    id /* block */ _perRecordCompletionBlock;
    NSMutableSet *_completedRecords;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setFetchRecordsCompletionBlock:(id /* block */)a0;
- (void)setPerRecordCompletionBlock:(id /* block */)a0;

@end
