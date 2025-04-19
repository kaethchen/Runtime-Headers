@class NSNumber;

@interface MTROccupancySensingClusterOccupancyChangedEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *occupancy;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
