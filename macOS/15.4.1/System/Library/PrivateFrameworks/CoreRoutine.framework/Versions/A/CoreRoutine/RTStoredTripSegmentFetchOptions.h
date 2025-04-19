@class NSNumber, NSDateInterval;

@interface RTStoredTripSegmentFetchOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isAscending) BOOL ascending;
@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) NSNumber *limit;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAscending:(BOOL)a0 dateInterval:(id)a1 limit:(id)a2;
- (BOOL)isEqualToFetchOptions:(id)a0;

@end
