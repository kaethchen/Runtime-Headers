@interface NUMaskSourceNode : NUCISourceNode

@property (readonly, nonatomic) struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; } croppedExtent;
@property (readonly, nonatomic) struct { long long x0; long long x1; } scale;

- (id)_evaluateImage:(out id *)a0;
- (id)_evaluateImageGeometryWithSourceOptions:(id)a0 error:(out id *)a1;
- (id)initWithImage:(id)a0 croppedExtent:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1 scale:(struct { long long x0; long long x1; })a2 identifier:(id)a3 orientation:(long long)a4;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (id)sourceImage:(out id *)a0;
- (BOOL)supportsPipelineState:(id)a0 error:(out id *)a1;

@end
