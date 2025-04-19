@class ANSTVideoFoundationModelConfiguration, ANSTPixelBufferDescriptor, ANSTTensorDescriptor;

@interface ANSTVideoFoundationModel : ANSTAlgorithm {
    ANSTVideoFoundationModelConfiguration *_config;
    ANSTPixelBufferDescriptor *_inputImageDescriptor;
    ANSTTensorDescriptor *_outputFeatureDescriptor;
    struct e5rt_execution_stream { } *_stream;
    struct e5rt_execution_stream_operation { } *_operation;
    struct e5rt_io_port { } *_outputPort_imageFeature;
    struct e5rt_tensor_desc { } *_outputTensorDesc_imageFeature;
    struct e5rt_buffer_object { } *_outputBufferObject_imageFeature;
    struct __IOSurface { } *_outputFeatureSurface;
    BOOL _prepared;
}

@property (readonly, nonatomic) ANSTPixelBufferDescriptor *inputImageDescriptor;
@property (readonly, nonatomic) ANSTTensorDescriptor *outputFeatureDescriptor;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (BOOL)prepareWithError:(id *)a0;
- (BOOL)bindInputFrameBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (BOOL)executeInferenceWithError:(id *)a0;
- (struct __IOSurface { } *)outputFeatureSurfaceRef;

@end
