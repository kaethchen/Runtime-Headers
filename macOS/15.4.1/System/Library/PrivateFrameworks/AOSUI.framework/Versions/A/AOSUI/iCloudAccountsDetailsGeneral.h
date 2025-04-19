@class NSView, NSString, NSTextField, CNAvatarViewController, iCloudNameFormatter, MM_Account, NSButton, MMWebKitViewController;
@protocol iCloudWebViewDelegate;

@interface iCloudAccountsDetailsGeneral : NSObject <CNAvatarViewDelegate, MMWebKitViewControllerDelegate> {
    NSView *_generalView;
    NSTextField *_appleIDLabel;
    NSTextField *_firstNameLabel;
    NSTextField *_lastNameLabel;
    NSTextField *_passwordLabel;
    NSTextField *_appleIDTF;
    NSTextField *_firstNameTF;
    NSTextField *_lastNameTF;
    NSButton *_changePasswordButton;
    NSButton *_signOutButton;
    NSButton *_OKButton;
    NSButton *_cancelButton;
    NSView *_imageWell;
    MMWebKitViewController *_webKitViewController;
    iCloudNameFormatter *_nameFormatter;
    BOOL nameDidModify;
    CNAvatarViewController *avatarViewController;
}

@property (readonly, nonatomic) CNAvatarViewController *avatarViewController;
@property MM_Account *account;
@property (copy) NSString *firstName;
@property (copy) NSString *lastName;
@property (copy) NSString *emailAddress;
@property id<iCloudWebViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (void)cancelPressed:(id)a0;
- (void)updateName:(id)a0;
- (void)OKPressed:(id)a0;
- (void)avatarViewController:(id)a0 contactAvatarDidChange:(id)a1;
- (void)changePassword:(id)a0;
- (void)_closeWebViewWindow;
- (void)mmWebKitViewControllerDidCancel:(id)a0;
- (void)mmWebKitViewControllerDidDismiss:(id)a0;
- (void)mmWebKitViewControllerDidFailLoading:(id)a0 error:(id)a1;
- (void)mmWebKitViewControllerDidFinishLoading:(id)a0;
- (void)mmWebKitViewControllerDidSucceed:(id)a0;
- (id)signedInGeneralTabView;
- (void)textChangeDidChange:(id)a0;

@end
