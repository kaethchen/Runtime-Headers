@class NSNumber;

@interface MTRDeviceEnergyManagementClusterPowerAdjustStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *minPower;
@property (copy, nonatomic) NSNumber *maxPower;
@property (copy, nonatomic) NSNumber *minDuration;
@property (copy, nonatomic) NSNumber *maxDuration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
