@class NSArray, VisionCoreTensorDescriptor;

@interface VisionCoreSemanticSegmentationEspressoInferenceNetworkDescriptorV4 : VisionCoreEspressoNetworkDescriptor

@property (readonly, nonatomic) VisionCoreTensorDescriptor *personsMaskOutput;
@property (readonly, nonatomic) NSArray *humanAttributesMasksOutput;
@property (readonly, nonatomic) VisionCoreTensorDescriptor *skyMaskOutput;
@property (readonly, nonatomic) VisionCoreTensorDescriptor *glassesMaskOutput;

+ (id)objectClassOutputNameForObjectClassID:(unsigned long long)a0 error:(id *)a1;
+ (id)semanticSegmentationV4AndReturnError:(id *)a0;
+ (id)objectClassOutputNamesForObjectClassIDs:(unsigned long long)a0 error:(id *)a1;

- (BOOL)isEqual:(id)a0;

@end
