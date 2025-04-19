@class ANSTViSegHQInferenceConfiguration, ANSTTensorDescriptor;

@interface ANSTViSegHQUpdateFramePostProcessor : ANSTInferencePostprocessor {
    ANSTTensorDescriptor *_key;
    ANSTTensorDescriptor *_value;
    void *_keyTensorSwapSpace;
    unsigned long long _keyTensorSwapSpaceSize;
    void *_valueTensorSwapSpace;
    unsigned long long _valueTensorSwapSpaceSize;
}

@property (readonly, nonatomic) ANSTViSegHQInferenceConfiguration *configuration;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (id)_inputTensorDataForDescriptor:(id)a0 error:(id *)a1;
- (id)_outputTensorDataForDescriptor:(id)a0 error:(id *)a1;
- (BOOL)_processKeyTensorWithInput:(id)a0 output:(id)a1 error:(id *)a2;
- (BOOL)_processValueTensorWithInput:(id)a0 output:(id)a1 error:(id *)a2;
- (id)initWithInferenceDescriptor:(id)a0 error:(id *)a1;
- (id)initWithInferenceInputDescriptors:(id)a0 inferenceOutputDescriptors:(id)a1 processedOutputDescriptors:(id)a2 error:(id *)a3;
- (BOOL)processWithError:(id *)a0;

@end
