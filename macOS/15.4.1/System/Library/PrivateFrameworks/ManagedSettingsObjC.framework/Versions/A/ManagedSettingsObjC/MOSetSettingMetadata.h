@class NSSet;

@interface MOSetSettingMetadata : MOSettingMetadata

@property (readonly, nonatomic) long long combineOperator;
@property (readonly, nonatomic) unsigned long long maximumCount;
@property (readonly, nonatomic) NSSet *defaultValue;

- (id)_combine:(id)a0 with:(id)a1;
- (id)combinePersistableValue:(id)a0 with:(id)a1;
- (id)initWithSettingName:(id)a0 defaultSet:(id)a1 combineOperator:(long long)a2 maximumCount:(unsigned long long)a3 isPublic:(BOOL)a4 scope:(id)a5 isPrivacySensitive:(BOOL)a6;
- (id)persistableValueFromValue:(id)a0;
- (id)sanitizePersistableValue:(id)a0;
- (id)valueFromPersistableValue:(id)a0;

@end
