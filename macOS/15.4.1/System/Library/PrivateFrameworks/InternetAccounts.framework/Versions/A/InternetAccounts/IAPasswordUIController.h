@class NSTextField, NSString, NSSecureTextField, NSProgressIndicator, IAAccount, NSDictionary, NSImage, NSImageView, NSButton;

@interface IAPasswordUIController : NSWindowController {
    NSTextField *_alertTitleField;
    NSTextField *_alertMessageField;
    NSSecureTextField *_passwordField;
    NSButton *_okButton;
    NSImageView *_icon;
    NSTextField *_statusText;
    NSProgressIndicator *_spinner;
    id /* block */ _completion;
    IAAccount *_parentAccount;
    NSString *_bundleID;
    NSString *_aListPluginID;
    NSString *_aListProviderID;
    NSString *_accountDescription;
    NSString *_userName;
    BOOL _isSheet;
    BOOL _accountSettingsValidForCompare;
    id _strongSelf;
}

@property (retain) NSString *uid;
@property (retain) NSDictionary *settings;
@property (readonly) NSString *password;
@property (retain) NSString *prepopulatedPassword;
@property (retain) NSString *customAppName;
@property (retain) NSImage *customIcon;
@property BOOL doCoalesce;
@property long long result;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)close;
- (void)dismiss;
- (void)done:(id)a0;
- (void)abort;
- (void)help:(id)a0;
- (BOOL)_getAccountInfo;
- (void)_configureUI;
- (void)_displayForWindow:(id)a0;
- (void)_notifyPlugins;
- (void)_passwordDidChange:(id)a0;
- (BOOL)_settingsAreSame:(id)a0;
- (void)authFailed:(id)a0;
- (void)displayForWindow:(id)a0 completion:(id /* block */)a1;

@end
