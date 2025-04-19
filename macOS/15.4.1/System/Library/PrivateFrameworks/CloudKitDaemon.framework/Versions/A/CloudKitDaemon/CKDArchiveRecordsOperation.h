@class NSArray;
@protocol CKArchiveRecordsOperationCallbacks, CKDOperationCallbackProxy;

@interface CKDArchiveRecordsOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSArray *recordIDs;
@property (retain, nonatomic) id<CKArchiveRecordsOperationCallbacks, CKDOperationCallbackProxy> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ recordArchivedBlock;

- (void).cxx_destruct;
- (void)main;
- (id)relevantZoneIDs;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (int)operationType;
- (void)_handleRecordArchived:(id)a0 responseCode:(id)a1;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;

@end
