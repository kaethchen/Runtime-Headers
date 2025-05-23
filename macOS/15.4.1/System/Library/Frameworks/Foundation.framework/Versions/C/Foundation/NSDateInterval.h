@class NSDate;

@interface NSDateInterval : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSDate *startDate;
@property (readonly, copy) NSDate *endDate;
@property (readonly) double duration;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)containsDate:(id)a0;
- (id)initWithStartDate:(id)a0 duration:(double)a1;
- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (id)intersectionWithDateInterval:(id)a0;
- (BOOL)intersectsDateInterval:(id)a0;
- (BOOL)isEqualToDateInterval:(id)a0;

@end
