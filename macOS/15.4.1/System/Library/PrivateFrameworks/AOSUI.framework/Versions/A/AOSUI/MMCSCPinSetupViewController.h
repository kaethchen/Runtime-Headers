@class NSTextField, NSString, NSView, MMPinFieldView, NSTouchBar, iCloudTouchBarController, NSLayoutConstraint, NSImageView, NSButton;
@protocol MMCSCPinSetupViewControllerDelegate;

@interface MMCSCPinSetupViewController : NSViewController <NSTouchBarProvider, MMPinFieldViewDelegate> {
    long long _currentState;
}

@property (retain) MMPinFieldView *pinViewPinFieldView;
@property (copy) NSString *initialPassPhrase;
@property (copy) NSString *passPhrase;
@property BOOL usingNumericPassphrase;
@property int numericPassphraseLength;
@property (retain) iCloudTouchBarController *touchBarController;
@property id<MMCSCPinSetupViewControllerDelegate> delegate;
@property (weak) NSImageView *pinViewImageView;
@property (weak) NSTextField *pinViewTitle;
@property (weak) NSTextField *pinViewMessage;
@property (weak) NSView *pinViewPinFieldPlaceholder;
@property (weak) NSLayoutConstraint *pinViewPinFieldWidthConstraint;
@property (weak) NSTextField *pinViewEnterLabelText;
@property (weak) NSButton *pinViewHelpButton;
@property (weak) NSButton *pinViewConfirmButton;
@property (weak) NSButton *pinViewCancelButton;
@property (weak) NSButton *pinViewAdvancedButton;
@property (readonly) NSTouchBar *touchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)pinFieldViewTextDidChange:(id)a0;
- (void)setup:(BOOL)a0;
- (void)cancelButtonClicked:(id)a0;
- (BOOL)_isPasswordWeak:(id)a0 isSimple:(BOOL)a1;
- (BOOL)_isSimplePassphrase;
- (id)_passphraseFromSecureEntryView;
- (void)_showErrorMessage:(id)a0;
- (void)_showNormalMessage:(id)a0;
- (void)advancedButtonClicked:(id)a0;
- (void)clearSecureEntryView;
- (void)confirmButtonClicked:(id)a0;

@end
