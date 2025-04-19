@class _TtC17PasswordManagerUI30_PMMiniPasswordsViewController;
@protocol PMMiniPasswordsViewControllerDelegate;

@interface PMMiniPasswordsViewController : NSViewController <PasswordManagerUI._PMMiniPasswordsViewControllerDelegate> {
    _TtC17PasswordManagerUI30_PMMiniPasswordsViewController *_controller;
}

@property (weak, nonatomic) id<PMMiniPasswordsViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)loadView;
- (void)setExplicitAutoFillMode:(BOOL)a0;
- (void)setRemoteAppID:(id)a0;
- (void)passwordsViewController:(id)a0 fillPassword:(id)a1;
- (void)passwordsViewController:(id)a0 fillUsername:(id)a1;
- (void)passwordsViewController:(id)a0 fillVerificationCode:(id)a1;
- (void)passwordsViewControllerDidCancel:(id)a0;
- (void)setAutoFillMode:(unsigned long long)a0;
- (void)setExternallyVerifiedAndApprovedSharedWebCredentialsDomains:(id)a0;
- (void)setRemoteLocalizedAppName:(id)a0;
- (void)setRemoteUnlocalizedAppName:(id)a0;
- (void)passwordsViewController:(id)a0 selectedAccount:(id)a1;

@end
