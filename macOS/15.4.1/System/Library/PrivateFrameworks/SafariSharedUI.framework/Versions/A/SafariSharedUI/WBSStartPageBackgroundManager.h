@class NSMutableDictionary, NSString, WBSCGImage, NSURL, NSObject, NSAppearance;
@protocol OS_dispatch_queue;

@interface WBSStartPageBackgroundManager : NSObject <WBTabGroupManagerObserver> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_imageReadWriteQueue;
    WBSCGImage *_prefetchedImage;
    NSURL *_prefetchedImageURL;
    NSString *_lastPrefetchedFilePath;
    struct atomic<long long> { struct __cxx_atomic_impl<long long, std::__cxx_atomic_base_impl<long long>> { _Atomic long long __a_value; } __a_; } _prefetchingCoalescingDelay;
    NSURL *_imageURL;
    NSAppearance *_appearance;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _imageLock;
    WBSCGImage *_prefetchedImageThumbnail;
    double _prefetchedImageLuminance;
    NSMutableDictionary *_backgroundImageIdentifierToImage;
    NSMutableDictionary *_backgroundImageIdentifierToLuminance;
    NSMutableDictionary *_imageURLToTileRequired;
}

@property (class, readonly, nonatomic) WBSStartPageBackgroundManager *defaultManager;

@property (readonly, nonatomic) WBSCGImage *image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)warmUp;
+ (id)ciColorKernel;
+ (BOOL)shouldSkipPostProcessing;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)clearImage;
- (id)initWithImageURL:(id)a0;
- (id)fetchImage:(id)a0;
- (id)ciContext;
- (void)loadImageFromDiskForIdentifier:(id)a0;
- (id)appearanceForImageWithIdentifier:(id)a0 forProfile:(id)a1;
- (id)appearanceIfImageExists:(BOOL)a0;
- (void)cacheImageFromURL:(id)a0 completion:(id /* block */)a1;
- (void)clearImageWithIdentifier:(id)a0 withinProfile:(BOOL)a1;
- (void)clearPrefetchedImage;
- (void)commitPrefetchedImageWithLuminance:(double)a0 forIdentifier:(id)a1 isGeneratedImage:(BOOL)a2 withinProfile:(BOOL)a3;
- (void)generateProfileSpecificBackgroundImageWithSymbol:(id)a0 forProfile:(id)a1 withColor:(id)a2 completionHandler:(id /* block */)a3;
- (void)getHasGeneratedBackgroundImage:(id)a0 forProfileWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)hasGlobalBackgroundImage;
- (BOOL)hasProfileSpecificBackgroundImage:(id)a0;
- (id)imageForIdentifier:(id)a0 forProfile:(id)a1;
- (BOOL)isCorrectBackgroundImageLoadedForIdentifier:(id)a0;
- (void)prefetchImage:(id)a0 completion:(id /* block */)a1;
- (void)prefetchImage:(id)a0 luminance:(double)a1 completion:(id /* block */)a2;
- (id)prefetchedImageNameForProfile:(id)a0;
- (id)prefetchedImageThumbnailForProfile:(id)a0;
- (id)presetIconColorForSymbol:(id)a0;
- (void)processImageForIdentifier:(id)a0 isGeneratedImage:(BOOL)a1 withinProfile:(BOOL)a2;
- (void)processImageForIdentifier:(id)a0 isGeneratedImage:(BOOL)a1 withinProfile:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)reloadProfileSpecificBackgroundImageFromDisk:(id)a0;
- (void)reloadTabGroupSpecificBackgroundImageFromDisk:(id)a0;
- (void)tabGroupManager:(id)a0 didRemoveProfileWithIdentifier:(id)a1;
- (void)tabGroupManager:(id)a0 didRemoveTabGroupWithUUID:(id)a1;
- (long long)_generatedImageScaleWithSymbol:(id)a0;
- (void)_clearPrefetchedImage;
- (void)_commitImage:(id)a0 appearanceName:(id)a1 luminance:(double)a2 forIdentifier:(id)a3 isGeneratedImage:(BOOL)a4 withinProfile:(BOOL)a5 completionHandler:(id /* block */)a6;
- (void)_deleteImageWithIdentifier:(id)a0;
- (id)_fetchImage:(id)a0 source:(struct CGImageSource { } *)a1 adjustForDarkAppearance:(BOOL)a2;
- (double)_iconOpacityForBackgroundColor:(id)a0 forDarkIcon:(BOOL)a1;
- (BOOL)_isColorSpaceIncompatibleForThresholdingInImage:(struct CGImage { } *)a0;
- (BOOL)_isGeneratedBackgroundImageInImageSource:(struct CGImageSource { } *)a0;
- (void)_loadImageFromDiskForIdentifier:(id)a0;
- (void)_prefetchImage:(id)a0 luminance:(double)a1 completion:(id /* block */)a2 withNanoSecondDelay:(long long)a3;
- (unsigned long long)_primaryIndexForImage:(id)a0 source:(struct CGImageSource { } *)a1 adjustForDarkAppearance:(BOOL)a2;
- (void)_processImageForIdentifier:(id)a0 isGeneratedImage:(BOOL)a1 withinProfile:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)_readImagePropertiesFromImageSource:(struct CGImageSource { } *)a0 forImageIdentifier:(id)a1 isNonGlobalBackgroundImage:(BOOL)a2;
- (void)_saveImage:(id)a0 appearance:(id)a1 luminance:(double)a2 forIdentifier:(id)a3 isGeneratedImage:(BOOL)a4 withinProfile:(BOOL)a5 completion:(id /* block */)a6;
- (void)_setHasProfileSpecificBackgroundImage:(BOOL)a0 forIdentifier:(id)a1;
- (void)_setHasTabGroupSpecificBackgroundImage:(BOOL)a0 forIdentifier:(id)a1;
- (void)_setImage:(id)a0 withAppearance:(id)a1 forIdentifier:(id)a2;
- (void)_setImageOnAnyQueue:(id)a0 withAppearance:(id)a1 forIdentifier:(id)a2;
- (BOOL)_tabGroupShouldInheritProfileBackgroundImage:(id)a0 forProfileWithIdentifier:(id)a1;
- (BOOL)_tabGroupShouldUseGlobalBackgroundImage:(id)a0 forProfileWithIdentifier:(id)a1;
- (id)_templateImageWithImage:(id)a0 color:(id)a1;
- (id)_thumbnailForImage:(id)a0 source:(struct CGImageSource { } *)a1 adjustForDarkAppearance:(BOOL)a2;
- (void)_updateThumbnailIfNeeded;
- (id)analyzeImageAndThresholdIfNecessary:(struct CGImage { } *)a0 thumbnail:(struct CGImage { } *)a1 precomputedLuminance:(double)a2 getAppearance:(id *)a3 luminance:(double *)a4;
- (id)appearanceForImage:(id)a0;
- (id)appearanceForLuminance:(double)a0;
- (id)assignImage:(id)a0 oldImage:(id)a1;
- (BOOL)hasTabGroupSpecificBackgroundImage:(id)a0;
- (id)normalizeImage:(id)a0 properties:(id)a1;
- (id)thresholdImage:(struct CGImage { } *)a0 minValue:(double)a1 maxValue:(double)a2 multiplier:(double)a3;

@end
