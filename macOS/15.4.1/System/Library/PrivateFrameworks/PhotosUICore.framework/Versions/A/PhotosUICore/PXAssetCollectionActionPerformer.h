@class PXDisplayTitleInfo, PHFetchResult, PXAssetReference, PXAssetsDataSource, PXAssetCollectionReference;
@protocol PXDisplayAssetCollection;

@interface PXAssetCollectionActionPerformer : PXActionPerformer

@property (retain, nonatomic) PHFetchResult *people;
@property (retain, nonatomic) PHFetchResult *socialGroups;
@property (retain, nonatomic) PXAssetReference *dropTargetAssetReference;
@property (retain, nonatomic) PXAssetsDataSource *assetsDataSource;
@property (retain, nonatomic) PHFetchResult *assetsFetchResult;
@property (readonly, nonatomic) PXAssetCollectionReference *assetCollectionReference;
@property (readonly, nonatomic) id<PXDisplayAssetCollection> assetCollection;
@property (readonly, nonatomic) PXDisplayTitleInfo *displayTitleInfo;

- (void).cxx_destruct;
- (id)initWithActionType:(id)a0;
- (id)initWithActionType:(id)a0 assetCollectionReference:(id)a1 displayTitleInfo:(id)a2;
- (id)initWithActionType:(id)a0 assetCollectionReference:(id)a1 parameters:(id)a2;

@end
