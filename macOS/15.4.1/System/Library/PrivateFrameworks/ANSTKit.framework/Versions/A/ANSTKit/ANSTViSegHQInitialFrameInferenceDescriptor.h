@class ANSTViSegHQInferenceConfiguration, ANSTPixelBufferDescriptor, ANSTTensorDescriptor;

@interface ANSTViSegHQInitialFrameInferenceDescriptor : ANSTInferenceDescriptor

@property (readonly, copy, nonatomic) ANSTViSegHQInferenceConfiguration *configuration;
@property (readonly, copy, nonatomic) ANSTPixelBufferDescriptor *inputImageDescriptor;
@property (readonly, copy, nonatomic) ANSTPixelBufferDescriptor *inputMaskDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *inputHiddenTensorDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputHiddenTensorDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputKeyTensorDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputValueTensorDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *inputMaskTensorDescriptor;

+ (BOOL)supportsSecureCoding;
+ (id)assetURLForConfiguration:(id)a0;
+ (id)descriptorWithConfiguration:(id)a0 error:(id *)a1;
+ (id)e5DescriptorWithConfiguration:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 configuration:(id)a1 error:(id *)a2;
- (id)initWithName:(id)a0 version:(unsigned long long)a1 assetURL:(id)a2 assetType:(long long)a3 e5FunctionName:(id)a4 inputDescriptors:(id)a5 outputDescriptors:(id)a6 error:(id *)a7;
- (id)newPostprocessorWithError:(id *)a0;
- (BOOL)requiresPostprocessing;

@end
