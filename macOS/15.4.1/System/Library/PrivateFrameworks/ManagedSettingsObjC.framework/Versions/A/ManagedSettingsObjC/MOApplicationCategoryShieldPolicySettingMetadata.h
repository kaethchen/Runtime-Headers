@class MOApplicationCategoryShieldPolicy;

@interface MOApplicationCategoryShieldPolicySettingMetadata : MOSettingMetadata

@property (readonly, nonatomic) unsigned long long maximumActivityCount;
@property (readonly, nonatomic) unsigned long long maximumCategoryCount;
@property (readonly, nonatomic) MOApplicationCategoryShieldPolicy *defaultValue;

- (id)_combine:(id)a0 with:(id)a1;
- (id)combinePersistableValue:(id)a0 with:(id)a1;
- (id)initWithSettingName:(id)a0 defaultPolicy:(id)a1 maximumCategoryCount:(unsigned long long)a2 maximumActivityCount:(unsigned long long)a3 isPublic:(BOOL)a4 scope:(id)a5 isPrivacySensitive:(BOOL)a6;
- (id)persistableValueFromValue:(id)a0;
- (id)sanitizePersistableValue:(id)a0;
- (id)valueFromPersistableValue:(id)a0;

@end
