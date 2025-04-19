@interface LACDTOBiometryWatchdog : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isRunning;
@property (readonly, nonatomic) double time;
@property (readonly, nonatomic) double minThreshold;
@property (readonly, nonatomic) double maxThreshold;
@property (readonly, nonatomic) BOOL isBarking;

+ (id)nullInstance;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIsRunning:(BOOL)a0 time:(double)a1 minThreshold:(double)a2 maxThreshold:(double)a3;

@end
