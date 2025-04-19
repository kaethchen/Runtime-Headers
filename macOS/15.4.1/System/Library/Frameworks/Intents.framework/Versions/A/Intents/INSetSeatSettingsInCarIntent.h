@class NSNumber, INSpeakableString, NSString;

@interface INSetSeatSettingsInCarIntent : INIntent <INSetSeatSettingsInCarIntentExport>

@property (readonly, copy) NSNumber *enableHeating;
@property (readonly, copy) NSNumber *enableCooling;
@property (readonly, copy) NSNumber *enableMassage;
@property (readonly) long long seat;
@property (readonly, copy) NSNumber *level;
@property (readonly) long long relativeLevelSetting;
@property (readonly, copy) INSpeakableString *carName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)domain;
- (void)setDomain:(id)a0;
- (void)setLevel:(id)a0;
- (id)verb;
- (id)_dictionaryRepresentation;
- (void)setCarName:(id)a0;
- (void)setVerb:(id)a0;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithEnableHeating:(id)a0 enableCooling:(id)a1 enableMassage:(id)a2 seat:(long long)a3 level:(id)a4 relativeLevelSetting:(long long)a5;
- (id)initWithEnableHeating:(id)a0 enableCooling:(id)a1 enableMassage:(id)a2 seat:(long long)a3 level:(id)a4 relativeLevelSetting:(long long)a5 carName:(id)a6;
- (id)parametersByName;
- (void)setEnableCooling:(id)a0;
- (void)setEnableHeating:(id)a0;
- (void)setEnableMassage:(id)a0;
- (void)setParametersByName:(id)a0;
- (void)setRelativeLevelSetting:(long long)a0;
- (void)setSeat:(long long)a0;

@end
