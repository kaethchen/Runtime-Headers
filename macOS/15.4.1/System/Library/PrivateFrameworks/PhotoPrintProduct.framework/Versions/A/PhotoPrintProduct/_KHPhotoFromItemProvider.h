@class NSItemProvider, NSExtensionContext, NSDate, NSExtensionItem, NSURL;

@interface _KHPhotoFromItemProvider : KHPhoto {
    NSDate *_imageModificationDate;
    NSURL *_URL;
}

@property (retain, nonatomic) NSExtensionItem *item;
@property (retain, nonatomic) NSItemProvider *itemProvider;
@property (retain, nonatomic) NSExtensionContext *context;

+ (id)_internalImageCache;
+ (void)dumpCache:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)URL;
- (id)rawAsset;
- (void)_dump:(id)a0;
- (id)_imageWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)pageLayoutImage;
- (id)pageLayoutImageSuitableForSize:(struct CGSize { double x0; double x1; })a0;
- (id)pageLayoutTitle;
- (id)_loadImageWithOptions:(id)a0 cacheKey:(id)a1;
- (id)pageLayoutPhotoModificationDate;
- (id)_cacheKeyForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_clearCacheForKey:(id)a0;
- (id)_fullImageCacheKey;
- (void)_hydrate;
- (id)_imageWithSize:(struct CGSize { double x0; double x1; })a0 cache:(BOOL)a1;
- (id)_loadFullImageFromProviderSync;
- (id)_loadImageWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)_loadImageWithSize:(struct CGSize { double x0; double x1; })a0 cache:(BOOL)a1;
- (id)_loadPreviewImageWithSize:(struct CGSize { double x0; double x1; })a0 cache:(BOOL)a1;
- (id)_previewImageCacheKey;
- (id)initWithItemProvider:(id)a0 context:(id)a1 item:(id)a2;
- (id)pageLayoutAspectRatioThumbnailImage;
- (id)pageLayoutFilename;
- (BOOL)pageLayoutImageExists;
- (id)pageLayoutImageSuitableForSize:(struct CGSize { double x0; double x1; })a0 quality:(unsigned long long)a1;
- (id)pageLayoutPhotoDate;
- (id)pageLayoutPhotoID;
- (id)pageLayoutThumbnailImage;

@end
