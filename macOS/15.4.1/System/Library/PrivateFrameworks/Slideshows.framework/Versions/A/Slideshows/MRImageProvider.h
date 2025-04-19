@class MRAssetPlayer, NSString, NSDictionary, MRLayerEffect, NSInvocationOperation, NSLock, MRImage;

@interface MRImageProvider : NSObject <MRLoadable, MRRenderable, MRAssetPlayerDelegate> {
    NSInvocationOperation *mPreloadOperation;
    NSLock *mPreloadOperationLock;
    MRImage *mOriginalImage;
    BOOL mIsLoaded;
    struct CGSize { double width; double height; } mImageSize;
    struct CGSize { double width; double height; } mLastImageSize;
    MRAssetPlayer *mSlidePlayer;
    unsigned int mFlags;
    BOOL mIsCleanedUp;
}

@property (nonatomic) struct CGSize { double width; double height; } defaultSize;
@property (copy, nonatomic) NSString *imageSizeScript;
@property (retain, nonatomic) NSDictionary *effectAttributes;
@property (copy, nonatomic) NSString *assetPath;
@property (nonatomic) struct CGSize { double width; double height; } originalImageSize;
@property (nonatomic) double showTime;
@property (nonatomic) double showDuration;
@property (nonatomic) BOOL wantsMonochromatic;
@property (nonatomic) BOOL wantsMipmap;
@property (nonatomic) BOOL wantsPowerOfTwo;
@property (readonly, nonatomic) struct CGSize { double width; double height; } requestedSize;
@property (readonly, nonatomic) double imageAspectRatio;
@property (readonly, nonatomic) BOOL isLoaded;
@property (nonatomic) BOOL justHoldIt;
@property MRLayerEffect *effectLayer;
@property (readonly, nonatomic) BOOL isNative3D;
@property (readonly, nonatomic) BOOL isOpaque;
@property (readonly, nonatomic) BOOL isAlphaFriendly;
@property (readonly, nonatomic) BOOL isInfinite;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)cleanup;
- (void)unload;
- (void)cancelLoading;
- (BOOL)beginLiveUpdate;
- (void)_computeImageSizeInContext:(id)a0 withArguments:(id)a1;
- (void)_unloadIfNotUpdatingLive;
- (BOOL)endLiveUpdate;
- (void)imageIsAvailableFromAssetPlayer:(id)a0;
- (struct CGSize { double x0; double x1; })imageSizeForAspectRatio:(float)a0;
- (BOOL)isLoadedForTime:(double)a0;
- (void)loadForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2 now:(BOOL)a3;
- (void)loadWithArguments:(id)a0;
- (id)patchworkAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (BOOL)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (id)retainedByUserRenderedImageAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;

@end
