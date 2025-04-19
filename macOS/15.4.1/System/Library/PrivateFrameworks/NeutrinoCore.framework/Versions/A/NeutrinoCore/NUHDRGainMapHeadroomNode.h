@interface NUHDRGainMapHeadroomNode : NURenderNode

+ (double)_updateContentHeadroom:(double)a0 withOffset:(double)a1;

- (id)_evaluateImage:(out id *)a0;
- (id)_evaluateAuxiliaryImageForType:(long long)a0 error:(out id *)a1;
- (id)_evaluateImageProperties:(out id *)a0;
- (double)headroomOffset;
- (id)initWithInput:(id)a0 settings:(id)a1;
- (id)initWithSettings:(id)a0 inputs:(id)a1;
- (id)inputNode;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (BOOL)shouldCacheNodeForPipelineState:(id)a0;

@end
