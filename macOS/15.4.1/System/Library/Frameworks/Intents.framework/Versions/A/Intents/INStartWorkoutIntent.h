@class NSArray, NSString, INWorkoutCustomization, INSpeakableString, NSNumber;

@interface INStartWorkoutIntent : INIntent <INStartWorkoutIntentExport>

@property (readonly, copy) INSpeakableString *workoutName;
@property (readonly, copy) NSNumber *goalValue;
@property (readonly) long long workoutGoalUnitType;
@property (readonly) long long workoutLocationType;
@property (readonly, copy) NSNumber *isOpenEnded;
@property (copy) NSArray *associatedItems;
@property (copy) NSNumber *isBuiltInWorkoutType;
@property (copy) NSNumber *isVoiceOnly;
@property long long sequenceLabel;
@property (copy) INWorkoutCustomization *customization;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)_ignoredParameters;

- (id)domain;
- (void)setDomain:(id)a0;
- (id)verb;
- (id)_dictionaryRepresentation;
- (void)setGoalValue:(id)a0;
- (void)setVerb:(id)a0;
- (void)setWorkoutGoalUnitType:(long long)a0;
- (void)setWorkoutLocationType:(long long)a0;
- (id)_goalValueIntentSlotDescription;
- (long long)_intentCategory;
- (void)setIsOpenEnded:(id)a0;
- (void)setWorkoutName:(id)a0;
- (id)_categoryVerb;
- (id)_intents_backgroundHandlingAssertionForBundleIdentifier:(id)a0 context:(unsigned long long)a1 error:(id *)a2;
- (BOOL)_intents_isExemptFromMulitWindowRequirementForInAppHandling;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_titleWithLocalizer:(id)a0 fromBundleURL:(id)a1;
- (id)_typedBackingStore;
- (id)initWithWorkoutName:(id)a0 goalValue:(id)a1 workoutGoalUnitType:(long long)a2 workoutLocationType:(long long)a3 isOpenEnded:(id)a4;
- (id)localizeValueOfSlotDescription:(id)a0 withLocalizer:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;

@end
