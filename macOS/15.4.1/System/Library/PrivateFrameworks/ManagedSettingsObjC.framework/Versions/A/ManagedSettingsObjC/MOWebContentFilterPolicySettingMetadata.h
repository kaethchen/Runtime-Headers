@class MOWebContentFilterPolicy;

@interface MOWebContentFilterPolicySettingMetadata : MOSettingMetadata

@property (readonly, nonatomic) unsigned long long maximumAutoAllowCount;
@property (readonly, nonatomic) unsigned long long maximumNeverAllowCount;
@property (readonly, nonatomic) unsigned long long maximumOnlyAllowCount;
@property (readonly, nonatomic) MOWebContentFilterPolicy *defaultValue;

- (id)_combine:(id)a0 with:(id)a1;
- (id)combinePersistableValue:(id)a0 with:(id)a1;
- (id)initWithSettingName:(id)a0 defaultPolicy:(id)a1 maximumAutoAllowCount:(unsigned long long)a2 maximumNeverAllowCount:(unsigned long long)a3 maximumOnlyAllowCount:(unsigned long long)a4 isPublic:(BOOL)a5 scope:(id)a6 isPrivacySensitive:(BOOL)a7;
- (id)persistableValueFromValue:(id)a0;
- (id)sanitizePersistableValue:(id)a0;
- (id)valueFromPersistableValue:(id)a0;

@end
