@interface UINSApplicationSettingsTextFieldNode : UINSApplicationSettingsDefaultsSettingsNode

@property (readonly, nonatomic, getter=isSecure) BOOL secure;

- (void)_copyIvarsToNewInstance:(id)a0;
- (id)_initWithDictionary:(id)a0 stringsTableName:(id)a1 parentRootNode:(id)a2;

@end
