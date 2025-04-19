@class NSArray;

@interface VNFgBgE5MLInputTensors : NSObject

@property (readonly) NSArray *inputTensors;

- (void).cxx_destruct;
- (id)initWithTargetPoint:(struct CGPoint { double x0; double x1; })a0 queryNumber:(int)a1 maxSpatialLength:(int)a2 inputSize:(struct CGSize { double x0; double x1; })a3 radius:(int)a4 error:(id *)a5;
- (id)initWithTargetPointList:(const void *)a0 queryNumber:(int)a1 maxSpatialLength:(int)a2 inputSize:(struct CGSize { double x0; double x1; })a3 radius:(int)a4 error:(id *)a5;

@end
