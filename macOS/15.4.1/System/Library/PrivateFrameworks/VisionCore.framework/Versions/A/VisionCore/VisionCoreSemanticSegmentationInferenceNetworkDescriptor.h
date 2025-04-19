@interface VisionCoreSemanticSegmentationInferenceNetworkDescriptor : VisionCoreE5RTInferenceFunctionDescriptor

+ (id)modelFileURLForModelVersion:(unsigned long long)a0 error:(id *)a1;
+ (id)objectClassNamesToObjectClassesDetectionStatusIndexes:(id)a0 modelVersion:(unsigned long long)a1 error:(id *)a2;
+ (id)objectClassOutputNameForObjectClassID:(unsigned long long)a0 modelVersion:(unsigned long long)a1 error:(id *)a2;
+ (id)objectClassOutputNamesForObjectClassIDs:(unsigned long long)a0 modelVersion:(unsigned long long)a1 error:(id *)a2;
+ (id)semanticSegmentationForModelVersion:(unsigned long long)a0 computeDeviceType:(unsigned long long)a1 error:(id *)a2;
+ (id)objectClassIDsToObjectClassesDetectionStatusIndexes:(unsigned long long)a0 modelVersion:(unsigned long long)a1 error:(id *)a2;

- (BOOL)isEqual:(id)a0;
- (id)objectMaskDescriptorsForObjectClassIDs:(unsigned long long)a0 error:(id *)a1;
- (id)objectMaskDescriptorsForObjectClassNames:(id)a0 error:(id *)a1;

@end
