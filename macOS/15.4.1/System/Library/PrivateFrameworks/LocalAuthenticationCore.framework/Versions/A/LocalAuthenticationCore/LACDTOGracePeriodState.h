@interface LACDTOGracePeriodState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double time;
@property (readonly, nonatomic) double maxThreshold;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) double duration;

+ (id)nullInstance;
+ (id)unlimitedGracePeriod;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTime:(double)a0 maxThreshold:(double)a1;

@end
