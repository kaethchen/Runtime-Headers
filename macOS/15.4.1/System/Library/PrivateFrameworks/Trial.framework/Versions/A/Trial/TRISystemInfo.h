@class NSArray, NSString, NSDate;

@interface TRISystemInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isEnrolledInBetaProgram;
@property (retain, nonatomic) NSArray *enabledInputModeIdentifiers;
@property (nonatomic) BOOL logUserSettingsLanguageCode;
@property (nonatomic) BOOL logUserSettingsRegionCode;
@property (nonatomic) BOOL logUserKeyboardEnabledInputMode;
@property (retain, nonatomic) NSString *carrierBundleIdentifier;
@property (retain, nonatomic) NSString *carrierCountryIsoCode;
@property (nonatomic) BOOL isDiagnosticsAndUsageEnabled;
@property (nonatomic) BOOL hasAne;
@property (retain, nonatomic) NSString *aneVersion;
@property (retain, nonatomic) NSString *iCloudIdentifier;
@property (nonatomic) BOOL isAutomatedTestDevice;
@property (retain, nonatomic) NSString *siriUserActivitySegment;
@property (retain, nonatomic) NSDate *siriDeviceAggregationIdRotationDate;
@property (nonatomic) long long appleIntelligenceState;

+ (id)info;
+ (BOOL)_hasAne;
+ (id)_sysEnabledInputModeIdentifiers;
+ (id)_aneVersion;
+ (long long)_appleIntelligenceState;
+ (id)_carrierBundleIdentifier;
+ (id)_carrierCountryIsoCode;
+ (id)_iCloudIdentifier;
+ (BOOL)_isAutomatedTestDevice;
+ (BOOL)_isDiagnosticsAndUsageEnabled;
+ (BOOL)_isSeedBuild;
+ (BOOL)_isVirtualMachine;
+ (id)_persistentSystemInfoPath;
+ (id)_siriUserActivitySegment;
+ (BOOL)_sysIsEnrolledInBetaProgram;
+ (id)createSystemInfoWithFactorProvider:(id)a0;
+ (id)loadSystemInfo;
+ (id)systemInfoFromFile:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)save;
- (BOOL)saveToFile:(id)a0;
- (id)_getSiriDeviceAggregationIdRotationDate;
- (id)externalParamManager;
- (id)initFromSystemWithFactorProvider:(id)a0;

@end
