@class PXContentSyndicationPhotoKitAssetArrivalObserver, PHFetchResult;

@interface PXPhotoKitAssetCollectionContentSyndicationSaveToLibraryActionPerformer : PXPhotoKitAssetCollectionActionPerformer {
    PHFetchResult *_unsavedSyndicatedAssetsFetchResult;
    PXContentSyndicationPhotoKitAssetArrivalObserver *_assetArrivalObserver;
}

@property (readonly, nonatomic) PHFetchResult *savedAssetsFetchResult;

+ (BOOL)canPerformOnAssetCollectionReference:(id)a0 withInputs:(id)a1;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 assetCollectionReference:(id)a1 withInputs:(id)a2;
+ (id)systemImageNameForAssetCollectionReference:(id)a0 withInputs:(id)a1;

- (void).cxx_destruct;
- (void)performUserInteractionTask;
- (void)_handleCompletionForExpectedUUIDs:(id)a0 photoLibrary:(id)a1 success:(BOOL)a2 error:(id)a3;
- (void)performBackgroundTask;

@end
