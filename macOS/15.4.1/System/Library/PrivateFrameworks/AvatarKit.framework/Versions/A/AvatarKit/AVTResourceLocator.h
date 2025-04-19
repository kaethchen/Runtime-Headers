@class NSURL, NSMutableDictionary;

@interface AVTResourceLocator : NSObject {
    NSMutableDictionary *_imageCache;
    NSURL *_contentFrameworkResourcesURL;
    NSURL *_resourcesURL;
    NSURL *_environmentResourcesURL;
    NSURL *_animojiResourcesURL;
    NSURL *_memojiResourcesURL;
    NSURL *_stickerResourcesURL;
    NSURL *_lockscreenResourcesURL;
    NSURL *_poseResourcesURL;
    NSURL *_memojiAssetsURL;
    NSURL *_rootCacheURL;
    NSURL *_subdivDataCacheURL;
}

+ (id)_resourcePathInDirectoryURL:(id)a0 subDirectory:(id)a1 name:(id)a2 ofType:(id)a3 isDirectory:(BOOL)a4;

- (void).cxx_destruct;
- (id)_init;
- (void)deleteLegacyCache;
- (void)deleteObsoleteVersionsInCache:(id)a0 currentVersion:(unsigned long long)a1;
- (void)initCaches;

@end
