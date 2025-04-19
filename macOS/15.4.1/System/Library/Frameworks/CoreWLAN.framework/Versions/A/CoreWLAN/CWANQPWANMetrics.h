@interface CWANQPWANMetrics : CWANQPElement <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long linkStatus;
@property (nonatomic) BOOL hasSymmetricLink;
@property (nonatomic) BOOL isAtCapacity;
@property (nonatomic) long long downlinkSpeed;
@property (nonatomic) long long uplinkSpeed;
@property (nonatomic) long long downlinkLoad;
@property (nonatomic) long long uplinkLoad;
@property (nonatomic) long long loadMeasurementDuration;

+ (id)stringForWANMetricsLinkStatus:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNetwork:(id)a0 timestamp:(id)a1 anqpResult:(id)a2;

@end
