@class ANSTViSegHQInferenceConfiguration, ANSTTensorDescriptor, ANSTPixelBufferDescriptor;

@interface ANSTViSegHQRegularFramePostProcessor : ANSTInferencePostprocessor {
    ANSTTensorDescriptor *_outputMatting;
    ANSTPixelBufferDescriptor *_outputMask;
}

@property (readonly, nonatomic) ANSTViSegHQInferenceConfiguration *configuration;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (id)initWithInferenceDescriptor:(id)a0 error:(id *)a1;
- (id)initWithInferenceInputDescriptors:(id)a0 inferenceOutputDescriptors:(id)a1 processedOutputDescriptors:(id)a2 error:(id *)a3;
- (BOOL)processWithError:(id *)a0;

@end
