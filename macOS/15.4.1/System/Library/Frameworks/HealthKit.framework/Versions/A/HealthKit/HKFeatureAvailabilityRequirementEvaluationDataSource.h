@class HKFeatureAvailabilityProvidingDataSource, HKUserNotificationsDataSource, HKNanoRegistryPairingAndSwitchingNotificationDataSource, NSDate, HKFeatureStatusProvidingDataSource, HKFeatureAvailabilityRequirementSatisfactionOverridesDataSource, HKBluetoothDeviceDataSource, HKWatchAppInstallationDataSource, HKFeatureAvailabilityHealthDataRequirementDataSource, _HKBehavior, HKImportExclusionDeviceDataSource, HKUserDefaultsDataSource, HKDarwinNotificationDataSource, HKWristDetectionSettingDataSource, HKWatchLowPowerModeDataSource;
@protocol HKCurrentCountryCodeProvider, HKFeatureAvailabilityHealthDataSource, HKFeatureOnboardingRecordFallbackProviding;

@interface HKFeatureAvailabilityRequirementEvaluationDataSource : NSObject

@property (readonly, weak, nonatomic) id<HKFeatureAvailabilityHealthDataSource> weakHealthDataSource;
@property (readonly, nonatomic) id<HKFeatureAvailabilityHealthDataSource> strongHealthDataSource;
@property (copy, nonatomic) id /* block */ currentDateDataSource;
@property (retain, nonatomic) id<HKFeatureOnboardingRecordFallbackProviding> onboardingRecordFallbackProvider;
@property (readonly, nonatomic) HKFeatureAvailabilityHealthDataRequirementDataSource *healthDataRequirementDataSource;
@property (readonly, nonatomic) HKFeatureAvailabilityRequirementSatisfactionOverridesDataSource *requirementSatisfactionOverridesDataSource;
@property (readonly, nonatomic) HKFeatureAvailabilityProvidingDataSource *featureAvailabilityProvidingDataSource;
@property (readonly, nonatomic) HKFeatureStatusProvidingDataSource *featureStatusProvidingDataSource;
@property (readonly, nonatomic) HKBluetoothDeviceDataSource *bluetoothDeviceDataSource;
@property (readonly, nonatomic) HKUserDefaultsDataSource *privacyPreferencesDataSource;
@property (readonly, nonatomic) HKUserDefaultsDataSource *respiratoryPreferencesDataSource;
@property (readonly, nonatomic) HKUserDefaultsDataSource *ageGatingDataSource;
@property (readonly, nonatomic) HKUserDefaultsDataSource *userNotificationSettingsDataSource;
@property (readonly, nonatomic) HKWristDetectionSettingDataSource *wristDetectionSettingDataSource;
@property (readonly, nonatomic) HKNanoRegistryPairingAndSwitchingNotificationDataSource *devicePairingAndSwitchingNotificationDataSource;
@property (readonly, nonatomic) HKDarwinNotificationDataSource *darwinNotificationDataSource;
@property (readonly, nonatomic) HKWatchAppInstallationDataSource *watchAppInstallationDataSource;
@property (readonly, nonatomic) HKWatchLowPowerModeDataSource *watchLowPowerModeDataSource;
@property (readonly, nonatomic) HKUserNotificationsDataSource *userNotificationsDataSource;
@property (readonly, nonatomic) HKImportExclusionDeviceDataSource *importExclusionDeviceDataSource;
@property (readonly, nonatomic) id<HKCurrentCountryCodeProvider> currentCountryCodeProvider;
@property (readonly, nonatomic) _HKBehavior *behavior;
@property (readonly, nonatomic) NSDate *currentDate;

+ (id)dataSourceWithHealthDataSource:(id)a0;
+ (id)dataSourceWithHealthDataSource:(id)a0 currentCountryCodeProvider:(id)a1;
+ (id)dataSourceWithHealthDataSource:(id)a0 currentCountryCodeProvider:(id)a1 onboardingRecordFallbackProvider:(id)a2;
+ (id)dataSourceWithHealthDataSource:(id)a0 currentCountryCodeProvider:(id)a1 wristDetectionSettingManager:(id)a2 requirementSatisfactionOverridesDataSource:(id)a3 onboardingRecordFallbackProvider:(id)a4;

- (void).cxx_destruct;
- (id)currentCountryCode;
- (void)registerObserverForDeviceCharacteristicAndPairingChanges:(id)a0 block:(id /* block */)a1;
- (id)featureStatusForFeatureWithIdentifier:(id)a0 context:(id)a1 error:(id *)a2;
- (id)healthDataSource;
- (id)initWithHealthDataSource:(id)a0 bluetoothDeviceDataSource:(id)a1 privacyPreferencesDataSource:(id)a2 respiratoryPreferencesDataSource:(id)a3 ageGatingDataSource:(id)a4 userNotificationSettingsDataSource:(id)a5 wristDetectionSettingDataSource:(id)a6 devicePairingAndSwitchingNotificationDataSource:(id)a7 darwinNotificationDataSource:(id)a8 watchLowPowerModeDataSource:(id)a9 currentCountryCodeProvider:(id)a10 requirementSatisfactionOverridesDataSource:(id)a11 currentDateDataSource:(id /* block */)a12 watchAppInstallationDataSource:(id)a13 onboardingRecordFallbackProvider:(id)a14 userNotificationsDataSource:(id)a15;
- (id)initWithHealthDataSource:(id)a0 featureAvailabilityProvidingDataSource:(id)a1 featureStatusProvidingDataSource:(id)a2 bluetoothDeviceDataSource:(id)a3 privacyPreferencesDataSource:(id)a4 respiratoryPreferencesDataSource:(id)a5 ageGatingDataSource:(id)a6 userNotificationSettingsDataSource:(id)a7 wristDetectionSettingDataSource:(id)a8 devicePairingAndSwitchingNotificationDataSource:(id)a9 darwinNotificationDataSource:(id)a10 watchLowPowerModeDataSource:(id)a11 currentCountryCodeProvider:(id)a12 requirementSatisfactionOverridesDataSource:(id)a13 currentDateDataSource:(id /* block */)a14 watchAppInstallationDataSource:(id)a15 onboardingRecordFallbackProvider:(id)a16 userNotificationsDataSource:(id)a17 healthDataRequirementDataSource:(id)a18 importExclusionDeviceDataSource:(id)a19;
- (id)isWatchAppInstalledWithBundleIdentifier:(id)a0 error:(id *)a1;
- (id)onboardingEligibilityForFeatureWithIdentifier:(id)a0 countryCode:(id)a1 error:(id *)a2;
- (id)onboardingEligibilityForFeatureWithIdentifier:(id)a0 error:(id *)a1;
- (id)onboardingRecordForFeatureWithIdentifier:(id)a0 error:(id *)a1;
- (id)performLocalEvaluation:(id /* block */)a0;
- (id)regionAvailabilityForFeatureWithIdentifier:(id)a0 error:(id *)a1;
- (id)requirementSatisfactionOverridesForFeatureWithIdentifier:(id)a0;
- (void)unregisterObserverForDeviceCharacteristicAndPairingChanges:(id)a0;

@end
