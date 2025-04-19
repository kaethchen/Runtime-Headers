@class NSArray, NSMutableDictionary, CKPublishAssetsOperationInfo, NSDictionary, NSString;
@protocol CKPublishAssetsOperationCallbacks;

@interface CKPublishAssetsOperation : CKDatabaseOperation <CKPublishAssetsOperationCallbacks>

@property (retain, nonatomic) NSArray *recordIDs;
@property (retain, nonatomic) NSMutableDictionary *perItemErrorsByRecordID;
@property (readonly, nonatomic) id<CKPublishAssetsOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKPublishAssetsOperationInfo *operationInfo;
@property (copy, nonatomic) NSDictionary *fileNamesByAssetFieldNames;
@property (nonatomic) unsigned long long requestedTTL;
@property (nonatomic) unsigned long long URLOptions;
@property (copy, nonatomic) id /* block */ assetPublishedBlock;
@property (copy, nonatomic) id /* block */ publishAssetCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;
+ (SEL)daemonInvocationSelector;

- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)ckSignpostBegin;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (void)ckSignpostEndWithError:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (void)fillOutOperationInfo:(id)a0;
- (void)handleAssetPublishCompletionForRecordID:(id)a0 publishedAsset:(id)a1 recordKey:(id)a2 error:(id)a3;
- (BOOL)hasCKOperationCallbacksSet;
- (id)initWithRecordIDs:(id)a0;

@end
