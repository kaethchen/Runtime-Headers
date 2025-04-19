@class NSArray;

@interface VisionCorePersonInstanceMaskEspressoInferenceNetworkDescriptor : VisionCoreEspressoNetworkDescriptor

@property (readonly, nonatomic) NSArray *personInstanceMasksOutput;
@property (readonly, nonatomic) NSArray *personInstanceMaskConfidencesOutput;

+ (id)personInstanceMaskV1AndReturnError:(id *)a0;

- (BOOL)isEqual:(id)a0;

@end
