@class NSArray, NSNumber;

@interface MTRZoneManagementClusterZoneStoppedEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *zones;
@property (copy, nonatomic) NSNumber *reason;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
