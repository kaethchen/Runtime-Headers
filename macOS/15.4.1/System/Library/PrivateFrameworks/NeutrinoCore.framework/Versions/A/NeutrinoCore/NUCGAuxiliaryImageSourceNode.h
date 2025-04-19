@class NUCGImageSourceNode;
@protocol NUAuxiliaryImageProperties;

@interface NUCGAuxiliaryImageSourceNode : NUSourceNode {
    long long _auxiliaryImageType;
}

@property (retain) NUCGImageSourceNode *sourceNode;
@property (readonly) long long auxiliaryImageType;
@property (readonly, nonatomic) id<NUAuxiliaryImageProperties> auxiliaryImageProperties;

- (void).cxx_destruct;
- (id)initWithSettings:(id)a0;
- (id)initWithSourceNode:(id)a0 auxiliaryImageType:(long long)a1 auxiliaryImageProperties:(id)a2;
- (id)_evaluateAuxiliaryImageForType:(long long)a0 error:(out id *)a1;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)a0 error:(out id *)a1;
- (id)_evaluateImageWithSourceOptions:(id)a0 subsampleFactor:(long long *)a1 error:(out id *)a2;
- (BOOL)canPropagateOriginalAuxiliaryData:(long long)a0;
- (id)pipelineOptionsForPipelineState:(id)a0 error:(out id *)a1;
- (struct { long long x0; long long x1; })pixelSizeWithSourceOptions:(id)a0;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (BOOL)shouldCacheNodeForPipelineState:(id)a0;
- (long long)sourceOrientation;
- (BOOL)supportsPipelineState:(id)a0 error:(out id *)a1;

@end
