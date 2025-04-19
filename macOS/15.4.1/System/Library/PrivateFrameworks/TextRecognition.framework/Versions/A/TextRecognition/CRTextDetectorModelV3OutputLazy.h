@class VisionCoreNamedObjects, VisionCoreE5RTInferenceFunctionDescriptor;

@interface CRTextDetectorModelV3OutputLazy : CRTextDetectorModelV3Output {
    VisionCoreNamedObjects *_outputObjects;
    VisionCoreE5RTInferenceFunctionDescriptor *_functionDescriptor;
}

- (void).cxx_destruct;
- (id)text_type_score;
- (id)initWithVisionCoreNamedObjects:(id)a0 fromFunctionDescriptor:(id)a1;
- (BOOL)isLazy;
- (id)link_score_horizontal;
- (id)link_score_vertical;
- (id)orientation_score;
- (id)region_score;
- (id)script_feature;
- (id)table_score;

@end
