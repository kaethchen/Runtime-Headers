@class NSString, FCCacheCoordinator, NSURL, FCKeyValueStore, NFUnfairLock;

@interface FCAVAssetCache : NSObject <FCCacheCoordinatorDelegate, FCAVAssetCacheType, FCCacheFlushing> {
    NSString *_cacheDirectory;
    NFUnfairLock *_initializationLock;
    FCKeyValueStore *_metadataStore;
    NSURL *_contentDirectoryURL;
    FCCacheCoordinator *_cacheCoordinator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long storageSize;

- (id)init;
- (void).cxx_destruct;
- (void)adoptFileAtURL:(id)a0 forAssetIdentifier:(id)a1 remoteURL:(id)a2 contentKeyIdentifiers:(id)a3 extension:(id)a4;
- (void)cacheCoordinator:(id)a0 flushKeysWithWriteLock:(id)a1;
- (unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(id)a0;
- (id)cachedFileURLForAssetIdentifier:(id)a0;
- (BOOL)containsAssetWithIdentifier:(id)a0;
- (id)contentArchiveForAssetIdentifier:(id)a0;
- (id)contentKeyIdentifiersForAllAssets;
- (id)contentKeyIdentifiersForAssetIdentifier:(id)a0;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)a0;
- (id)importAVAsset:(id)a0;
- (id)interestTokenForAssetIdentifier:(id)a0;
- (id)interestTokenForAssetIdentifiers:(id)a0;

@end
