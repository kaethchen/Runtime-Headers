@class NSDictionary, NSArray, NSMapTable, CKDCancelTokenGroup, CKDAssetRequestPlanner, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface CKDUploadAssetsOperation : CKDDatabaseOperation {
    NSDictionary *_cloneContextsBySignature;
}

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSArray *assetsToUpload;
@property (retain, nonatomic) NSMapTable *uploadTasksByPackages;
@property (retain, nonatomic) NSMutableArray *openedPackages;
@property (retain, nonatomic) CKDCancelTokenGroup *cancelTokens;
@property (nonatomic) unsigned long long maxPackageUploadsPerBatch;
@property (readonly, nonatomic) CKDAssetRequestPlanner *assetRequestPlanner;
@property (retain, nonatomic) NSDictionary *assetUUIDToExpectedProperties;
@property (retain, nonatomic) NSDictionary *packageUUIDToExpectedProperties;
@property (nonatomic) BOOL temporary;
@property (copy, nonatomic) id /* block */ uploadPreparationBlock;
@property (copy, nonatomic) id /* block */ uploadProgressBlock;
@property (copy, nonatomic) id /* block */ uploadCompletionBlock;
@property (nonatomic) BOOL atomic;
@property (nonatomic) BOOL shouldCloneFileInAssetCache;

+ (long long)isPredominatelyDownload;
+ (id)nameForState:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (void)finishWithError:(id)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (int)operationType;
- (BOOL)_upload;
- (id)CKStatusReportLogGroups;
- (void)_closeAllPackages;
- (void)_closePackage:(id)a0;
- (void)_collectMetricsFromCompletedItemGroup:(id)a0;
- (void)_collectMetricsFromCompletedItemGroupSet:(id)a0;
- (void)_collectMetricsFromMMCSOperationMetrics:(id)a0;
- (BOOL)_didFetchUploadTokensForAssetTokenRequest:(id)a0 error:(id)a1 newError:(id *)a2;
- (void)_didMakeProgressForAsset:(id)a0 progress:(double)a1;
- (void)_didMakeProgressForMMCSItem:(id)a0;
- (void)_didMakeProgressForMMCSSectionItem:(id)a0 task:(id)a1;
- (void)_didPrepareAsset:(id)a0;
- (void)_didPrepareAssetBatch:(id)a0 error:(id)a1;
- (void)_didUploadAsset:(id)a0 error:(id)a1;
- (void)_didUploadMMCSItem:(id)a0 error:(id)a1;
- (void)_didUploadMMCSItems:(id)a0 error:(id)a1;
- (void)_didUploadMMCSSectionItem:(id)a0 task:(id)a1 error:(id)a2;
- (void)_didUploadMMCSSectionItems:(id)a0 task:(id)a1 error:(id)a2;
- (void)_didUploadPackageWithTask:(id)a0;
- (void)_failAllItemsInAssetBatch:(id)a0 error:(id)a1;
- (BOOL)_fetchConfiguration;
- (BOOL)_fetchUploadTokens;
- (id)_openPackage:(id)a0;
- (BOOL)_planPackageSectionItemsForMMCSItems:(id)a0;
- (BOOL)_planSectionsForPackage:(id)a0 error:(id *)a1;
- (id)_prepareAssetForUpload:(id)a0;
- (BOOL)_prepareForUpload;
- (id)_preparePackageForUpload:(id)a0;
- (id)_prepareReferenceAssetForUpload:(id)a0;
- (id)_prepareReferencePackageForUpload:(id)a0;
- (void)_registerMMCSItems;
- (void)_removePackageManifests;
- (void)_uploadPackageSection:(id)a0 task:(id)a1 completionBlock:(id /* block */)a2;
- (void)_uploadPackageSectionsWithEnumerator:(id)a0 task:(id)a1 completionBlock:(id /* block */)a2;
- (void)_uploadPackageSectionsWithPendingTasks:(id)a0 uploadingTasks:(id)a1 completedTasks:(id)a2;
- (void)_uploadPackageSectionsWithTask:(id)a0 completionBlock:(id /* block */)a1;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (BOOL)makeStateTransition;
- (BOOL)supportsClearAssetEncryption;

@end
