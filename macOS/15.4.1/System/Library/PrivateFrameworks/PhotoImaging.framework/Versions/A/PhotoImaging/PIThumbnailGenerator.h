@class NSArray, NUImageBufferRenderRequest, _PIThumbnailGeneratorSnapshot, NUComposition, NSObject;
@protocol NUScalePolicy, OS_dispatch_queue;

@interface PIThumbnailGenerator : NSObject {
    NSArray *_unadjustedThumbnails;
    NUImageBufferRenderRequest *_renderRequest;
    NSObject<OS_dispatch_queue> *_queue;
    _PIThumbnailGeneratorSnapshot *_currentSnapshot;
}

@property (copy, nonatomic) NUComposition *composition;
@property (copy, nonatomic) NSArray *thumbnailTimes;
@property (retain, nonatomic) id<NUScalePolicy> thumbnailScalePolicy;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } referenceTime;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resultQueue;
@property (copy, nonatomic) id /* block */ partialResultHandler;

+ (void)_generateAdjustedThumbnailsWithSnapshot:(id)a0;
+ (void)_generateUnadjustedThumbnailsWithSnapshot:(id)a0 completion:(id /* block */)a1;
+ (id)_sourceFromResult:(id)a0;
+ (id)pipelineFiltersForAdjustedThumbnailRenderWithSource:(id)a0;
+ (id)pipelineFiltersForUnadjustedThumbnail;
+ (id)referenceSourceForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 thumbnailTimes:(id)a1 unadjustedSources:(id)a2;
+ (struct { long long x0; int x1; unsigned int x2; long long x3; })referenceTimeForTimes:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)cancelThumbnailGeneration;
- (void)_generateThumbnailsWithPendingSnapshot:(id)a0;
- (void)_generateThumbnailsWithSnapshot:(id)a0;
- (void)generateThumbnailsWithCompletion:(id /* block */)a0;
- (void)generateThumbnailsWithPendingSnapshot:(id)a0;
- (void)resetUnadjustedThumbnails;

@end
