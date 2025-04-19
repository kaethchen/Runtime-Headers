@class MLMultiArray, NSArray;

@interface CSUVisualGenerationTextEncoderV1NetworkOutput : NSObject

@property (readonly) MLMultiArray *lastHiddenLayerEmbedding;
@property (readonly) MLMultiArray *pooledCLIPLayerEmbedding;
@property (readonly) NSArray *maskIndices;

- (void).cxx_destruct;
- (id)initWithLastHiddenLayer:(const void *)a0 PooledCLIPEmbedding:(const void *)a1 MaskIndices:(const void *)a2;

@end
