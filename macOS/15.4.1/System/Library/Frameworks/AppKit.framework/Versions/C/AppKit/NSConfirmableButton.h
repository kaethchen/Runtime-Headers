@class NSDictionary, NSString, NSUserDefaultsController;

@interface NSConfirmableButton : NSButton

@property (retain) NSDictionary *trueConfirmation;
@property (retain) NSDictionary *falseConfirmation;
@property (copy) NSString *keyPath;
@property (retain) NSUserDefaultsController *userDefaultsController;
@property (weak) id confirmationTarget;
@property SEL confirmationAction;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_askForConfirmation:(id)a0 completion:(id /* block */)a1;
- (void)confirmCheckBox:(id)a0;
- (void)confirmPushButton:(id)a0;

@end
