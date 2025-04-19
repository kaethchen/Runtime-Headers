@class NURenderNode;

@interface PIInpaintAuxiliaryImageNode : NURenderNode

@property (readonly, nonatomic) NURenderNode *inputNode;
@property (readonly, nonatomic) NURenderNode *retouchNode;

+ (id)styleTransferSettingsForGeometry:(id)a0;

- (BOOL)canPropagateOriginalAuxiliaryData:(long long)a0;
- (id)initWithSettings:(id)a0 inputs:(id)a1;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (BOOL)shouldCacheNodeForPipelineState:(id)a0;
- (id)initWithInputs:(id)a0 retouchNode:(id)a1 settings:(id)a2;

@end
