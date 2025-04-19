@class NSDictionary, MOUserSafetyScanningPolicy;

@interface MOUserSafetyScanningPolicySettingMetadata : MOSettingMetadata

@property (readonly, nonatomic) long long interventionCombineOperator;
@property (readonly, nonatomic) NSDictionary *rankedInterventionTypes;
@property (readonly, nonatomic) unsigned long long maximumApplicationCount;
@property (readonly, nonatomic) MOUserSafetyScanningPolicy *defaultValue;

- (void).cxx_destruct;
- (id)_combine:(id)a0 with:(id)a1;
- (id)_combineInterventionType:(id)a0 with:(id)a1;
- (id)combinePersistableValue:(id)a0 with:(id)a1;
- (id)initWithSettingName:(id)a0 defaultPolicy:(id)a1 interventionCombineOperator:(long long)a2 rankedInterventionTypes:(id)a3 maximumApplicationCount:(unsigned long long)a4 isPublic:(BOOL)a5 scope:(id)a6 isPrivacySensitive:(BOOL)a7;
- (id)persistableValueFromValue:(id)a0;
- (id)sanitizePersistableValue:(id)a0;
- (id)valueFromPersistableValue:(id)a0;

@end
