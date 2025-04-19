@class NSArray, NSMutableArray;
@protocol CKDOperationCallbackProxy, CKUploadMergeableDeltasOperationCallbacks;

@interface CKDUploadMergeableDeltasOperation : CKDDatabaseOperation

@property (copy, nonatomic) NSArray *deltas;
@property (copy, nonatomic) NSArray *replacementRequests;
@property (retain, nonatomic) NSMutableArray *pendingReplacementRequests;
@property (retain, nonatomic) NSMutableArray *pendingDeltaUploads;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) id<CKUploadMergeableDeltasOperationCallbacks, CKDOperationCallbackProxy> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ uploadDeltaCompletionBlock;
@property (copy, nonatomic) id /* block */ replaceDeltasRequestCompletionBlock;

+ (id)nameForState:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)main;
- (id)activityCreate;
- (int)operationType;
- (void)_encryptMergeableDeltas;
- (void)_uploadAndReplaceDeltas;
- (void)_uploadAndReplaceDeltas:(id /* block */)a0;
- (void)handleDeltaUploaded:(id)a0 result:(id)a1;
- (void)handleReplaceDeltasRequest:(id)a0 result:(id)a1;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (BOOL)makeStateTransition;
- (BOOL)supportsClearAssetEncryption;

@end
