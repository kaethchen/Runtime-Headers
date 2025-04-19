@class NSUUID, HKWorkoutRoute, NSDateInterval;

@interface _HKWorkoutRouteQueryServerConfiguration : HKQueryServerConfiguration

@property (retain, nonatomic) HKWorkoutRoute *workoutRoute;
@property (copy, nonatomic) NSUUID *workoutUUID;
@property (copy, nonatomic) NSDateInterval *dateInterval;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
