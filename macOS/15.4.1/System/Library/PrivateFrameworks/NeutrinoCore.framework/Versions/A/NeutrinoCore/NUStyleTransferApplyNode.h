@interface NUStyleTransferApplyNode : NUStyleTransferNode

- (id)configuration;
- (id)tuningParameters;
- (id)uniqueInputNode;
- (id)_evaluateImage:(out id *)a0;
- (id)initWithInput:(id)a0 thumbnail:(id)a1 target:(id)a2 settings:(id)a3;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (id)styleNode;
- (id)targetColorSpace;
- (id)thumbnailNode;

@end
