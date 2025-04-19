@class NSDateInterval;

@interface RTTripSegmentMetadataFetchOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly) BOOL fetchRoadClass;
@property (readonly) BOOL fetchFormOfWay;
@property (readonly) BOOL fetchLocationType;
@property (readonly) BOOL fetchPreferredNames;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTripSegment:(id)a0;
- (BOOL)isEqualToFetchOptions:(id)a0;
- (id)initWithDateInterval:(id)a0 fetchRoadClass:(BOOL)a1 fetchFormOfWay:(BOOL)a2 fetchLocationType:(BOOL)a3 fetchPreferredNames:(BOOL)a4;
- (id)initWithTripSegment:(id)a0 fetchRoadClass:(BOOL)a1 fetchFormOfWay:(BOOL)a2 fetchLocationType:(BOOL)a3 fetchPreferredNames:(BOOL)a4;

@end
