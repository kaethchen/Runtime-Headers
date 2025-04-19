@class NSTextField, NSString, NSSecureTextField, NSProgressIndicator, NSTouchBar, MMLinkTextField, iCloudTouchBarController, NSLayoutConstraint, NSImageView, NSButton;
@protocol MMCSCPassPhraseRecoveryViewControllerDelegate;

@interface MMCSCPassPhraseRecoveryViewController : NSViewController <NSTouchBarProvider, MMLinkTextFieldDelegate, MMCSCProgressIndicatorProtocol>

@property (copy) NSString *passPhrase;
@property (retain) iCloudTouchBarController *touchBarController;
@property id<MMCSCPassPhraseRecoveryViewControllerDelegate> delegate;
@property BOOL needsVerification;
@property BOOL showRandomView;
@property (weak) NSImageView *passPhraseImageView;
@property (weak) NSTextField *passPhraseTitle;
@property (weak) MMLinkTextField *passPhraseMessageTextField;
@property (weak) MMLinkTextField *passPhraseAlternateMessageTextField;
@property (weak) NSSecureTextField *passPhraseSecurityCodeTextField;
@property (weak) NSTextField *passPhraseRandomCodeTextField;
@property (weak) NSButton *passPhraseHelpButton;
@property (weak) NSButton *passPhraseConfirmButton;
@property (weak) NSButton *passPhraseCancelButton;
@property (weak) NSProgressIndicator *passPhraseProgressIndicator;
@property (weak) NSLayoutConstraint *showErrorConstraint;
@property (weak) NSLayoutConstraint *hideErrorConstraint;
@property (readonly) NSTouchBar *touchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)controlTextDidChange:(id)a0;
- (void)clickedOnLink:(id)a0;
- (void)cancelButtonClicked:(id)a0;
- (void)_clearSecureSecurityCode;
- (id)_securityCodeFromEntryField;
- (void)_showErrorMessage:(id)a0;
- (void)_showNormalMessage;
- (void)confirmButtonClicked:(id)a0;
- (id)forgotCodeAttributedString;
- (void)setupView:(long long)a0;
- (void)startCSCProgressIndicator:(id)a0;
- (void)stopCSCProgressIndicator:(id)a0;

@end
