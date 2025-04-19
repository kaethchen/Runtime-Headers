@class MLMultiArray;

@interface VNFgBgE5MLOutputs : NSObject

@property (readonly) MLMultiArray *segments;
@property (readonly) MLMultiArray *decodeMatch;
@property (readonly) MLMultiArray *predictionCocoConfidence;
@property (readonly) MLMultiArray *predictionMiyoshiConfidence;
@property (readonly) MLMultiArray *predictionIoU;
@property (readonly) MLMultiArray *stabilityScore;

- (void).cxx_destruct;
- (id)initWithOutputs:(id)a0 descriptor:(id)a1;

@end
