@interface PIInpaintCombinedMaskNode : NURenderNode

@property (readonly, nonatomic) unsigned long long mode;

- (id)_evaluateImage:(out id *)a0;
- (id)_evaluateImageGeometry:(out id *)a0;
- (id)_evaluateImageProperties:(out id *)a0;
- (id)initWithSettings:(id)a0 inputs:(id)a1;
- (id)inputNode;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (BOOL)shouldCacheNodeForPipelineState:(id)a0;
- (id)_scaleImage:(id)a0 toSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithSettings:(id)a0 inputs:(id)a1 mode:(unsigned long long)a2;
- (id)maskImageForIdentifier:(id)a0 error:(out id *)a1;

@end
