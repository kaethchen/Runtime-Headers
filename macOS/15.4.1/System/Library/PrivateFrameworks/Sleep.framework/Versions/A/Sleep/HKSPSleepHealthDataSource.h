@class HKSPSleepStore, HKProfileIdentifier, NSString;
@protocol HKFeatureAvailabilityHealthDataSource, HKSPFeatureAvailabilityPairedDeviceRegistry;

@interface HKSPSleepHealthDataSource : NSObject <HKFeatureAvailabilityHealthDataSource>

@property (readonly, nonatomic) id<HKSPFeatureAvailabilityPairedDeviceRegistry> pairedDeviceRegistry;
@property (readonly, weak, nonatomic) id<HKFeatureAvailabilityHealthDataSource> weakHealthDataSource;
@property (readonly, nonatomic) id<HKFeatureAvailabilityHealthDataSource> strongHealthDataSource;
@property (readonly, nonatomic) HKSPSleepStore *sleepStore;
@property (readonly, nonatomic) id<HKFeatureAvailabilityHealthDataSource> healthDataSource;
@property (readonly, nonatomic) HKProfileIdentifier *profileIdentifier;
@property (readonly, nonatomic) BOOL requiresWeakRetention;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)featureAvailabilityProvidingForFeatureIdentifier:(id)a0;
- (id)healthDataRequirementEvaluationProvider;
- (id)requirementSatisfactionOverridesDataSource;
- (id)sharedRequirementEvaluationDataSource;
- (id)userCharacteristicForDataType:(id)a0 error:(id *)a1;
- (id)watchLowPowerModeDataSource;
- (id)wristDetectionSettingManager;
- (id)initWithSleepStore:(id)a0 healthDataSource:(id)a1;
- (id)initWithSleepStore:(id)a0 healthDataSource:(id)a1 pairedDeviceRegistry:(id)a2;

@end
