@protocol CKFetchUserQuotaOperationCallbacks, CKDOperationCallbackProxy;

@interface CKDFetchUserQuotaOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long quotaAvailable;
@property (retain, nonatomic) id<CKFetchUserQuotaOperationCallbacks, CKDOperationCallbackProxy> clientOperationCallbackProxy;

- (void)main;
- (id)activityCreate;
- (int)operationType;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;

@end
