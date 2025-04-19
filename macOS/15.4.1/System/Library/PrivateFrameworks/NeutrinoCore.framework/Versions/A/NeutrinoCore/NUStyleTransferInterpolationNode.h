@interface NUStyleTransferInterpolationNode : NUStyleTransferNode

- (id)configuration;
- (unsigned long long)inputCount;
- (id)tuningParameters;
- (id)_evaluateImage:(out id *)a0;
- (id)initWithInputs:(id)a0 weights:(id)a1 settings:(id)a2;
- (id)initWithSettings:(id)a0 inputs:(id)a1;
- (float)interpolationWeightAtIndex:(unsigned long long)a0;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (id)styleInputAtIndex:(unsigned long long)a0;
- (id)targetColorSpace;

@end
