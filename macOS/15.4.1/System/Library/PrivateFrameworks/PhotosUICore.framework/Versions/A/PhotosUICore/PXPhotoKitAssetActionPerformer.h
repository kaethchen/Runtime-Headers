@class NSString, NSArray, PHPerson, PXSectionedObjectReference, NSDictionary, PXPhotosDataSource, PXPhotoKitAssetsDataSourceManager, PHFetchResult, PHSocialGroup, PXPhotoKitImportStatusManager;
@protocol PXRadarConfigurationProvider;

@interface PXPhotoKitAssetActionPerformer : PXAssetActionPerformer

@property (readonly, nonatomic) PXPhotosDataSource *photosDataSourceSnapshot;
@property (readonly, nonatomic) NSDictionary *dataSourceUserInfo;
@property (retain, nonatomic) PXPhotoKitAssetsDataSourceManager *photoKitDataSourceManager;
@property (retain, nonatomic) PHPerson *person;
@property (retain, nonatomic) PHSocialGroup *socialGroup;
@property (retain, nonatomic) PXSectionedObjectReference *objectReference;
@property (readonly, nonatomic) PHFetchResult *assetsFetchResult;
@property (readonly, nonatomic) NSArray *assets;
@property (readonly, nonatomic) NSDictionary *assetsByAssetCollection;
@property (nonatomic) BOOL shouldSkipUserConfirmation;
@property (retain, nonatomic) PXPhotoKitImportStatusManager *importStatusManager;
@property (retain, nonatomic) NSString *importSessionID;
@property (nonatomic) unsigned long long presentationSource;
@property (retain, nonatomic) id<PXRadarConfigurationProvider> radarConfigurationProvider;
@property (nonatomic) BOOL supportsAirPlay;

+ (BOOL)canPerformWithActionManager:(id)a0;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (id)systemImageNameForActionManager:(id)a0;
+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2 socialGroup:(id)a3;
+ (BOOL)canPerformOnImplicitSelectionInContainerCollection:(id)a0;
+ (BOOL)canPerformOnSubsetOfSelection;
+ (BOOL)canPerformWithSelectionSnapshot:(id)a0 person:(id)a1 socialGroup:(id)a2;
+ (BOOL)shouldEnableWithActionManager:(id)a0;

- (void).cxx_destruct;
- (id)_indexPathsInPhotosDataSource:(id)a0;
- (id)createPerformerWithClass:(Class)a0 actionType:(id)a1;
- (void)forceIncludeAssetsInDataSource;
- (void)instantlyExcludeAssetsFromDataSource;
- (id)localizedTitleForUseCase:(unsigned long long)a0;
- (BOOL)shouldExitSelectModeForState:(unsigned long long)a0;
- (void)stopExcludingAssetsFromDataSource;

@end
