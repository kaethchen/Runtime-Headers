@class ANSTTensorDescriptor, ANSTISPInferenceConfiguration, ANSTPixelBufferDescriptor;

@interface ANSTISPInferenceDescriptor : ANSTInferenceDescriptor

@property (readonly, copy, nonatomic) ANSTISPInferenceConfiguration *configuration;
@property (readonly, copy, nonatomic) ANSTPixelBufferDescriptor *inputImageDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *inputLastMaskDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *inputLastSalientMaskDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputLogitsDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputCenternessDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputBoxRegressionDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputFacePoseDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputFaceAttributesDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputSkinToneDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputSubjectIDMapDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputHandLogitsDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputHandCenternessDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputHandBoxRegressionDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputHandPoseDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputSalientFaceLogitsDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputSalientFaceCenternessDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputSalientFaceBoxRegressionDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputFaceLandmarkDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputHandAssociationDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputSmudgeConfidenceDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputPriorMaskMapDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputPersonMapDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputSalientPersonMapDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputSkinMapDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputHairMapDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputSkyMapDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputSemanticMapDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputSaliencyDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputSalientPersonPriorMaskDescriptor;

+ (BOOL)supportsSecureCoding;
+ (id)_assetURLForConfiguration:(id)a0 withError:(id *)a1;
+ (id)_descriptorWithConfiguration:(id)a0 error:(id *)a1;
+ (BOOL)_getInputDescriptors:(id *)a0 outputDescriptors:(id *)a1 forConfiguration:(id)a2 withError:(id *)a3;
+ (id)_nameForConfiguration:(id)a0 withError:(id *)a1;
+ (id)descriptorWithConfiguration:(id)a0 error:(id *)a1;
+ (id)e5DescriptorWithConfiguration:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (id)initWithName:(id)a0 version:(unsigned long long)a1 assetURL:(id)a2 assetType:(long long)a3 e5FunctionName:(id)a4 inputDescriptors:(id)a5 outputDescriptors:(id)a6 error:(id *)a7;
- (id)newPostprocessorWithError:(id *)a0;
- (BOOL)requiresPostprocessing;

@end
