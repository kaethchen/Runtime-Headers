@class NSString, NSFileManager, NSURL;

@interface CHSScreenshotManager : NSObject {
    NSURL *_baseURL;
    NSFileManager *_threadSafe_fileManager;
}

@property (class, readonly, nonatomic) NSString *basePath;
@property (class, readonly, nonatomic) CHSScreenshotManager *sharedManager;

- (void).cxx_destruct;
- (id)URLForWidget:(id)a0 metrics:(id)a1 attributes:(id)a2 createIntermediateDirectories:(BOOL)a3;
- (id)allCachedSnapshotURLs;
- (void)deleteAllCachedScreenshots;
- (void)deleteAllCachedScreenshotsExcludingWidgets:(id)a0;
- (void)deleteCachedScreenshotsMatchingWidget:(id)a0;
- (id)initWithDirectory:(id)a0 fileManager:(id)a1;
- (id)snapshotContextForWidget:(id)a0 metrics:(id)a1 attributes:(id)a2;

@end
