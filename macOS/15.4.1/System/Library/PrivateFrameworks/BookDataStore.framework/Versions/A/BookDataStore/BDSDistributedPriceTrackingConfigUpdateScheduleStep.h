@interface BDSDistributedPriceTrackingConfigUpdateScheduleStep : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long duration;
@property (readonly, nonatomic) long long minUpdateInterval;
@property (readonly, nonatomic) long long schedulerConfigIdealInterval;
@property (readonly, nonatomic) long long schedulerConfigMinInterval;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDuration:(long long)a0 minUpdateInterval:(long long)a1 schedulerConfigIdealInterval:(long long)a2 schedulerConfigMinInterval:(long long)a3;
- (BOOL)isEqualToStep:(id)a0;

@end
