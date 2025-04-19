@class NSString;

@interface CDPFollowUpContext : NSObject <NSSecureCoding> {
    unsigned long long _repairType;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long repairType;
@property (copy, nonatomic) NSString *telemetryDeviceSessionID;
@property (copy, nonatomic) NSString *telemetryFlowID;
@property (copy, nonatomic) NSString *followUpType;
@property (nonatomic) BOOL shouldNotify;
@property (nonatomic) BOOL force;
@property (copy, nonatomic) NSString *altDSID;

+ (id)contextForStateRepair;
+ (id)contextForCDPEDPStateRepair;
+ (id)contextForConfirmExistingSecret;
+ (id)contextForOfflinePasscodeChange;
+ (id)_contextWithType:(id)a0 cdpContext:(id)a1;
+ (id)contextForADPStateHealing;
+ (id)contextForADPUpsell;
+ (id)contextForEDPStateRepair;
+ (id)contextForRecoveryKeyMismatchHealing;
+ (id)contextForRecoveryKeyRepair;
+ (id)contextForSOSCompatibilityMode;
+ (id)contextForSecureTerms;
+ (id)contextForSettingUpBiometrics;
+ (id)contextForWalrusCreatePasscodeWithCDPContext:(id)a0;
+ (id)contextWithType:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
