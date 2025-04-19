@interface MTConstants : NSObject

+ (id)cachesDirectory;
+ (id)_watchManagedAssetsDirectoryURL;
+ (id)artworkAssetURL;
+ (id)managedObjectModelDefinitionURL;
+ (void)_repairFilePermissionsIfNeeded;
+ (id)alignmentAssetURL;
+ (id)attributesForNewDirectory;
+ (id)dataAssetsCacheURL;
+ (id)documentsDirectory;
+ (BOOL)excludeDirectoryFromBackup:(id)a0;
+ (id)libraryDirectory;
+ (id)managedAssetsDirectoryURL;
+ (id)preferredAssetCacheURL;
+ (void)removeExcludeFromBackupFlagFromDirectoryIfNeeded:(id)a0;
+ (id)sharedAssetsCacheURL;
+ (id)sharedCacheDirectory;
+ (id)sharedContainerURL;
+ (id)sharedDocumentsDirectory;
+ (id)shazamSignatureAssetURL;
+ (id)streamedMediaAssetURL;
+ (id)ttmlAssetURL;

@end
