@class NSString;

@interface UINSApplicationSettingsDefaultsSettingsNode : UINSApplicationSettingsNode

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) id defaultValue;

- (void).cxx_destruct;
- (BOOL)_isUserSettable;
- (void)_copyIvarsToNewInstance:(id)a0;
- (id)_copyWithFilter:(long long)a0;
- (id)_initWithDictionary:(id)a0 stringsTableName:(id)a1 parentRootNode:(id)a2;
- (id)_initWithDictionary:(id)a0 stringsTableName:(id)a1 parentRootNode:(id)a2 fallbackDefaultValue:(id)a3;

@end
