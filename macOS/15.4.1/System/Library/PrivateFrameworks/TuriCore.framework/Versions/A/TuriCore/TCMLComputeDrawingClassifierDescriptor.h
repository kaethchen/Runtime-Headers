@class NSDictionary, MLCTensor;

@interface TCMLComputeDrawingClassifierDescriptor : NSObject

@property (retain, nonatomic) MLCTensor *inputTensor;
@property (retain, nonatomic) MLCTensor *outputTensor;
@property (nonatomic) unsigned long long outputChannels;
@property (retain, nonatomic) NSDictionary *weights;

- (void).cxx_destruct;
- (BOOL)isComplete;
- (id)addConvLayer:(unsigned long long)a0 outputChannels:(unsigned long long)a1 source:(id)a2 graph:(id)a3;
- (id)addDenseLayer:(unsigned long long)a0 outputChannels:(unsigned long long)a1 source:(id)a2 graph:(id)a3;

@end
