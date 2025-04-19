@class PXAssetCollectionReference, PXPhotosEnvironmentReference, PXAssetsDataSourceManager, PXDisplayTitleInfo, PHAssetCollection, PXAssetReference, NSDictionary, PHFetchResult;

@interface PXAssetCollectionActionManager : PXActionManager {
    PXAssetCollectionReference *_initialAssetCollectionReference;
    PXDisplayTitleInfo *_internalDisplayTitleInfo;
    NSDictionary *_assetCollectionActionTypeByGenericType;
}

@property (retain, nonatomic) PHFetchResult *people;
@property (retain, nonatomic) PHFetchResult *socialGroups;
@property (retain, nonatomic) PXAssetReference *dropTargetAssetReference;
@property (retain, nonatomic) PXAssetsDataSourceManager *assetsDataSourceManager;
@property (retain, nonatomic) PHFetchResult *assetsFetchResult;
@property (retain, nonatomic) PHAssetCollection *containingAlbum;
@property (retain, nonatomic) PXPhotosEnvironmentReference *photosEnvironmentReference;
@property (readonly, nonatomic) PXAssetCollectionReference *assetCollectionReference;
@property (readonly, nonatomic) PXDisplayTitleInfo *displayTitleInfo;

- (id)init;
- (void).cxx_destruct;
- (BOOL)canPerformActionType:(id)a0;
- (id)actionPerformerForActionType:(id)a0;
- (id)actionPerformerForActionType:(id)a0 assetCollectionReference:(id)a1;
- (id)actionTypeForGenericType:(id)a0;
- (BOOL)canPerformActionType:(id)a0 assetCollectionReference:(id)a1;
- (id)displayTitleInfoForAssetCollection:(id)a0;
- (id)initWithAssetCollection:(id)a0 displayTitleInfo:(id)a1;
- (id)initWithAssetCollectionReference:(id)a0 displayTitleInfo:(id)a1;
- (id)localizedTitleForActionType:(id)a0 useCase:(unsigned long long)a1;
- (id)localizedTitleForActionType:(id)a0 useCase:(unsigned long long)a1 assetCollectionReference:(id)a2;
- (id)systemImageNameForActionType:(id)a0;
- (id)systemImageNameForActionType:(id)a0 assetCollectionReference:(id)a1;

@end
