@class NSImageView, NSTextField, NSString, NSURL, NSStackView, NSButton;

@interface AutoFillUsernameConfirmationDialog : NSViewController <NSControlTextEditingDelegate>

@property (weak) NSImageView *imageView;
@property (weak) NSTextField *mainLabel;
@property (weak) NSTextField *smallLabel;
@property (weak) NSTextField *usernameTextField;
@property (weak) NSTextField *passwordTextField;
@property (weak) NSStackView *buttonStackView;
@property (weak) NSButton *notNowButton;
@property (weak) NSButton *savePasswordButton;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSString *usernameSugggestion;
@property (readonly, copy, nonatomic) NSString *password;
@property (readonly, nonatomic) BOOL isGeneratedPassword;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)controlTextDidChange:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)doNotSave:(id)a0;
- (id)initWithURL:(id)a0 usernameSuggestion:(id)a1 password:(id)a2 isGeneratedPassword:(BOOL)a3 alertPresentationCompletionHandler:(id /* block */)a4;
- (void)savePassword:(id)a0;

@end
