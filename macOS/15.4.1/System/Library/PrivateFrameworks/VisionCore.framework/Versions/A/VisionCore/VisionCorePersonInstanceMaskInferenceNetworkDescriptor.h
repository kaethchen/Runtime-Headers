@class NSArray;

@interface VisionCorePersonInstanceMaskInferenceNetworkDescriptor : VisionCoreE5RTInferenceFunctionDescriptor

@property (readonly, nonatomic) NSArray *personInstanceMasksOutput;
@property (readonly, nonatomic) NSArray *personInstanceMaskConfidencesOutput;

+ (id)modelFileURLForModelVersion:(unsigned long long)a0 error:(id *)a1;
+ (id)objectClassOutputNameForObjectClassID:(unsigned long long)a0 modelVersion:(unsigned long long)a1 error:(id *)a2;
+ (id)objectClassOutputNamesForObjectClassIDs:(unsigned long long)a0 modelVersion:(unsigned long long)a1 error:(id *)a2;
+ (id)personInstanceMaskForModelVersion:(unsigned long long)a0 computeDeviceType:(unsigned long long)a1 error:(id *)a2;

- (BOOL)isEqual:(id)a0;
- (id)objectMaskDescriptorsForObjectClassIDs:(unsigned long long)a0 error:(id *)a1;
- (id)objectMaskDescriptorsForObjectClassNames:(id)a0 error:(id *)a1;

@end
