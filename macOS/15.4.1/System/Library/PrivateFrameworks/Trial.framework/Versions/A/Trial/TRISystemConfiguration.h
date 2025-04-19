@class NSString;

@interface TRISystemConfiguration : NSObject {
    NSString *_persistentDeviceIdentifierPath;
    NSString *_cachedDeviceIdentifier;
}

+ (id)sharedInstance;
+ (id)_sharedSystemInfo;

- (id)init;
- (void).cxx_destruct;
- (id)osBuild;
- (BOOL)setDeviceIdentifier:(id)a0;
- (id)deviceClass;
- (BOOL)isInternalBuild;
- (id)osType;
- (id)deviceId;
- (id)deviceModelCode;
- (id)initWithPaths:(id)a0;
- (BOOL)isBetaBuild;
- (id)systemInfo;
- (BOOL)isDiagnosticsAndUsageEnabled;
- (id)aneVersion;
- (long long)appleIntelligenceState;
- (id)carrierBundleIdentifier;
- (id)carrierCountryIsoCode;
- (BOOL)isAutomatedTestDevice;
- (id)userSettingsLanguageCode;
- (id)userSettingsRegionCode;
- (id)createDeviceIdentifierWithPath:(id)a0;
- (BOOL)deleteDeviceIdentifierWithPath:(id)a0;
- (id)trialVersionTag;
- (id)_dispatchQueueForCarrierInfoGathering;
- (id)_systemInfoWithIsStale:(BOOL *)a0;
- (id)_trialVersion;
- (BOOL)_updateSystemInfo:(id)a0;
- (id)createPersistentDeviceIdentifier;
- (BOOL)deleteDeviceIdentifier;
- (id)deviceInfoForQuestion:(id)a0;
- (id)enabledInputModeIdentifiers;
- (BOOL)hasAne;
- (id)iCloudId;
- (BOOL)isBetaUserWithIsStale:(BOOL *)a0;
- (struct { long long x0; long long x1; long long x2; })marketingOSVersion;
- (int)populationType;
- (id)readDeviceIdentifierWithPath:(id)a0;
- (id)reloadDeviceId;
- (id)reloadSystemInfo;
- (BOOL)resetDeviceIdentifier;
- (BOOL)setDeviceIdentifier:(id)a0 path:(id)a1;
- (id)siriDeviceAggregationIdRotationDate;
- (id)siriUserActivitySegment;
- (id)storedDeviceIdentifier;
- (unsigned long long)trialVersionMajor;
- (unsigned long long)trialVersionMinor;
- (id)userSettingsBCP47DeviceLocale;

@end
