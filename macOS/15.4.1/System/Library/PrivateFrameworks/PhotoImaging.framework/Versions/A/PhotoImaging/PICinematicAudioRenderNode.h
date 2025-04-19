@interface PICinematicAudioRenderNode : NURenderNode

@property (nonatomic) double dialogMixBias;
@property (nonatomic) long long renderingStyle;
@property (nonatomic) double cachedDialogMixBias;
@property (nonatomic) long long cachedRenderingStyle;

- (id)_evaluateVideo:(out id *)a0;
- (id)_evaluateAudioMix:(out id *)a0;
- (id)_evaluateVideoComposition:(out id *)a0;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (BOOL)requiresAudioMix;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (BOOL)shouldCacheNodeForPipelineState:(id)a0;
- (BOOL)shouldInvalidateCachedAudioMix;
- (id)initWithInput:(id)a0 dialogMixBias:(double)a1 renderingStyle:(id)a2;

@end
