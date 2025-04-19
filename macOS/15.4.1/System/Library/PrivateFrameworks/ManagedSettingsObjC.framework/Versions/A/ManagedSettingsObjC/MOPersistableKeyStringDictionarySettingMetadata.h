@class NSDictionary;

@interface MOPersistableKeyStringDictionarySettingMetadata : MOSettingMetadata

@property (readonly, nonatomic) Class persistableKeyClass;
@property (readonly, nonatomic) long long combineOperator;
@property (readonly, nonatomic) NSDictionary *rankedAllowedValues;
@property (readonly, nonatomic) unsigned long long maximumCount;
@property (readonly, nonatomic) NSDictionary *defaultValue;

- (void).cxx_destruct;
- (id)_combine:(id)a0 with:(id)a1;
- (BOOL)_isAcceptablePersistedArrayElement:(id)a0;
- (BOOL)_isAcceptableStringValue:(id)a0;
- (id)combinePersistableValue:(id)a0 with:(id)a1;
- (id)initWithSettingName:(id)a0 defaultDictionary:(id)a1 persistableKeyClass:(Class)a2 combineOperator:(long long)a3 rankedAllowedValues:(id)a4 maximumCount:(unsigned long long)a5 isPublic:(BOOL)a6 scope:(id)a7 isPrivacySensitive:(BOOL)a8;
- (id)persistableValueFromValue:(id)a0;
- (id)sanitizePersistableValue:(id)a0;
- (id)valueFromPersistableValue:(id)a0;

@end
