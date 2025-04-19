@class NSTextField, NSString, NSView, NSSecureTextField, NSMatrix, NSProgressIndicator, NSObject, NSLayoutConstraint, NSButton;
@protocol SSConnectionPromptObserver;

@interface SSConnectionAuthenticationViewController : NSViewController <NSTextFieldDelegate> {
    double toggleExpandAmount;
}

@property NSString *unlocalizedKeyString;
@property NSObject<SSConnectionPromptObserver> *promptObserver;
@property NSTextField *mHostNameLabel;
@property NSMatrix *mGuestOrUserMatrix;
@property NSView *mNamePassContainer;
@property NSLayoutConstraint *mNamePassTopConstraint;
@property NSLayoutConstraint *mNamePassBottomConstraint;
@property NSLayoutConstraint *mNamePassLeftConstraint;
@property NSLayoutConstraint *mNamePassRightConstraint;
@property NSTextField *mUsernameLabel;
@property NSTextField *mUsernameField;
@property NSTextField *mPasswordLabel;
@property NSSecureTextField *mPasswordField;
@property NSButton *mSaveToKeychainCheckbox;
@property NSButton *mConnectButton;
@property NSProgressIndicator *mConnectingProgressSpinner;
@property NSTextField *mConnectingText;
@property NSString *username;
@property NSString *password;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)awakeFromNib;
- (void)controlTextDidChange:(id)a0;
- (void)cancelClicked:(id)a0;
- (void)radioClicked:(id)a0;
- (void)connectClicked:(id)a0;
- (BOOL)shouldSaveCredentialsToKeychain;
- (void)adjustViewHeightBy:(double)a0;
- (void)setHostName:(id)a0 isVNC:(BOOL)a1;
- (void)setIsConnecting:(BOOL)a0;
- (void)setUsername:(id)a0 andPassword:(id)a1 fromKeychain:(BOOL)a2;
- (BOOL)shouldConnectAsGuest;
- (BOOL)userPassRadiosVisible;

@end
