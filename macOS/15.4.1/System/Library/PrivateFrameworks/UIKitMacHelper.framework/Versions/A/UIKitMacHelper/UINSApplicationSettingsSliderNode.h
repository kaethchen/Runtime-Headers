@interface UINSApplicationSettingsSliderNode : UINSApplicationSettingsDefaultsSettingsNode

@property (readonly, nonatomic) id minimumValue;
@property (readonly, nonatomic) id maximumValue;
@property (readonly, nonatomic) id minimumValueImageName;
@property (readonly, nonatomic) id maximumValueImageName;

- (void).cxx_destruct;
- (void)_copyIvarsToNewInstance:(id)a0;
- (id)_initWithDictionary:(id)a0 stringsTableName:(id)a1 parentRootNode:(id)a2;

@end
