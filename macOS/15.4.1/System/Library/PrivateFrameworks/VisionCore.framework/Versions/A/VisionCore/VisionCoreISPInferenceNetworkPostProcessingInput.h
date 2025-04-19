@class VisionCoreNamedObjects;

@interface VisionCoreISPInferenceNetworkPostProcessingInput : NSObject

@property (readonly, nonatomic) struct __CVBuffer { } *inputImageBuffer;
@property (readonly, nonatomic) unsigned int inputImageOrientation;
@property (readonly, nonatomic) VisionCoreNamedObjects *inferenceOutputNamedObjects;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithInputImageBuffer:(struct __CVBuffer { } *)a0 inputImageOrientation:(unsigned int)a1 inferenceOutputNamedObjects:(id)a2;

@end
