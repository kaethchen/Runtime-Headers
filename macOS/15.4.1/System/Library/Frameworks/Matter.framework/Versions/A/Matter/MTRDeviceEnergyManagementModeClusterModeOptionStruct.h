@class NSString, NSNumber, NSArray;

@interface MTRDeviceEnergyManagementModeClusterModeOptionStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSNumber *mode;
@property (copy, nonatomic) NSArray *modeTags;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
