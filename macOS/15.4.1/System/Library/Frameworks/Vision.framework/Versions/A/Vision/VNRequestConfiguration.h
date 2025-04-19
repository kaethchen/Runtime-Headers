@class VNProcessingDevice, NSDictionary, NSMutableDictionary;

@interface VNRequestConfiguration : NSObject <NSCopying> {
    NSMutableDictionary *_computeStageDeviceAssignments;
}

@property (readonly, nonatomic) Class requestClass;
@property (nonatomic) unsigned long long resolvedRevision;
@property (nonatomic) unsigned long long detectionLevel;
@property (nonatomic) unsigned long long metalContextPriority;
@property (nonatomic) unsigned long long modelExecutionPriority;
@property (nonatomic) BOOL preferBackgroundProcessing;
@property (nonatomic) unsigned long long modelFileBackingStore;
@property (nonatomic) unsigned long long maximumProcessingDimensionOnTheLongSide;
@property (nonatomic) unsigned long long memoryPoolId;
@property (copy, nonatomic) VNProcessingDevice *processingDevice;
@property (copy, nonatomic) NSDictionary *computeStageDeviceAssignments;
@property (readonly, copy, nonatomic) NSDictionary *resolvedComputeStageDeviceAssignments;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)computeDeviceForComputeStage:(id)a0;
- (id)initWithRequestClass:(Class)a0;
- (void)setComputeDevice:(id)a0 forComputeStage:(id)a1;

@end
