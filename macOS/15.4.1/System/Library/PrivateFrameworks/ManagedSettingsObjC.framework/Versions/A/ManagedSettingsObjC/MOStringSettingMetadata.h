@class NSDictionary, NSString;

@interface MOStringSettingMetadata : MOSettingMetadata

@property (readonly, nonatomic) long long combineOperator;
@property (readonly, nonatomic) NSDictionary *rankedAllowedValues;
@property (readonly, nonatomic) NSString *defaultValue;

- (void).cxx_destruct;
- (id)_combine:(id)a0 with:(id)a1;
- (id)combinePersistableValue:(id)a0 with:(id)a1;
- (id)initWithSettingName:(id)a0 defaultString:(id)a1 combineOperator:(long long)a2 rankedAllowedValues:(id)a3 isPublic:(BOOL)a4 scope:(id)a5 isPrivacySensitive:(BOOL)a6;
- (id)persistableValueFromValue:(id)a0;
- (id)sanitizePersistableValue:(id)a0;
- (id)valueFromPersistableValue:(id)a0;

@end
