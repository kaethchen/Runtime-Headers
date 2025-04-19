@class NSNumber;

@interface MTRDeviceEnergyManagementClusterSlotAdjustmentStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *slotIndex;
@property (copy, nonatomic) NSNumber *nominalPower;
@property (copy, nonatomic) NSNumber *duration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
