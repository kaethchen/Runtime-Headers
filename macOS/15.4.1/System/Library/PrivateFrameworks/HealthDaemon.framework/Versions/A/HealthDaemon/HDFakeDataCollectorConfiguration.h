@class HKQuantity;

@interface HDFakeDataCollectorConfiguration : NSObject <NSCopying>

@property (nonatomic) long long activityType;
@property (copy, nonatomic) HKQuantity *speed;

+ (id)configurationForWorkoutActivityType:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
