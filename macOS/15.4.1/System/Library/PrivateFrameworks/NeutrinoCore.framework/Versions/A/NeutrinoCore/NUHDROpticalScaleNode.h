@interface NUHDROpticalScaleNode : NURenderNode

- (id)initWithInput:(id)a0 opticalScale:(double)a1;
- (id)initWithSettings:(id)a0 inputs:(id)a1;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (double)opticalScale;
- (BOOL)shouldCacheNodeForPipelineState:(id)a0;

@end
