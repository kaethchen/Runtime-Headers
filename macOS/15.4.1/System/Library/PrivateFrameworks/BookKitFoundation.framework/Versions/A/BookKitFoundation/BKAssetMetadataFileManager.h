@class NSFileManager, NSFileCoordinator;

@interface BKAssetMetadataFileManager : NSObject

@property (retain, nonatomic) NSFileManager *fileManager;
@property (retain, nonatomic) NSFileCoordinator *fileCoordinator;

+ (id)dateFormatter;
+ (id)metadataDateFromString:(id)a0;
+ (id)stringFromMetadataDate:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_addURLsFromAsset:(id)a0 toSet:(id)a1;
- (void)_backupMetadataIfNeeded:(id)a0;
- (id)_renameExistingPDFMetadata:(id)a0 toDisplayName:(id)a1 error:(id *)a2;
- (id)_updateImageCoverDataForMetadta:(id)a0 updates:(id)a1 error:(id *)a2;
- (BOOL)_writeExtendedAttributes:(id)a0 url:(id)a1 error:(id *)a2;
- (id)applyUpdate:(id)a0 onExistingAsset:(id)a1 error:(id *)a2;
- (id)assetsForURLs:(id)a0 error:(id *)a1;
- (id)assetsForURLs:(id)a0 missingFromAssets:(id)a1 error:(id *)a2;
- (id)assetsFromAssets:(id)a0 missingFromAssets:(id)a1;
- (BOOL)checkValidFilePermissionsForAsset:(id)a0 error:(id *)a1;
- (id)extendedAttributesForAsset:(id)a0 error:(id *)a1;
- (unsigned long long)fixPermissionsAndCalculateAllocatedSizeAtURL:(id)a0 error:(id *)a1;
- (id)inflateAsset:(id)a0 temporaryDirectory:(id)a1 error:(id *)a2;
- (id)makeAssetUbiquitous:(id)a0 toDirectory:(id)a1 toFilename:(id)a2 error:(id *)a3;
- (id)moveAsset:(id)a0 toDirectory:(id)a1 toFilename:(id)a2 replaceExisting:(BOOL)a3 error:(id *)a4;
- (id)moveAsset:(id)a0 toURL:(id)a1 replaceExisting:(BOOL)a2 error:(id *)a3;
- (id)normalizeNamingForAsset:(id)a0 error:(id *)a1;
- (id)orphanAssetsInAssets:(id)a0 error:(id *)a1;
- (void)persistMetadata:(id)a0;
- (void)persistXattrMetadata:(id)a0;
- (id)redactAsset:(id)a0 intoDirectory:(id)a1 error:(id *)a2;
- (BOOL)removeAsset:(id)a0 error:(id *)a1;
- (id)replaceUbiquitousAsset:(id)a0 withAsset:(id)a1 error:(id *)a2;
- (BOOL)setExtendedAttributesForAsset:(id)a0 error:(id *)a1;
- (id)taskToInstallAsset:(id)a0;
- (id)trashAsset:(id)a0 error:(id *)a1;
- (id)updateAsset:(id)a0 withUpdates:(id)a1 temporaryDirectory:(id)a2 inflateIfNeeded:(BOOL)a3 error:(id *)a4;
- (BOOL)updateExtendedAttributesForAsset:(id)a0 error:(id *)a1;
- (id)updateWithKeyAttributesAssetMetadata:(id)a0 error:(id *)a1;

@end
