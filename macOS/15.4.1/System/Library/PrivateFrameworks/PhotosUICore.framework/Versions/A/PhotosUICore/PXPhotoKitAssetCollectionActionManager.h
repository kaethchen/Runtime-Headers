@class NSString, PXPhotosEnvironmentReference, PXAssetsDataSource, PXAssetCollectionActionPerformer, NSDictionary, PXAssetReference, PHAssetCollection, PHFetchResult;
@protocol PXMemoryAssetsActionFactory, PXAssetCollectionActionPerformerDelegate;

@interface PXPhotoKitAssetCollectionActionManager : PXAssetCollectionActionManager <PXPhotoKitAssetCollectionActionPerformerInput>

@property (readonly, nonatomic) NSDictionary *performerClassByType;
@property (retain, nonatomic, setter=_setActivePerformer:) PXAssetCollectionActionPerformer *_activePerformer;
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

+ (id)actionManagerWithDataSourceManager:(id)a0;

- (void).cxx_destruct;
- (BOOL)supportsActionType:(id)a0;
- (id)contextMenuElementsWithHandler:(id /* block */)a0;
- (Class)_possiblePerformerClassForActionType:(id)a0 assetCollectionReference:(id)a1;
- (Class)_possiblePerformerClassForActionType:(id)a0 assetCollectionReference:(id)a1 requireThatPerformerCanPerformAction:(BOOL)a2;
- (id)actionPerformerForActionType:(id)a0 assetCollectionReference:(id)a1;
- (id)actionPerformerForActionType:(id)a0 parameters:(id)a1;
- (BOOL)canPerformActionType:(id)a0 assetCollectionReference:(id)a1;
- (id)initWithAssetCollectionReference:(id)a0 displayTitleInfo:(id)a1;
- (BOOL)isDestructiveActionType:(id)a0;
- (id)localizedTitleForActionType:(id)a0 useCase:(unsigned long long)a1 assetCollectionReference:(id)a2;
- (id)systemImageNameForActionType:(id)a0 assetCollectionReference:(id)a1;

@end
