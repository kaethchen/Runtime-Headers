@class NSDictionary, NUColorSpace, NURenderNode;

@interface NUStyleTransferNode : NURenderNode

@property (class, readonly, nonatomic) NSDictionary *defaultImageConfiguration;
@property (class, readonly, nonatomic) NSDictionary *defaultImageTuningParameters;
@property (class, readonly, nonatomic) NSDictionary *defaultVideoConfiguration;
@property (class, readonly, nonatomic) NSDictionary *defaultVideoTuningParameters;
@property (class, readonly, nonatomic) NSDictionary *semanticStyleImageConfiguration;
@property (class, readonly, nonatomic) NSDictionary *semanticStyleImageTuningParameters;
@property (class, readonly, nonatomic) NSDictionary *semanticStyleVideoConfiguration;
@property (class, readonly, nonatomic) NSDictionary *semanticStyleVideoTuningParameters;

@property (readonly, nonatomic) NSDictionary *configuration;
@property (readonly, nonatomic) NSDictionary *tuningParameters;
@property (readonly, nonatomic) NUColorSpace *targetColorSpace;
@property (readonly, nonatomic) NURenderNode *inputNode;
@property (readonly, nonatomic) NURenderNode *targetNode;

+ (id)defaultImageSettingsForScale:(struct { long long x0; long long x1; })a0;
+ (id)defaultVideoSettingsForScale:(struct { long long x0; long long x1; })a0;
+ (id)semanticStyleImageSettingsForScale:(struct { long long x0; long long x1; })a0;
+ (id)semanticStyleVideoSettingsForScale:(struct { long long x0; long long x1; })a0;
+ (id)thumbnailScalePolicyForConfiguration:(id)a0;

- (BOOL)shouldCache;
- (id)noiseModel;
- (id)uniqueInputNode;
- (id)_evaluateImage:(out id *)a0;
- (id)initWithInput:(id)a0 target:(id)a1 settings:(id)a2;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (BOOL)shouldCacheNodeForPipelineState:(id)a0;
- (id)thumbnailNode;

@end
