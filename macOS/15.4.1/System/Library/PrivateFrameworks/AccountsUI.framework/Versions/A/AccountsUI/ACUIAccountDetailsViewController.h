@class NSTextField, NSString, NSButton, NSProgressIndicator, NSStackView, NSWindow;

@interface ACUIAccountDetailsViewController : ACUIViewController <NSControlTextEditingDelegate>

@property (retain) NSWindow *window;
@property (retain) NSWindow *sheet;
@property (retain) NSString *password;
@property (retain) NSStackView *stackView;
@property (retain) NSTextField *usernameLabel;
@property (retain) NSTextField *fullNameField;
@property (retain) NSTextField *descriptionField;
@property (retain) NSButton *okButton;
@property (retain) NSProgressIndicator *spinner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)ok:(id)a0;
- (void)cancel:(id)a0;
- (void)controlTextDidChange:(id)a0;
- (void)displayInWindow:(id)a0;
- (void)saveAccount:(id)a0;
- (void)saveAccountFailedWithError:(id)a0;
- (void)saveAccountSucceeded;

@end
