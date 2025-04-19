@class NSArray;

@interface UINSApplicationSettingsTitleValueNode : UINSApplicationSettingsDefaultsSettingsNode

@property (readonly, copy, nonatomic) NSArray *values;
@property (readonly, copy, nonatomic) NSArray *localizedValueTitles;

- (void).cxx_destruct;
- (BOOL)_isUserSettable;
- (void)_copyIvarsToNewInstance:(id)a0;
- (id)_initWithDictionary:(id)a0 stringsTableName:(id)a1 parentRootNode:(id)a2;

@end
