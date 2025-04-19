@interface ANSTISPInferencePostprocessor : ANSTInferencePostprocessor

@property (readonly, nonatomic) float smudgeConfidence;

- (id)semanticSegmentationMaskDescriptorOfCategory:(id)a0;
- (id)trackedObjectsOfCategory:(id)a0;

@end
