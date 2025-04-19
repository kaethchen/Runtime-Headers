@class NSTextField, NSBundle, NSString, NSLayoutConstraint, NSSecureTextField, NSButton;

@interface BrowserDataImportPasswordRequestPanelController : NSWindowController <NSTextFieldDelegate>

@property (weak, nonatomic) NSTextField *titleLabel;
@property (weak, nonatomic) NSTextField *explanationLabel;
@property (weak, nonatomic) NSTextField *wrongPasswordWarningLabel;
@property (weak, nonatomic) NSSecureTextField *passwordField;
@property (weak, nonatomic) NSButton *importPasswordsButton;
@property (retain, nonatomic) NSLayoutConstraint *warningLabelAndSecureTextFieldSpacingConstraint;
@property (readonly, nonatomic) NSBundle *importSource;
@property (readonly, nonatomic) long long requestReason;
@property (nonatomic) BOOL showsWrongPasswordWarning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)close:(id)a0;
- (id)initWithWindow:(id)a0;
- (void)_updateTitle;
- (void)controlTextDidChange:(id)a0;
- (void)windowDidLoad;
- (id)windowNibName;
- (void)_updateLabels;
- (void)_updateWrongPasswordWarning;
- (void)importClicked:(id)a0;
- (id)initWithImportSource:(id)a0;
- (id)initWithImportSource:(id)a0 reason:(long long)a1;
- (void)runModalPasswordRequestWithCompletionHandler:(id /* block */)a0;

@end
