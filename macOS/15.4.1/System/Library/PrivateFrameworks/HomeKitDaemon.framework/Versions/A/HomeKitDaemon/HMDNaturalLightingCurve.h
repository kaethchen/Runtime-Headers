@class NSArray, NSString;

@interface HMDNaturalLightingCurve : HMFObject <HMFLogging, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long colorTemperatureNotifyIntervalThresholdInMilliseconds;
@property unsigned long long colorTemperatureUpdateIntervalInMilliseconds;
@property unsigned long long colorTemperatureNotifyValueChangeThreshold;
@property (readonly) unsigned long long version;
@property (readonly, copy) NSArray *transitionPoints;
@property (readonly) long long minimumBrightness;
@property (readonly) long long maximumBrightness;
@property (readonly) long long minimumColorTemperature;
@property (readonly) long long maximumColorTemperature;
@property (readonly) unsigned long long checksum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (long long)colorTemperatureMiredsFromKelvins:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)attributeDescriptions;
- (id)colorTemperatureForBrightness:(long long)a0 millisecondsElapsedSinceStartOfDay:(unsigned long long)a1;
- (id)initWithCurve:(id)a0 minimumColorTemperature:(long long)a1 maximumColorTemperature:(long long)a2;
- (id)initWithVersion:(unsigned long long)a0 transitionPoints:(id)a1 minimumBrightness:(long long)a2 maximumBrightness:(long long)a3 minimumColorTemperature:(long long)a4 maximumColorTemperature:(long long)a5;
- (id)transitionPointsWithMillisecondsElapsedSinceStartOfDay:(unsigned long long)a0;

@end
