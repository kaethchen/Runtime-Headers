@class NSNumber;

@interface MTRZoneManagementClusterZoneInformationStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *zoneID;
@property (copy, nonatomic) NSNumber *zoneType;
@property (copy, nonatomic) NSNumber *zoneSource;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
