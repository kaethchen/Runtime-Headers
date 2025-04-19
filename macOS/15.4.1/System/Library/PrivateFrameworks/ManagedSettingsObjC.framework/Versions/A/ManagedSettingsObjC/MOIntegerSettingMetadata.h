@class NSNumber;

@interface MOIntegerSettingMetadata : MOSettingMetadata

@property (readonly, nonatomic) long long combineOperator;
@property (readonly, nonatomic) long long lowerBound;
@property (readonly, nonatomic) long long upperBound;
@property (readonly, nonatomic) NSNumber *defaultValue;

- (long long)_combine:(long long)a0 with:(long long)a1;
- (id)combinePersistableValue:(id)a0 with:(id)a1;
- (id)initWithSettingName:(id)a0 defaultInt:(long long)a1 combineOperator:(long long)a2 lowerBound:(long long)a3 upperBound:(long long)a4 isPublic:(BOOL)a5 scope:(id)a6 isPrivacySensitive:(BOOL)a7;
- (id)persistableValueFromValue:(id)a0;
- (id)sanitizePersistableValue:(id)a0;
- (id)valueFromPersistableValue:(id)a0;

@end
