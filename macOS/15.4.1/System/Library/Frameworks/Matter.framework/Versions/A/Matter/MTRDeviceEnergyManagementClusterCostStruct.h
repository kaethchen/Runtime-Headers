@class NSNumber;

@interface MTRDeviceEnergyManagementClusterCostStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *costType;
@property (copy, nonatomic) NSNumber *value;
@property (copy, nonatomic) NSNumber *decimalPoints;
@property (copy, nonatomic) NSNumber *currency;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
