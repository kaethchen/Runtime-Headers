@interface PLPTPFetches : NSObject

+ (id)fetchAssetIdsToExcludeFromPTPInContext:(id)a0 isCloudPhotoLibraryEnabled:(BOOL)a1;
+ (id)predicateForAssetsExposedByPHPTPExcludingObjectIDs:(id)a0;
+ (id)fetchObjectIDsForAssetsExposedToPTPFromObjectIDs:(id)a0 inLibrary:(id)a1;
+ (id)fetchObjectIDsForAssetsExposedToPTPFromObjectIDs:(id)a0 inLibrary:(id)a1 isCloudPhotoLibraryEnabled:(BOOL)a2;

@end
