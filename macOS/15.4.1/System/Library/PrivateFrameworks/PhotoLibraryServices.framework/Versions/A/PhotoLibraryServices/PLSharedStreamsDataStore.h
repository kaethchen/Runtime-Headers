@class NSString, PLPhotoLibraryPathManager;

@interface PLSharedStreamsDataStore : PLResourceDataStore <PLResourceDataStore>

@property (readonly, nonatomic) PLPhotoLibraryPathManager *pathManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned short)storeClassID;
+ (unsigned int)_masterThumbRecipeID;
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)a0;
+ (id)supportedRecipes;

- (id)name;
- (id)descriptionForSubtype:(long long)a0;
- (BOOL)dataStoreSubtypeIsDownloadable:(long long)a0;
- (id)keyFromKeyStruct:(const void *)a0;
- (id)requestLocalAvailabilityChange:(short)a0 forResource:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)requestStreamingURLForResource:(id)a0 asset:(id)a1 intent:(unsigned long long)a2 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a3 streamingHints:(id)a4 inContext:(id)a5 clientBundleID:(id)a6 completion:(id /* block */)a7;
- (id)resourceDataForKey:(id)a0 assetID:(id)a1;
- (id)resourceURLForKey:(id)a0 assetID:(id)a1;
- (BOOL)storeExternalResource:(id)a0 forAsset:(id)a1 options:(id)a2 error:(id *)a3 resultingResource:(id *)a4;
- (short)_cloudSharedAssetPlaceholderKindFromSharedStreamsResourceType:(unsigned int)a0;
- (BOOL)_isDerivativeForSharedStreamsType:(unsigned int)a0;
- (short)_localAvailabilityForAsset:(id)a0 album:(id)a1 type:(unsigned int)a2;
- (unsigned int)_mainResourceTypeForAsset:(id)a0;
- (void)_prepareForDownloadNotification:(id)a0 atFileURL:(id)a1 completion:(id /* block */)a2;
- (short)_remoteAvailabilityForType:(unsigned int)a0;
- (id)_sharedStreamsExternalResourceForAsset:(id)a0 album:(id)a1 type:(unsigned int)a2;
- (id)_utiStringForAsset:(id)a0 type:(unsigned int)a1;
- (BOOL)canStoreExternalResource:(id)a0;
- (BOOL)canStreamResource:(id)a0;
- (id)expectedFileURLForResource:(id)a0 asset:(id)a1;
- (id)requiredExternalResourcesForMigratingOrImportingAsset:(id)a0;
- (id)updateDerivativeResourcesForAsset:(id)a0 forLifecycleEvent:(unsigned int)a1;
- (BOOL)videoResource:(id)a0 matchesOrExceedsQualityLevel:(unsigned int)a1;
- (id)virtualResourcesForAsset:(id)a0;

@end
