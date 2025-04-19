@class HKQuantity;

@interface HKHearingLevelMetrics : NSObject

@property (readonly, copy, nonatomic) HKQuantity *averageSensitivity;
@property (readonly, copy, nonatomic) HKQuantity *minimumSensitivity;
@property (readonly, copy, nonatomic) HKQuantity *maximumSensitivity;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAverageSensitivity:(id)a0 minimumSensitivity:(id)a1 maximumSensitivity:(id)a2;

@end
