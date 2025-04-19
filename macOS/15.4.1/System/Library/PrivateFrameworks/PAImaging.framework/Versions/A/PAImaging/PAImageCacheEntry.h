@class PA2DBuffer, NSString, NSURL, PAImageCacheEntrySharedValid, IPAColorProfile, PAImageRequest, NSDictionary, NSError;

@interface PAImageCacheEntry : NSObject <PAImageResponseInternal, NSCopying> {
    PAImageCacheEntrySharedValid *_sharedValid;
    PAImageRequest *_imageRequest;
    id _cacheKey;
    NSError *_error;
    PA2DBuffer *_buffer;
    BOOL _scaled;
    NSDictionary *_cgImageProperties;
    IPAColorProfile *_colorProfile;
    unsigned long long _requestedSubsampleFactor;
}

@property (retain) id invalidationKey;
@property int format;
@property (nonatomic) BOOL endAccessOnDealloc;
@property long long masterToRasterOrientation;
@property long long rasterToDisplayOrientation;
@property (readonly) struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } size;
@property (readonly) unsigned long long requestedSubsampleFactor;
@property (retain, nonatomic) NSURL *imageURL;
@property (readonly) BOOL scaled;
@property (readonly) PAImageRequest *imageRequest;
@property (readonly) id cacheKey;
@property (readonly) PA2DBuffer *buffer;
@property (readonly) NSDictionary *cgImageProperties;
@property (readonly) IPAColorProfile *colorProfile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)error;
- (BOOL)beginAccess;
- (void)endAccess;
- (struct CGImage { } *)newCGImage;
- (unsigned long long)accessCount;
- (id)copyWithImageRequest:(id)a0;
- (id)initWithImageRequest:(id)a0 cacheKey:(id)a1 invalidationKey:(id)a2 buffer:(id)a3 scaled:(BOOL)a4 cgImageProperties:(id)a5 colorProfile:(id)a6 masterToRasterOrientation:(long long)a7 rasterToDisplayOrientation:(long long)a8 requestedSubsampleFactor:(unsigned long long)a9 error:(id)a10;
- (struct CGImage { } *)newCGImageWithMaxSize:(struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })a0 cropCenter:(struct CGPoint { double x0; double x1; })a1;
- (void)transferAccess;

@end
