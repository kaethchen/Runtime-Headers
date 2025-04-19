@class NSString;

@interface UINSApplicationSettingsButtonNode : UINSApplicationSettingsNode <UINSApplicationSettingsConditionallyDisabledNode>

@property (readonly, nonatomic) NSString *localizedLabel;
@property (readonly, nonatomic) NSString *selector;
@property (readonly, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) NSString *disabledStateKey;
@property (readonly, nonatomic) NSString *localizedDisabledDescription;
@property (readonly, nonatomic) NSString *localizedConfirmationPrompt;
@property (readonly, nonatomic) NSString *localizedConfirmText;
@property (readonly, nonatomic) NSString *localizedDenyText;

- (void).cxx_destruct;
- (BOOL)_isUserSettable;
- (void)_copyIvarsToNewInstance:(id)a0;
- (id)_copyWithFilter:(long long)a0;
- (id)_initWithDictionary:(id)a0 stringsTableName:(id)a1 parentRootNode:(id)a2;

@end
