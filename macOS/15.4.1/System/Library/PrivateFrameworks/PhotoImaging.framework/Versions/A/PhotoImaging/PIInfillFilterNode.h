@interface PIInfillFilterNode : NURenderNode

@property (readonly, nonatomic) long long infillAlgorithm;

- (id)inputImage;
- (id)inputMatteImage;
- (id)_evaluateImage:(out id *)a0;
- (BOOL)canPropagateOriginalAuxiliaryData:(long long)a0;
- (id)initWithSettings:(id)a0 inputs:(id)a1;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (BOOL)shouldCacheNodeForPipelineState:(id)a0;
- (id)initWithInputImage:(id)a0 inputMatte:(id)a1 infillAlgorithm:(long long)a2;

@end
