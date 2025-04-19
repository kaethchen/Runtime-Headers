@interface _ANSTISPInferenceDescriptorV1 : ANSTISPInferenceDescriptor

+ (id)_assetURLForConfiguration:(id)a0 withError:(id *)a1;
+ (BOOL)_getInputDescriptors:(id *)a0 outputDescriptors:(id *)a1 forConfiguration:(id)a2 withError:(id *)a3;
+ (id)_nameForConfiguration:(id)a0 withError:(id *)a1;

- (id)outputHandAssociationDescriptor;
- (id)inputImageDescriptor;
- (id)inputLastMaskDescriptor;
- (id)inputLastSalientMaskDescriptor;
- (id)newPostprocessorWithError:(id *)a0;
- (id)outputBoxRegressionDescriptor;
- (id)outputCenternessDescriptor;
- (id)outputFaceAttributesDescriptor;
- (id)outputFaceLandmarkDescriptor;
- (id)outputFacePoseDescriptor;
- (id)outputHairMapDescriptor;
- (id)outputHandBoxRegressionDescriptor;
- (id)outputHandCenternessDescriptor;
- (id)outputHandLogitsDescriptor;
- (id)outputHandPoseDescriptor;
- (id)outputLogitsDescriptor;
- (id)outputPersonMapDescriptor;
- (id)outputPriorMaskMapDescriptor;
- (id)outputSaliencyDescriptor;
- (id)outputSalientFaceBoxRegressionDescriptor;
- (id)outputSalientFaceCenternessDescriptor;
- (id)outputSalientFaceLogitsDescriptor;
- (id)outputSalientPersonMapDescriptor;
- (id)outputSalientPersonPriorMaskDescriptor;
- (id)outputSemanticMapDescriptor;
- (id)outputSkinMapDescriptor;
- (id)outputSkinToneDescriptor;
- (id)outputSkyMapDescriptor;
- (id)outputSmudgeConfidenceDescriptor;
- (id)outputSubjectIDMapDescriptor;

@end
