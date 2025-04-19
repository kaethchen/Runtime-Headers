@class NSString, NSMeasurement, NSNumber, INSpeakableString;

@interface INSetClimateSettingsInCarIntent : INIntent <INSetClimateSettingsInCarIntentExport>

@property (readonly, copy) NSNumber *enableFan;
@property (readonly, copy) NSNumber *enableAirConditioner;
@property (readonly, copy) NSNumber *enableClimateControl;
@property (readonly, copy) NSNumber *enableAutoMode;
@property (readonly) long long airCirculationMode;
@property (readonly, copy) NSNumber *fanSpeedIndex;
@property (readonly, copy) NSNumber *fanSpeedPercentage;
@property (readonly) long long relativeFanSpeedSetting;
@property (readonly, copy) NSMeasurement *temperature;
@property (readonly) long long relativeTemperatureSetting;
@property (readonly) long long climateZone;
@property (readonly, copy) INSpeakableString *carName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)domain;
- (void)setDomain:(id)a0;
- (id)verb;
- (id)_dictionaryRepresentation;
- (void)setTemperature:(id)a0;
- (void)setCarName:(id)a0;
- (void)setVerb:(id)a0;
- (void)setClimateZone:(long long)a0;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithEnableFan:(id)a0 enableAirConditioner:(id)a1 enableClimateControl:(id)a2 enableAutoMode:(id)a3 airCirculationMode:(long long)a4 fanSpeedIndex:(id)a5 fanSpeedPercentage:(id)a6 relativeFanSpeedSetting:(long long)a7 temperature:(id)a8 relativeTemperatureSetting:(long long)a9 climateZone:(long long)a10;
- (id)initWithEnableFan:(id)a0 enableAirConditioner:(id)a1 enableClimateControl:(id)a2 enableAutoMode:(id)a3 airCirculationMode:(long long)a4 fanSpeedIndex:(id)a5 fanSpeedPercentage:(id)a6 relativeFanSpeedSetting:(long long)a7 temperature:(id)a8 relativeTemperatureSetting:(long long)a9 climateZone:(long long)a10 carName:(id)a11;
- (id)parametersByName;
- (void)setAirCirculationMode:(long long)a0;
- (void)setEnableAirConditioner:(id)a0;
- (void)setEnableAutoMode:(id)a0;
- (void)setEnableClimateControl:(id)a0;
- (void)setEnableFan:(id)a0;
- (void)setFanSpeedIndex:(id)a0;
- (void)setFanSpeedPercentage:(id)a0;
- (void)setParametersByName:(id)a0;
- (void)setRelativeFanSpeedSetting:(long long)a0;
- (void)setRelativeTemperatureSetting:(long long)a0;

@end
