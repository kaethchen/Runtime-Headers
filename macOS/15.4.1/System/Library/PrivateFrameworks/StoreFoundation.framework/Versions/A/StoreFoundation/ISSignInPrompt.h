@class NSTextField, NSString, NSURL, NSButton, ISAuthenticationContext, NSProgressIndicator, ISDialog, NSWindow, ISStoreClient, NSNumber, NSImageView;

@interface ISSignInPrompt : NSWindowController {
    NSTextField *titleField;
    NSTextField *messageField;
    NSImageView *imageView;
    NSButton *defaultButton;
    NSButton *otherButton;
    NSButton *alternateButton;
    NSButton *forgotButton;
    NSButton *helpButton;
    NSProgressIndicator *progressIndicator;
    NSTextField *usernameField;
    NSTextField *passwordField;
    NSTextField *errorField;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } windowFactoryFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } titleFieldFactoryFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } defaultButtonFactoryFrame;
    long long attempts;
    long long mExitCode;
}

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *suppressionCheckboxTitle;
@property (retain, nonatomic) NSNumber *suppressionCheckboxState;
@property BOOL forceActivate;
@property (readonly) NSString *password;
@property (readonly) id authentication;
@property (retain, nonatomic) NSURL *authenticateAccountURL;
@property (retain, nonatomic) ISAuthenticationContext *context;
@property (retain, nonatomic) ISStoreClient *storeClient;
@property (retain, nonatomic) ISDialog *dialog;
@property (retain, nonatomic) NSWindow *sheetWindow;
@property BOOL usernameFieldIsEnabled;

- (void).cxx_destruct;
- (void)setOtherButtonTitle:(id)a0;
- (void)_prepare;
- (void)awakeFromNib;
- (void)controlTextDidChange:(id)a0;
- (void)setDefaultButtonTitle:(id)a0;
- (void)setAlternateButtonTitle:(id)a0;
- (void)setTitleString:(id)a0;
- (void)alternateButtonAction:(id)a0;
- (void)_dismissPanelWithCode:(long long)a0;
- (void)forgotPassword:(id)a0;
- (void)_alertSheetDidDismiss:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (void)_alertSheetDidEnd:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (void)_beginAuthDialogWithCompletionHandler:(id /* block */)a0;
- (void)_beginDialogWithCompletionHandler:(id /* block */)a0;
- (id)_customIconImage;
- (void)_handleError:(id)a0 returnCode:(long long)a1;
- (void)_hideProgressIndicator;
- (void)_prepareAK:(id)a0;
- (void)_setButtonState:(id)a0 withString:(id)a1;
- (void)_showError:(id)a0;
- (void)_showProgressIndicator:(id)a0;
- (void)beginDialogWithCompletionHandler:(id /* block */)a0;
- (void)defaultButtonAction:(id)a0;
- (void)helpButtonAction:(id)a0;
- (id)initWithDialog:(id)a0 storeClient:(id)a1;
- (void)otherButtonAction:(id)a0;
- (void)setMessageString:(id)a0;

@end
