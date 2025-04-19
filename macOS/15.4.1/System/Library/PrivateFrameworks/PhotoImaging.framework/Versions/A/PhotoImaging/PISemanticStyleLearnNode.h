@interface PISemanticStyleLearnNode : PISemanticStyleRenderNode

- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (id)styleSettingsForPipelineState:(id)a0;
- (id)thumbnailSettingsWithStyleSettings:(id)a0 thumbnailSize:(struct { long long x0; long long x1; })a1;

@end
