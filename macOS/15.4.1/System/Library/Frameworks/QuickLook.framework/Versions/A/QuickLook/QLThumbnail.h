@class QLThumbnailGenerationRequest, QLThumbnailMetadata, FPItem;
@protocol QLThumbnailGeneratorInfo;

@interface QLThumbnail : QLClient {
    struct __QLThumbnail { } *_thumbnailRef;
    struct CGImage { } *_image;
}

@property (readonly) struct __QLThumbnail { } *thumbnailRef;
@property (retain) QLThumbnailGenerationRequest *generationRequest;
@property (retain) QLThumbnailMetadata *properties;
@property (retain) id<QLThumbnailGeneratorInfo> generatorInfo;
@property (retain) id queueContext;
@property (retain) FPItem *fpitem;
@property struct CGImage { } *image;
@property BOOL imageComputed;
@property BOOL isLowQuality;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentRect;
@property struct CGSize { double width; double height; } maxSize;
@property double minimumDimension;
@property int flavor;
@property (copy, nonatomic) id /* block */ completionHandler;
@property BOOL forcedContentTypeUTI;
@property struct CGSize { double width; double height; } minimumUsefulSize;

+ (id)cacheIDForURL:(id)a0;
+ (struct CGImage { } *)createThumbnailImage:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1 options:(id)a2 allocator:(struct __CFAllocator { } *)a3;
+ (struct CGImage { } *)createThumbnailImageWithImageIO:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1 options:(id)a2 properties:(id)a3 typeHint:(id)a4 flavor:(int)a5;
+ (id)dummyForcedGeneratorInfo;
+ (id)getGeneratorInfo:(id)a0 isDatabaseUpdating:(BOOL *)a1;
+ (BOOL)isItemAtURLUbiquitous:(id)a0;
+ (id)newLockQueue;
+ (BOOL)supportsContentType:(id)a0 atSize:(struct CGSize { double x0; double x1; })a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (void)teardown;
- (BOOL)isGenericFolder;
- (void)startedOnServerWithContentType:(id)a0;
- (void)_endProcess;
- (BOOL)_postProcessAndShouldRetry;
- (BOOL)_setupForSendToServer;
- (BOOL)_shouldContinueAfterMiniCache;
- (BOOL)_shouldGenerateLocallyForDebug;
- (void)_syncGetImageIfNecessary;
- (struct CGImage { } *)copyImageMask;
- (struct CGImage { } *)copySpecialGenericImageAllowFolder:(BOOL)a0;
- (void)failedFromServer:(int)a0;
- (void)generateLocallyWithQueue:(id)a0 completion:(id /* block */)a1;
- (id)initWithThumbnailRef:(struct __QLThumbnail { } *)a0 url:(id)a1 fpItem:(id)a2 maxSize:(struct CGSize { double x0; double x1; })a3 minimumDimension:(double)a4 options:(id)a5;
- (id)retrieveClientProperties;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })retrieveContentRect;
- (struct CGImage { } *)retrieveImageCopy;
- (int)retrieveInlinePreviewMode;
- (BOOL)retrieveIsLowQuality;
- (id)retrieveProperties;
- (void)sendQueryFromThumbnailQueue:(id /* block */)a0;
- (BOOL)sendQuerySynchronous:(BOOL)a0 completion:(id /* block */)a1;
- (void)setForcedContentType:(id)a0;
- (void)syncGetImageIfNecessary;

@end
