@class NSString;

@interface UINSApplicationSettingsToggleSwitchNode : UINSApplicationSettingsDefaultsSettingsNode <UINSApplicationSettingsConditionallyDisabledNode>

@property (readonly, nonatomic) id trueValue;
@property (readonly, nonatomic) id falseValue;
@property (readonly, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) NSString *disabledStateKey;
@property (readonly, nonatomic) NSString *localizedDisabledDescription;
@property (readonly, nonatomic) NSString *localizedTrueConfirmationPrompt;
@property (readonly, nonatomic) NSString *localizedTrueConfirmText;
@property (readonly, nonatomic) NSString *localizedTrueDenyText;
@property (readonly, nonatomic) NSString *localizedFalseConfirmationPrompt;
@property (readonly, nonatomic) NSString *localizedFalseConfirmText;
@property (readonly, nonatomic) NSString *localizedFalseDenyText;

- (void).cxx_destruct;
- (void)_copyIvarsToNewInstance:(id)a0;
- (id)_initWithDictionary:(id)a0 stringsTableName:(id)a1 parentRootNode:(id)a2;

@end
