@interface PIPhotoEffect3DNode : PIPortraitNode

- (id)initWithSettings:(id)a0 inputs:(id)a1;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (BOOL)requiresVideoComposition;
- (id)initWithInput:(id)a0 blurMap:(id)a1 settings:(id)a2;

@end
