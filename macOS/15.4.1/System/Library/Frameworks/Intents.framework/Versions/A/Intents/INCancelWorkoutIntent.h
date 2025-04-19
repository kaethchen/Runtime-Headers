@class INSpeakableString, NSString;

@interface INCancelWorkoutIntent : INIntent <INCancelWorkoutIntentExport>

@property (readonly, copy) INSpeakableString *workoutName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)domain;
- (void)setDomain:(id)a0;
- (id)verb;
- (id)_dictionaryRepresentation;
- (void)setVerb:(id)a0;
- (void)setWorkoutName:(id)a0;
- (BOOL)_intents_isExemptFromMulitWindowRequirementForInAppHandling;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithWorkoutName:(id)a0;
- (id)localizeValueOfSlotDescription:(id)a0 withLocalizer:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;

@end
