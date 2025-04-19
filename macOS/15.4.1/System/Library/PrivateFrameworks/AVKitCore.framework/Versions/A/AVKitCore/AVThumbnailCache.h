@class NSString;

@interface AVThumbnailCache : NSObject {
    unsigned long long _maximumCacheSize;
    NSString *_cacheDirectoryPath;
}

@property (nonatomic) unsigned long long currentCacheSize;

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_ensureDirectoryExistsAtPath:(id)a0;
- (id)_cacheDirectoryPath;
- (id)_randomDataOfLength:(unsigned long long)a0;
- (unsigned long long)_directorySize:(id)a0;
- (BOOL)_cleanUpCacheDirectoryExcludingAssetCachesDirectoryPath:(id)a0;
- (id)_createKeyForKeyUUID:(id)a0;
- (id)_decryptData:(id)a0 key:(id)a1;
- (id)_encryptData:(id)a0 key:(id)a1;
- (id)_loadAccessDateFromExtendedFileAttributesOfFileAtPath:(id)a0;
- (id)_loadCachedThumbnailsFromAssetCachesDirectory:(id)a0 encryptionKey:(id)a1 assetModificationDate:(id)a2;
- (id)_loadEncryptionKeyFromExtendedFileAttribute:(id)a0 filePath:(id)a1;
- (id)_loadExtendedFileAttributeOfFileAtPath:(id)a0 attributeName:(id)a1 expectedSize:(long long)a2;
- (id)_loadUUIDFromExtendedFileAttribute:(id)a0 filePath:(id)a1;
- (BOOL)_saveThumbnail:(id)a0 inDirectory:(id)a1 encryptionKey:(id)a2;
- (BOOL)_storeDateInExtendedFileAttributeOfFileAtPath:(id)a0 date:(id)a1;
- (BOOL)_storeExtendedFileAttributeOfFileAtPath:(id)a0 data:(id)a1 attributeName:(id)a2;
- (BOOL)_storeUUIDInExtendedFileAttribute:(id)a0 filePath:(id)a1 UUID:(id)a2;
- (BOOL)cacheThumbnail:(id)a0 assetURL:(id)a1;
- (id)initWithCacheSize:(unsigned long long)a0 cacheDirectoryPath:(id)a1;
- (id)loadCachedThumbnailsForAssetAtURL:(id)a0;

@end
