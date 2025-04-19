@class NSMutableDictionary, NSArray, NSMapTable, CKDCancelTokenGroup, CKDMMCS, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CKDDownloadAssetsOperation : CKDDatabaseOperation {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _prepareLock;
    NSMutableArray *_prepareMMCSItemsToDownload;
    NSMutableArray *_prepareMMCSItemsToDownloadInMemory;
}

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSArray *assetsToDownload;
@property (retain, nonatomic) NSArray *assetsToDownloadInMemory;
@property (retain, nonatomic) NSArray *assetURLInfosToFillOut;
@property (retain, nonatomic) NSArray *MMCSItemsToDownload;
@property (retain, nonatomic) NSArray *MMCSItemsToDownloadInMemory;
@property (retain, nonatomic) NSMutableArray *assetsToDownloadFromTranscoder;
@property (retain, nonatomic) NSMutableArray *assetsToDownloadFromTranscoderInMemory;
@property (retain, nonatomic) NSMapTable *downloadTasksByPackages;
@property (retain, nonatomic) CKDCancelTokenGroup *cancelTokens;
@property (nonatomic) unsigned long long maxPackageDownloadsPerBatch;
@property (retain, nonatomic) CKDMMCS *mmcs;
@property (nonatomic) BOOL shouldCloneFileInAssetCache;
@property (copy, nonatomic) id /* block */ downloadPreparationBlock;
@property (copy, nonatomic) id /* block */ downloadProgressBlock;
@property (copy, nonatomic) id /* block */ downloadCommandBlock;
@property (copy, nonatomic) id /* block */ downloadCompletionBlock;
@property (copy, nonatomic) id /* block */ urlFilledOutBlock;
@property (retain, nonatomic) NSMutableDictionary *keyOrErrorForHostname;

+ (id)nameForState:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (void)_preparePackageForDataDownload:(id)a0;
- (id)CKStatusReportLogGroups;
- (void)_didCommandForMMCSItem:(id)a0 command:(id)a1;
- (void)_collectMetricsFromCompletedItemGroup:(id)a0;
- (void)_collectMetricsFromCompletedItemGroupSet:(id)a0;
- (void)_collectMetricsFromMMCSOperationMetrics:(id)a0;
- (void)_didCommandForAsset:(id)a0 command:(id)a1;
- (void)_didDownloadAsset:(id)a0 error:(id)a1;
- (void)_didDownloadMMCSItem:(id)a0 inMemory:(BOOL)a1 error:(id)a2;
- (void)_didDownloadMMCSItems:(id)a0 inMemory:(BOOL)a1 error:(id)a2;
- (void)_didDownloadMMCSSectionItem:(id)a0 task:(id)a1 error:(id)a2;
- (void)_didDownloadMMCSSectionItems:(id)a0 task:(id)a1 error:(id)a2;
- (void)_didMakeProgressForAsset:(id)a0 progress:(double)a1;
- (void)_didMakeProgressForMMCSItem:(id)a0 inMemory:(BOOL)a1;
- (void)_didMakeProgressForMMCSSectionItem:(id)a0 task:(id)a1;
- (void)_didPrepareAsset:(id)a0;
- (BOOL)_download;
- (void)_downloadMMCSItems:(id)a0 downloadTasksByPackages:(id)a1 shouldFetchAssetContentInMemory:(BOOL)a2;
- (void)_downloadPackageSectionAtIndex:(long long)a0 task:(id)a1 completionBlock:(id /* block */)a2;
- (void)_downloadPackageSectionsWithPendingTasks:(id)a0 downloadingTasks:(id)a1 completedTasks:(id)a2;
- (void)_downloadPackageSectionsWithSectionEnumerator:(id)a0 task:(id)a1 completionBlock:(id /* block */)a2;
- (void)_downloadPackageSectionsWithTask:(id)a0 completionBlock:(id /* block */)a1;
- (void)_downloadTranscodedAsset:(id)a0 inMemory:(BOOL)a1;
- (BOOL)_postProcess;
- (void)_prepareAssetForDownload:(id)a0;
- (BOOL)_prepareForDownload;
- (void)_preparePackageForDownload:(id)a0;
- (void)_preparePackageForMetadataDownload:(id)a0;
- (void)_removeUntrackedMMCSItems:(id)a0;
- (id)_tryToFillInTheDerivativeTemplateWithAsset:(id)a0;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (BOOL)makeStateTransition;
- (BOOL)shouldDownloadAssetFromTranscoder:(id)a0;
- (BOOL)supportsClearAssetEncryption;

@end
