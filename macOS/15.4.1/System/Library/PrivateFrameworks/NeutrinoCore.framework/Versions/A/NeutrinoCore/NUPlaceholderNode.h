@interface NUPlaceholderNode : NURenderNode

+ (id)emptyNode;

- (id)_evaluateImage:(out id *)a0;
- (id)initWithInputs:(id)a0;
- (id)_evaluateImageGeometryWithSourceOptions:(id)a0 error:(out id *)a1;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)a0 error:(out id *)a1;
- (id)_evaluateImageWithSourceOptions:(id)a0 subsampleFactor:(long long *)a1 error:(out id *)a2;
- (id)_evaluateVideoCompositionWithSourceOptions:(id)a0 error:(out id *)a1;
- (id)_evaluateVideoPropertiesWithSourceOptions:(id)a0 error:(out id *)a1;
- (id)initWithSettings:(id)a0 inputs:(id)a1;
- (BOOL)isPlaceholderNode;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;

@end
