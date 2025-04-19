@class ANSTViSegHQInferenceConfiguration, ANSTPixelBufferDescriptor, ANSTTensorDescriptor;

@interface ANSTViSegHQRegularFrameInferenceDescriptor : ANSTInferenceDescriptor

@property (readonly, copy, nonatomic) ANSTViSegHQInferenceConfiguration *configuration;
@property (readonly, copy, nonatomic) ANSTPixelBufferDescriptor *inputImageDescriptor;
@property (readonly, copy, nonatomic) ANSTPixelBufferDescriptor *inputMattingDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *inputProbTensorDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *inputHiddenTensorDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *inputKeyTensorDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *inputValueTensorDescriptor;
@property (readonly, copy, nonatomic) ANSTPixelBufferDescriptor *outputMattingDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputProbTensorDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputHiddenTensorDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *inputMattingTensorDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputMattingTensorDescriptor;

+ (BOOL)supportsSecureCoding;
+ (id)assetURLForConfiguration:(id)a0;
+ (id)descriptorWithConfiguration:(id)a0 error:(id *)a1;
+ (id)e5DescriptorWithConfiguration:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 configuration:(id)a1 error:(id *)a2;
- (id)initWithName:(id)a0 version:(unsigned long long)a1 assetURL:(id)a2 assetType:(long long)a3 e5FunctionName:(id)a4 inputDescriptors:(id)a5 outputDescriptors:(id)a6 error:(id *)a7;
- (id)newPostprocessorWithError:(id *)a0;
- (BOOL)requiresPostprocessing;

@end
