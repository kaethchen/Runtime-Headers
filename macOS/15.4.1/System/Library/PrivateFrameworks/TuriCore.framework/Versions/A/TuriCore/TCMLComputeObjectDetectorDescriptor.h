@class NSDictionary, MLCTensor;

@interface TCMLComputeObjectDetectorDescriptor : NSObject

@property (retain, nonatomic) MLCTensor *inputTensor;
@property (nonatomic) unsigned long long outputChannels;
@property (retain, nonatomic) NSDictionary *weights;

- (void).cxx_destruct;
- (BOOL)isComplete;
- (id)addCommonLayersWithIndex:(unsigned long long)a0 outputChannels:(unsigned long long)a1 source:(id)a2 graph:(id)a3;
- (id)batchNormLayerForIndex:(unsigned long long)a0;
- (id)convLayerForIndex:(unsigned long long)a0 outputChannels:(unsigned long long)a1;

@end
