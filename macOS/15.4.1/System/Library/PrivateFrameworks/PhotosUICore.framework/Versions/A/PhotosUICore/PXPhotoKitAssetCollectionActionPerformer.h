@class PXPhotosEnvironmentReference, PHFetchResult, PXAssetReference, NSString, PXAssetsDataSource, PHAssetCollection;
@protocol PXMemoryAssetsActionFactory, PXAssetCollectionActionPerformerDelegate;

@interface PXPhotoKitAssetCollectionActionPerformer : PXAssetCollectionActionPerformer <PXPhotoKitAssetCollectionActionPerformerInput>

@property (readonly, nonatomic) PXAssetReference *dropTargetAssetReference;
@property (readonly, nonatomic) PXAssetsDataSource *assetsDataSource;
@property (readonly, nonatomic) PHFetchResult *assetsFetchResult;
@property (readonly, nonatomic) PHAssetCollection *containingAlbum;
@property (readonly, nonatomic) id<PXMemoryAssetsActionFactory> memoryAssetsActionFactory;
@property (readonly, nonatomic) id<PXAssetCollectionActionPerformerDelegate> performerDelegate;
@property (readonly, nonatomic) PXPhotosEnvironmentReference *photosEnvironmentReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canPerformActionType:(id)a0 onAssetCollectionReference:(id)a1 withInputs:(id)a2;
+ (BOOL)canPerformOnAssetCollectionReference:(id)a0 withInputs:(id)a1;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 assetCollectionReference:(id)a1 withInputs:(id)a2;
+ (id)makeCustomMenuElementForUseCase:(unsigned long long)a0 assetCollectionReference:(id)a1 withInput:(id)a2 handler:(id /* block */)a3;
+ (id)systemImageNameForAssetCollectionReference:(id)a0 withInputs:(id)a1;

- (id)_confirmationAlertTitleForBlacklistingAction:(id)a0 viewSpec:(id)a1;
- (void)_promptBlacklistingConfirmatonForUserAction:(id)a0 viewSpec:(id)a1 completionHandler:(id /* block */)a2;
- (id)localizedTitleForUseCase:(unsigned long long)a0;

@end
