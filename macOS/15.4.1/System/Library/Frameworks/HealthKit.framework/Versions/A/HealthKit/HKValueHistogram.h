@class NSArray, NSDateInterval;

@interface HKValueHistogram : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *segments;
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)totalSampleCount;
- (double)fractionOfValuesInSegmentAtIndex:(long long)a0;
- (id)initWithSegments:(id)a0 dateInterval:(id)a1;

@end
