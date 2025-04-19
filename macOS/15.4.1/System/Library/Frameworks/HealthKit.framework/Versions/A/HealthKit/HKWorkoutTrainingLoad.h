@class NSDateInterval, HKQuantity;

@interface HKWorkoutTrainingLoad : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) HKQuantity *quantity;
@property (readonly, copy) NSDateInterval *dateInterval;
@property (readonly) long long workoutsCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithQuantity:(id)a0 dateInterval:(id)a1;
- (id)initWithQuantity:(id)a0 dateInterval:(id)a1 count:(long long)a2;

@end
