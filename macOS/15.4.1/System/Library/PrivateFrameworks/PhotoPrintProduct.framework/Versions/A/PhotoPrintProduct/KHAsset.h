@class NSString, NSLock;

@interface KHAsset : KHModel <KHJSONGeneratorProtocol> {
    NSString *_path;
    NSString *_smallThumbnailPath;
    NSString *_largeThumbnailPath;
    NSString *_screenImagePath;
    NSString *_thumbnailOverridePath;
    NSString *_type;
    long long _resolution;
    long long _branding;
    struct CGSize { double width; double height; } _fullSize;
    struct CGImage { } *_fullSizeImage;
    struct CGImage { } *_screenImage;
    struct CGImage { } *_fullSizeScreenImage;
    struct CGImage { } *_largeThumbnail;
    struct CGImage { } *_smallThumbnail;
    struct CGImage { } *_thumbnailOverride;
    NSLock *_loadingLock;
    NSLock *_thumbnailerLock;
    BOOL _thumbnailerQueued;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assetForKey:(long long)a0 fromDatabase:(id)a1;
+ (id)assetForPath:(id)a0 createIfMissing:(BOOL)a1 inDatabase:(id)a2 relocate:(BOOL)a3;
+ (id)imageForKey:(long long)a0 fromDatabase:(id)a1;

- (void)dealloc;
- (id)path;
- (void)setPath:(id)a0;
- (void)setType:(id)a0;
- (id)type;
- (long long)resolution;
- (void)setResolution:(long long)a0;
- (id)uniqueName;
- (void)cachePath:(id)a0;
- (struct CGSize { double x0; double x1; })fullSize;
- (long long)branding;
- (void)setBranding:(long long)a0;
- (struct CGImage { } *)smallThumbnail;
- (id)JSONRepresentation;
- (struct CGImage { } *)largeThumbnail;
- (id)screenImagePath;
- (struct CGImage { } *)_createCGImageFromFileAtPath:(id)a0;
- (struct CGImageSource { } *)_createCGImageSourceFromFileAtPath:(id)a0;
- (struct CGImage { } *)alternateImageForDesignTag:(id)a0;
- (void)cacheBranding:(long long)a0;
- (void)cacheLargeThumbnailPath:(id)a0;
- (void)cacheResolution:(long long)a0;
- (void)cacheScreenImagePath:(id)a0;
- (void)cacheSmallThumbnailPath:(id)a0;
- (void)cacheThumbnailOverridePath:(id)a0;
- (void)cacheType:(id)a0;
- (void)clearImageCaches;
- (struct CGImage { } *)fullSizedImage;
- (struct CGImage { } *)fullSizedScreenImage;
- (struct CGImage { } *)imageForSize:(struct CGSize { double x0; double x1; })a0 environment:(id)a1;
- (id)initWithModelId:(id)a0;
- (id)initWithModelId:(id)a0 inDatabase:(id)a1;
- (id)largeThumbnailPath;
- (struct CGImage { } *)screenImage;
- (void)setLargeThumbnailPath:(id)a0;
- (void)setScreenImagePath:(id)a0;
- (void)setSmallThumbnailPath:(id)a0;
- (void)setThumbnailOverridePath:(id)a0;
- (void)setThumbnailerQueued:(BOOL)a0;
- (id)smallThumbnailPath;
- (struct CGImage { } *)thumbnailOverride;
- (id)thumbnailOverridePath;
- (BOOL)thumbnailerQueued;

@end
