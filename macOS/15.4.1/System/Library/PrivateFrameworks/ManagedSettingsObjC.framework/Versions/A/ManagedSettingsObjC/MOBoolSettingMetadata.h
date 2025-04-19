@class NSNumber;

@interface MOBoolSettingMetadata : MOSettingMetadata

@property (readonly, nonatomic) long long combineOperator;
@property (readonly, nonatomic) NSNumber *defaultValue;

- (BOOL)_combine:(BOOL)a0 with:(BOOL)a1;
- (id)combinePersistableValue:(id)a0 with:(id)a1;
- (id)initWithSettingName:(id)a0 defaultBool:(BOOL)a1 combineOperator:(long long)a2 isPublic:(BOOL)a3 scope:(id)a4 isPrivacySensitive:(BOOL)a5;
- (id)persistableValueFromValue:(id)a0;
- (id)sanitizePersistableValue:(id)a0;
- (id)valueFromPersistableValue:(id)a0;

@end
