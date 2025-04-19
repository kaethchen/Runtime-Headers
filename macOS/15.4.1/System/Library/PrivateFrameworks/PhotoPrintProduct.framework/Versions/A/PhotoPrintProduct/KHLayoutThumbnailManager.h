@class NSOperationQueue, NSCache, NSString;
@protocol KHLayoutThumbnailManagerDelegate;

@interface KHLayoutThumbnailManager : NSObject <KHLayoutThumbnailerDelegate, NSCacheDelegate>

@property (readonly, nonatomic) NSOperationQueue *thumbnailerQueue;
@property (readonly, nonatomic) NSCache *thumbnailCache;
@property (nonatomic) struct CGSize { double width; double height; } enclosingSize;
@property (nonatomic) double screenScale;
@property (nonatomic) BOOL shouldIgnoreDrawingBadges;
@property (nonatomic) BOOL shouldIgnoreDrawingTexts;
@property (nonatomic) BOOL shouldIgnorePlaceholderText;
@property (nonatomic) unsigned long long maxConcurrentOperationCount;
@property (nonatomic) unsigned long long preferredRenderingIntent;
@property (nonatomic) NSOperationQueue *callbackQueue;
@property (weak, nonatomic) id<KHLayoutThumbnailManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)cache:(id)a0 willEvictObject:(id)a1;
- (void)removeAllThumbnails;
- (void)_invalidateDiskCacheForProject:(id)a0;
- (void)_performRequestsWithThumbnailInfo:(id)a0 layout:(id)a1;
- (id)_thumbnailInfoForLayout:(id)a0;
- (void)_writeThumbnail:(id)a0 inDirectory:(id)a1 withName:(id)a2;
- (BOOL)hasThumbnailForLayout:(id)a0;
- (id)initWithEnclosingSize:(struct CGSize { double x0; double x1; })a0;
- (void)loadCacheForProject:(id)a0;
- (void)refreshThumbnailForLayout:(id)a0;
- (id)requestThumbnailForLayout:(id)a0;
- (void)requestThumbnailForLayout:(id)a0 completion:(id /* block */)a1;
- (void)requestThumbnailForLayout:(id)a0 scale:(double)a1 completion:(id /* block */)a2;
- (void)saveCacheForProject:(id)a0 waitUntilFinished:(BOOL)a1;
- (id)thumbnailForLayout:(id)a0 size:(unsigned long long)a1;
- (struct CGSize { double x0; double x1; })thumbnailSizeForLayout:(id)a0;
- (void)thumbnailerCompleted:(id)a0;

@end
