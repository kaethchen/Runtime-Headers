@interface NUTransformNode : NURenderNode

+ (id)transformNodeWithInput:(id)a0 transform:(id)a1 error:(out id *)a2;

- (id)_evaluateGeometrySpaceMap:(out id *)a0;
- (id)_transformWithError:(out id *)a0;
- (BOOL)canPropagateOriginalLivePhotoMetadataTrack;
- (id)descriptionSubClassHook;
- (BOOL)isGeometryNode;
- (BOOL)requiresVideoComposition;
- (BOOL)shouldCacheNodeForPipelineState:(id)a0;

@end
