@class NSArray;
@protocol CKDOperationCallbackProxy, CKFetchRegisteredBundleIDsOperationCallbacks;

@interface CKDFetchRegisteredBundleIDsOperation : CKDOperation

@property (copy, nonatomic) NSArray *bundleIDs;
@property (retain, nonatomic) id<CKFetchRegisteredBundleIDsOperationCallbacks, CKDOperationCallbackProxy> clientOperationCallbackProxy;

- (void).cxx_destruct;
- (void)main;
- (id)activityCreate;
- (int)operationType;
- (id)_unitTestBundleIDsByContainerID:(id)a0;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;

@end
