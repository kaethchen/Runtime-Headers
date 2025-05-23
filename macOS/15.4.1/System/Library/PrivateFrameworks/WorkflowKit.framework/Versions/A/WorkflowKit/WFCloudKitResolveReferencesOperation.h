@class NSArray, WFCloudKitItemRequest, WFCloudKitItemTask, CKOperationGroup, CKFetchRecordsOperation;

@interface WFCloudKitResolveReferencesOperation : WFCloudKitAsyncOperation

@property (readonly, weak, nonatomic) WFCloudKitItemRequest *request;
@property (readonly, nonatomic) NSArray *records;
@property (readonly, nonatomic) CKOperationGroup *operationGroup;
@property (retain, nonatomic) CKFetchRecordsOperation *currentOperation;
@property (retain, nonatomic) WFCloudKitItemTask *task;

- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (id)initWithRequest:(id)a0 records:(id)a1 operationGroup:(id)a2 task:(id)a3;

@end
