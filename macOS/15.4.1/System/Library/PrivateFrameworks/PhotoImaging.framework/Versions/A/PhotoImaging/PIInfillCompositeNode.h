@interface PIInfillCompositeNode : NURenderNode

+ (id)applyDeltaKernel;
+ (id)computeDeltaKernel;

- (id)_evaluateImage:(out id *)a0;
- (BOOL)canPropagateOriginalAuxiliaryData:(long long)a0;
- (id)initWithSettings:(id)a0 inputs:(id)a1;
- (id)inputNode;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (BOOL)shouldCacheNodeForPipelineState:(id)a0;
- (id)backgroundNode;
- (id)initWithInput:(id)a0 background:(id)a1 matte:(id)a2 settings:(id)a3;
- (id)matteNode;

@end
