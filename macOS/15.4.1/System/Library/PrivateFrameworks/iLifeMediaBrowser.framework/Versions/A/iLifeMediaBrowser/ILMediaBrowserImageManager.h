@class NSRecursiveLock, NSString, NSMutableDictionary, NSMutableArray;

@interface ILMediaBrowserImageManager : NSObject {
    NSRecursiveLock *_imageAccessLock;
    NSString *_uniqueID;
    NSString *_cachedDBasePath;
    NSMutableDictionary *_cachedDBaseDict;
    NSMutableArray *_loadAttributesRequestQueue;
    NSMutableDictionary *_loadAttributesRequestsByPath;
    BOOL _cachedDBaseNeedsSave;
}

+ (id)sharedInstance;
+ (void)releaseSharedInstance;

- (void)dealloc;
- (id)init;
- (id)iconForFile:(id)a0;
- (id)imageNamed:(id)a0;
- (id)imageNamed:(id)a0 inBundle:(id)a1;
- (id)currentBundle;
- (id)cachedDBaseDict;
- (void)handleApplicationWillTerminate:(id)a0;
- (id)imageBitmapRep:(id)a0;
- (void)addLoadAttributesRequest:(id)a0;
- (id)apertureIcon;
- (void)applyCachedInfo:(id)a0 toMediaObject:(id)a1;
- (void)applyRequestedInfoToMediaObject:(id)a0;
- (id)attemptToResolveMediaAlias:(id)a0 moviePath:(id)a1;
- (id)avAssetWithPath:(id)a0;
- (void)checkForNextRequest;
- (void)continueProcessingLoadAttributesRequest:(id)a0;
- (id)counterBadgeImageForCount:(unsigned long long)a0;
- (id)counterBadgeImageForCount:(unsigned long long)a0 scaleFactor:(double)a1;
- (id)defaultFolderImage;
- (id)defaultOfflineFolderImage;
- (void)extractThumbnailAndMetadataFromMovieRequest:(id)a0;
- (id)garageBandIcon;
- (id)iMovie7Icon;
- (id)iMovieIcon;
- (id)iPhotoIcon;
- (id)iTunesIcon;
- (id)iconForMediaGroupType:(unsigned long long)a0;
- (id)iconImageForFilePath:(id)a0;
- (void)loadAttributes:(id)a0 forImageMediaObject:(id)a1 atPath:(id)a2;
- (void)loadAttributes:(id)a0 forMediaObject:(id)a1 atPath:(id)a2;
- (void)loadAttributes:(id)a0 forVideoMediaObject:(id)a1 atPath:(id)a2;
- (void)loadCachedAttributesForMediaObject:(id)a0;
- (void)loadCachedAttributesForMediaObject:(id)a0 updateIfNotFound:(BOOL)a1;
- (id)photoBoothIcon;
- (void)processLoadAttributesRequest;
- (void)removeRequestFromQueue:(id)a0;
- (void)updateThumbnailDataXmlForPath:(id)a0 info:(id)a1;
- (void)writeCachedDBaseDictToFile;

@end
