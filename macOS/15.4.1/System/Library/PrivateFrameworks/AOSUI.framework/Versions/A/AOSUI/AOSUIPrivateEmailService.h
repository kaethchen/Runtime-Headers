@class AOSUIPrivateEmailController;

@interface AOSUIPrivateEmailService : MMService {
    AOSUIPrivateEmailController *_aosuiPrivateEmailController;
}

+ (BOOL)shouldShowForAccount:(id)a0;

- (void).cxx_destruct;
- (id)displayName;
- (id)icon;
- (void)showMoreInfo:(id)a0;
- (void)_displayErrorAlertIfNeeded:(id)a0;
- (void)_upgradeAccountWithCompletionHandler:(id /* block */)a0;
- (id)initWithServiceID:(id)a0 forAccount:(id)a1;
- (BOOL)shouldHideEnableButton;

@end
