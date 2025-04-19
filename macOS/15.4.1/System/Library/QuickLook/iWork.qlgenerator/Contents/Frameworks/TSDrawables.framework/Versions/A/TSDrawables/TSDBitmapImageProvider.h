@class TSUOnce, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface TSDBitmapImageProvider : TSDImageProvider {
    struct CGImageSource { } *mImageSource;
    struct CGImage { } *mFullSizedSDRImage;
    struct CGImage { } *mFullSizedHDRImage;
    struct CGImage { } *mLargestSafeSDRImage;
    struct CGImage { } *mLargestSafeHDRImage;
    NSMutableDictionary *mResampledSDRImages;
    NSMutableDictionary *mResampledHDRImages;
    unsigned long long mImageGamut;
    unsigned long long mImageDynamicRangeType;
    struct CGSize { double width; double height; } mNaturalSize;
    long long mOrientation;
    BOOL mIsOpaque;
    BOOL mIsValid;
    BOOL mIsRawImage;
    unsigned long long mDPI;
    NSObject<OS_dispatch_queue> *mImageQueue;
    TSUOnce *mCheckIfValidOnce;
    NSObject<OS_dispatch_semaphore> *mFlushableContentLock;
    BOOL mHasFlushableContent;
    unsigned long long mEstimatedSize;
}

@property (readonly, nonatomic) struct CGImage { } *CGImageOfAnySizeAndConfiguration;
@property (readonly, nonatomic) long long orientation;
@property (readonly, nonatomic) BOOL isOpaque;
@property (readonly, nonatomic) unsigned long long imageDPI;
@property (readonly, nonatomic) BOOL hasHDRGainMap;
@property (readonly, nonatomic) unsigned long long validationStatus;
@property (readonly, nonatomic) struct CGImageSource { } *CGImageSource;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } dpiAdjustedFillSize;

+ (struct CGSize { double x0; double x1; })naturalSizeForImageData:(id)a0;
+ (struct CGImage { } *)CGImageForImageData:(id)a0 renderingConfiguration:(id)a1;
+ (id)TSUImageForImageData:(id)a0 renderingConfiguration:(id)a1;

- (void)dealloc;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)flush;
- (struct CGSize { double x0; double x1; })naturalSize;
- (struct CGSize { double x0; double x1; })dpiAdjustedNaturalSize;
- (void)drawImageInContext:(struct CGContext { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)i_commonInit;
- (unsigned long long)imageGamut;
- (void)p_configureOrientationAndSizeFromImageSource:(struct CGImageSource { } *)a0 andImage:(struct CGImage { } *)a1;
- (void)p_loadImageMetadata;
- (void)p_loadSourceRefIfNecessary;
- (struct CGImageSource { } *)p_newCGImageSource;
- (struct CGImageSource { } *)p_newCGImageSourceForTemporaryUse;
- (BOOL)prefersHDRRendering;
- (struct CGImage { } *)CGImageForNaturalSizeWithRenderingConfiguration:(id)a0;
- (struct CGImage { } *)CGImageForSize:(struct CGSize { double x0; double x1; })a0 withRenderingConfiguration:(id)a1;
- (struct CGImage { } *)CGImageOfAnySizeWithRenderingConfiguration:(id)a0;
- (struct CGImage { } *)CGImageResampledToSize:(struct CGSize { double x0; double x1; })a0 lowQuality:(BOOL)a1;
- (BOOL)p_dataIsGeneric;
- (void)p_flush;
- (struct CGImage { } *)CGImageOfLargestSafeSizeWithRenderingConfiguration:(id)a0;
- (struct CGImage { } *)CGImageResampledToSize:(struct CGSize { double x0; double x1; })a0 renderingConfiguration:(id)a1;
- (unsigned long long)i_flushableMemoryEstimate;
- (BOOL)i_hasFlushableContent;
- (void)p_configureRawBehaviorFromImageSource:(struct CGImageSource { } *)a0;
- (struct CGImage { } *)p_createResampledImageWithReciprocalScale:(unsigned long long)a0 renderingConfiguration:(id)a1;
- (void)p_loadFullSizedImageIfNecessaryWithRenderingConfiguration:(id)a0;
- (void)p_loadLargestSafeImageIfNecessaryWithRenderingConfiguration:(id)a0;
- (struct CGImage { } *)p_newImageFromSource:(struct CGImageSource { } *)a0 renderingConfiguration:(id)a1;
- (struct CGImage { } *)p_newImageOfSize:(struct CGSize { double x0; double x1; })a0 fromSource:(struct CGImageSource { } *)a1 renderingConfiguration:(id)a2;
- (long long)p_reciprocalScaleForImageSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGImage { } *)p_resampledImageOfReciprocalScale:(unsigned long long)a0 renderingConfiguration:(id)a1;
- (BOOL)p_shouldScaleRetinaImages;
- (struct CGImage { } *)p_smallestImagePossibleWithRenderingConfiguration:(id)a0;
- (void)p_updateEstimatedSize;

@end
