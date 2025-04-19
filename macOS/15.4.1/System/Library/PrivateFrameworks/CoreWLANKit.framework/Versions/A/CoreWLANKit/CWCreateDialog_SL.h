@class NSTextField, NSString, NSView, NSError, CWInterface, NSSecureTextField, NSPopUpButton, NSProgressIndicator, NSButton, NSImageView;

@interface CWCreateDialog_SL : NSWindowController <NSTextFieldDelegate> {
    BOOL _showingOpen;
    BOOL _showingPassword;
    BOOL _showingManual;
    NSTextField *windowTitleLabel;
    NSTextField *windowDescriptionLabel;
    NSButton *okButton;
    NSButton *cancelButton;
    NSView *securityTypeView;
    NSPopUpButton *securityTypePopupButton;
    NSView *channelSelectorView;
    NSPopUpButton *channelSelectorPopupButton;
    NSView *networkNameView;
    NSTextField *networkNameField;
    NSView *passwordView;
    NSSecureTextField *passwordField;
    NSSecureTextField *confirmPasswordField;
    NSTextField *securityText;
    NSTextField *statusMessageLabel;
    NSButton *warningButton;
    NSProgressIndicator *progressIndicator;
    NSButton *helpButton;
    NSImageView *imageView;
}

@property (retain) CWInterface *interface;
@property id delegate;
@property (copy) NSError *previousError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createDialogWithInterface:(id)a0;

- (void)dealloc;
- (void)close;
- (id)initWithInterface:(id)a0;
- (void)awakeFromNib;
- (void)controlTextDidChange:(id)a0;
- (void)windowDidLoad;
- (id)localizedStringForKey:(id)a0;
- (void)onCancelButton:(id)a0;
- (BOOL)validateEntries;
- (id)errorStringForErrorCode:(long long)a0;
- (void)expandFrameForManualConnectView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (void)expandFrameForPasswordView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (void)insertManualConnectView;
- (void)insertPasswordView;
- (void)onChannelPopupButton:(id)a0;
- (void)onHelpButton:(id)a0;
- (void)onOKButton:(id)a0;
- (void)onSecurityTypePopupButton:(id)a0;
- (void)populateIBSSChannels;
- (void)populateSecurityTypes;
- (void)removeManualConnectView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (void)removePasswordView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (void)resetSecurityEntries;
- (void)setSecurityTypeViewForTag:(long long)a0;
- (BOOL)validateSecurityTypeForTag:(long long)a0;

@end
