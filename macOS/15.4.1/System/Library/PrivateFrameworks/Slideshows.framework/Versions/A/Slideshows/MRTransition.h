@class NSString, NSDictionary, MRImage, MRLayer;

@interface MRTransition : NSObject <MRLoadable, MRRenderable> {
    NSDictionary *mDescription;
    id mTransitioner;
    MRImage *mOutputImage;
    NSDictionary *mFlattenedAttributes;
    BOOL mNeedsToUpdateAttributes;
}

@property (copy) NSString *presetID;
@property (readonly) BOOL isSplit;
@property (retain) MRLayer *sourceLayer;
@property (retain) MRLayer *targetLayer;
@property (retain, nonatomic) MRImage *sourceLayerImage;
@property (retain, nonatomic) MRImage *targetLayerImage;
@property (readonly) NSString *transitionID;
@property (retain, nonatomic) NSDictionary *attributes;
@property (nonatomic) struct CGSize { double width; double height; } pixelSize;
@property (readonly) double progress;
@property (readonly, nonatomic) BOOL controlsLayersTime;
@property (readonly, nonatomic) BOOL noContentsMotion;
@property (readonly, nonatomic) BOOL needsSourceLayerImageForPrecomputing;
@property (readonly, nonatomic) BOOL needsTargetLayerImageForPrecomputing;
@property (readonly) BOOL supportsDirectionOverride;
@property (nonatomic) char direction;
@property (readonly, nonatomic) BOOL isNative3D;
@property (readonly, nonatomic) BOOL isOpaque;
@property (readonly, nonatomic) BOOL isAlphaFriendly;
@property (readonly, nonatomic) BOOL isInfinite;

+ (id)retainedTransitionWithTransitionID:(id)a0 forTransitioner:(id)a1;

- (void)dealloc;
- (void)cleanup;
- (void)unload;
- (BOOL)isTransitioning;
- (void)cancelLoading;
- (double)pzrEnd:(id)a0;
- (BOOL)dependsOnFingerPosition;
- (id)initWithTransitionID:(id)a0;
- (BOOL)isLoadedForTime:(double)a0;
- (BOOL)isRetainedByTransitioner;
- (void)loadForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2 now:(BOOL)a3;
- (id)patchworkAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (BOOL)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (double)pzrCancel:(id)a0;
- (double)pzrStart:(id)a0;
- (double)pzrUpdate:(id)a0;
- (void)releaseByTransitioner:(id)a0;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)retainByTransitioner:(id)a0;
- (id)retainedByUserRenderedImageAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;

@end
