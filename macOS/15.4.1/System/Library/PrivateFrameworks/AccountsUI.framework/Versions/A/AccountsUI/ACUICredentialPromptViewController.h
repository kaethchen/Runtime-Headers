@class NSWindow, NSString, NSView, NSPanel, ACUIWebAuthViewController, NSButton, ACUIWebLoginViewController;

@interface ACUICredentialPromptViewController : ACUIViewController <ACUIWebAuthDelegate, ACUIWebLoginDelegate, NSControlTextEditingDelegate>

@property BOOL isVerifyingCredential;
@property (retain) NSString *password;
@property (retain) NSPanel *passwordPanel;
@property (retain) NSButton *okButton;
@property (retain) NSView *webViewContainer;
@property (retain) NSPanel *webAuthPanel;
@property (retain) ACUIWebAuthViewController *webAuthVC;
@property (retain) ACUIWebLoginViewController *webLoginVC;
@property (retain) NSView *oauth2ViewContainer;
@property (retain) NSPanel *oauth2Panel;
@property (retain) NSButton *openSafariButton;
@property (retain) NSWindow *window;
@property (retain) NSWindow *sheet;
@property (copy) id /* block */ block;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)controlTextDidChange:(id)a0;
- (void)viewDidAppear;
- (id)initWithAccount:(id)a0;
- (void)cancelButton:(id)a0;
- (void)displayInWindow:(id)a0 completion:(id /* block */)a1;
- (void)_showAutoCompletePromptIfNeeded;
- (BOOL)willSaveAccount;
- (void)_displayAuthPromptInWindow:(id)a0 completion:(id /* block */)a1;
- (void)cancelAuthorization:(id)a0;
- (BOOL)disableAutoReload;
- (void)helpButton:(id)a0;
- (void)loginEndedWithError:(id)a0;
- (void)okButton:(id)a0;
- (void)saveAccountFailedWithError:(id)a0;
- (void)saveAccountSucceeded;
- (void)startWebAuthorization:(id)a0;
- (void)webAuthViewController:(id)a0 loginEndedWithError:(id)a1;
- (void)webLoginEndedWithError:(id)a0;

@end
