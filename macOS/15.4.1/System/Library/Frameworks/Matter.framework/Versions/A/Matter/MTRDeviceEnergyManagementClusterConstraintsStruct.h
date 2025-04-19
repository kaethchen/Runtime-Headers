@class NSNumber;

@interface MTRDeviceEnergyManagementClusterConstraintsStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *startTime;
@property (copy, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSNumber *nominalPower;
@property (copy, nonatomic) NSNumber *maximumEnergy;
@property (copy, nonatomic) NSNumber *loadControl;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
