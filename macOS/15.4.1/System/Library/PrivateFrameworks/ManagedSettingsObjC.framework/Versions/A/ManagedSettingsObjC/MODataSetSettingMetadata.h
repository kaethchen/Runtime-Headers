@class NSSet;

@interface MODataSetSettingMetadata : MOSetSettingMetadata

@property (readonly, nonatomic) NSSet *defaultValue;

- (id)persistableValueFromValue:(id)a0;
- (id)sanitizePersistableValue:(id)a0;
- (id)valueFromPersistableValue:(id)a0;

@end
