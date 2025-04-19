@interface SMLocalSessionState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL unsupportedDeviceSeparationState;
@property (nonatomic) BOOL userDisabledConnectivity;
@property (nonatomic) BOOL separatedLPMConnectivityWarningState;

+ (long long)convertBoolToSMDeviceConfigurationLowPowerModeWarningState:(BOOL)a0;
+ (BOOL)convertSMDeviceConfigurationLPMToBool:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUnsupportedDeviceSeparationState:(BOOL)a0 userDisabledConnectivity:(BOOL)a1 separatedLPMConnectivityWarningState:(BOOL)a2;

@end
