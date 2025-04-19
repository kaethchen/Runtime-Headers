@class NSString, NSUserDefaultsController, NSControlStateValueTransformer;

@interface UINSPreferencesConfirmableButton : NSButton

@property (retain) NSString *localizedTrueConfirmationPrompt;
@property (retain) NSString *localizedTrueConfirmText;
@property (retain) NSString *localizedTrueDenyText;
@property (retain) NSString *localizedFalseConfirmationPrompt;
@property (retain) NSString *localizedFalseConfirmText;
@property (retain) NSString *localizedFalseDenyText;
@property (copy) NSString *keyPath;
@property (retain) NSUserDefaultsController *userDefaultsController;
@property (retain) NSControlStateValueTransformer *valueTransformer;
@property (weak) id confirmationTarget;
@property SEL confirmationAction;

- (void).cxx_destruct;
- (void)confirmCheckBox:(id)a0;
- (void)confirmPushButton:(id)a0;
- (void)_setUserDefaultForControlState:(long long)a0;
- (void)_askForConfirmationWithPrompt:(id)a0 confirmText:(id)a1 denyText:(id)a2 completion:(id /* block */)a3;

@end
