@interface PIInpaintPlaceholderNode : NURenderNode

- (id)uniqueInputNode;
- (id)_evaluateImageGeometry:(out id *)a0;
- (id)_evaluateImageProperties:(out id *)a0;
- (BOOL)canPropagateOriginalAuxiliaryData:(long long)a0;
- (id)inputNode;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (BOOL)_needsInpaintWithAuxImageType:(long long)a0;

@end
