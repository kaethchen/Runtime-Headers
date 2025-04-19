@class NUImageTransformAffine;

@interface NUAffineTransformNode : NUTransformNode {
    NUImageTransformAffine *_transform;
}

- (void).cxx_destruct;
- (id)debugQuickLookObject;
- (id)_evaluateImage:(out id *)a0;
- (id)_evaluateImageGeometry:(out id *)a0;
- (id)_transformWithError:(out id *)a0;
- (id)initWithAffineTransform:(id)a0 input:(id)a1;
- (id)initWithSettings:(id)a0 inputs:(id)a1;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;

@end
