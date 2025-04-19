@class NSString, NSDictionary, MRImage, MRSlideProvider;

@interface MRFrame : NSObject <MRLoadable, MRRenderable> {
    NSDictionary *mDescription;
    MRSlideProvider *mSlideProvider;
    MRImage *mOutputImage;
    NSDictionary *mFlattenedAttributes;
}

@property (retain, nonatomic) MRImage *inputImage;
@property (readonly) NSString *frameID;
@property (retain, nonatomic) NSDictionary *attributes;
@property (nonatomic) struct CGSize { double width; double height; } pixelSize;
@property (readonly, nonatomic) BOOL isNative3D;
@property (readonly, nonatomic) BOOL isOpaque;
@property (readonly, nonatomic) BOOL isAlphaFriendly;
@property (readonly, nonatomic) BOOL isInfinite;

+ (id)retainedFrameWithFrameID:(id)a0 forSlideProvider:(id)a1;

- (void)dealloc;
- (void)cleanup;
- (void)unload;
- (void)cancelLoading;
- (id)initWithFrameID:(id)a0;
- (BOOL)isLoadedForTime:(double)a0;
- (BOOL)isRetainedBySlideProvider;
- (void)loadForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2 now:(BOOL)a3;
- (id)patchworkAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (BOOL)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)releaseBySlideProvider:(id)a0;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)retainBySlideProvider:(id)a0;
- (id)retainedByUserRenderedImageAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;

@end
