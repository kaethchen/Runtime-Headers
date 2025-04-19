@class NSArray;
@protocol CKDOperationCallbackProxy, CKReplaceMergeableDeltasOperationCallbacks;

@interface CKDReplaceMergeableDeltasOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSArray *replaceDeltasRequests;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) id<CKReplaceMergeableDeltasOperationCallbacks, CKDOperationCallbackProxy> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ perReplacementCompletionBlock;

+ (id)nameForState:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)main;
- (id)activityCreate;
- (int)operationType;
- (void)_encryptMergeableDeltas;
- (void)_replaceMergeableDeltas;
- (void)handleReplaceDeltasRequest:(id)a0 result:(id)a1;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (BOOL)makeStateTransition;
- (BOOL)supportsClearAssetEncryption;

@end
