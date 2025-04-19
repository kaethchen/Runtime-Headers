@interface DRSDampeningConfiguration : NSObject

@property (nonatomic) double hysteresis;
@property (nonatomic) unsigned long long countCap;
@property (nonatomic) double acceptanceRate;

+ (id)_entityName;
+ (id)RMEIssueCategoryConfiguration;
+ (id)libtraceQuarantineConfiguration;
+ (id)memoryToolsDefaultConfiguration;
+ (id)abcDefaultConfiguration;
+ (id)appIntentsServicesSlowActivityConfiguration;
+ (id)caHitchesConfiguration;
+ (id)coreAudioOverloadConfiguration;
+ (id)defaultSignatureDampeningConfiguration;
+ (id)drmResourceUsageConfiguration;
+ (id)drmRogueTaskConfiguration;
+ (id)hangTracerNonWatchOSCustomerConfiguration;
+ (id)hangTracerNonWatchOSInternalDownsamplingConfiguration;
+ (id)hangTracerNonWatchOSInternalNoDownsamplingConfiguration;
+ (id)hangTracerNonWatchOSSeedConfiguration;
+ (id)hangTracerWatchOSInternalOrSeedDownsamplingConfiguration;
+ (id)hangTracerWatchOSInternalOrSeedNoDownsamplingConfiguration;
+ (id)libtraceLoggingSampleConfiguration;
+ (id)mailIssueCategoryConfiguration;
+ (id)memoryToolsInternalMemgraphOverTimeConfiguration;
+ (id)nandAutoGBBSweepConfiguration;
+ (id)nandDefaultConfiguration;
+ (id)newsConfiguration;
+ (id)pearlAFileBundleConfiguration;
+ (id)ppsArchiveConfiguration;
+ (id)ppsBGArchiveConfiguration;
+ (id)ppsCEArchiveConfiguration;
+ (id)ppsSafeguardArchiveConfiguration;
+ (id)ppsUpgradeArchiveConfiguration;
+ (id)ppsXCArchiveConfiguration;
+ (id)rapidMicroDiagnosticsConfiguration;
+ (id)sentryAppLaunchConfiguration;
+ (id)shareSheetMadRequestTimeoutConfiguration;
+ (id)shareSheetTimeoutConfiguration;
+ (id)skylightHitchesConfiguration;
+ (id)softwareUpdateLogoutInterruptedConfiguration;
+ (id)spindumpMacOSSlowHIDConfiguration_Internal;
+ (id)spindumpMacOSSlowHIDConfiguration_SeedRC;
+ (id)spindumpWorkflowResponsivenessConfiguration_External;
+ (id)spindumpWorkflowResponsivenessConfiguration_Internal;
+ (id)spotlightInternalWatchdogConfiguration;
+ (id)sqlQueryPerformanceConfiguration;
+ (id)watchdogdDefaultConfiguration;

- (id)debugDescription;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)_ON_MOC_QUEUE_moRepresentationInContext:(id)a0 identifier:(id)a1;
- (id)_initWithMO_ON_MOC_QUEUE:(id)a0;
- (id)initWithHysteresis:(double)a0 cap:(unsigned long long)a1 acceptanceRate:(double)a2;
- (id)initWithPlistDict:(id)a0;
- (BOOL)isEqualToDampeningConfiguration:(id)a0;
- (id)jsonCompatibleDictRepresentation;

@end
