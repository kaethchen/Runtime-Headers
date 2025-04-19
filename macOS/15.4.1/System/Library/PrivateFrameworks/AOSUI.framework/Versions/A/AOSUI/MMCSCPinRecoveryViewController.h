@class NSTextField, NSString, NSView, MMPinFieldView, NSProgressIndicator, MMLinkTextField, iCloudTouchBarController, NSTouchBar, NSLayoutConstraint, NSImageView, NSButton;
@protocol MMCSCPinRecoveryViewControllerDelegate;

@interface MMCSCPinRecoveryViewController : NSViewController <NSTouchBarProvider, MMPinFieldViewDelegate, MMLinkTextFieldDelegate, MMCSCProgressIndicatorProtocol>

@property (retain) MMPinFieldView *pinViewPinFieldView;
@property (copy) NSString *passPhrase;
@property (retain) iCloudTouchBarController *touchBarController;
@property id<MMCSCPinRecoveryViewControllerDelegate> delegate;
@property (weak) NSImageView *pinViewImageView;
@property (weak) NSTextField *pinViewTitle;
@property (weak) MMLinkTextField *pinViewMessageTextField;
@property (weak) MMLinkTextField *pinViewAlternateMessageTextField;
@property (weak) NSView *pinViewPinFieldPlaceholder;
@property (weak) NSLayoutConstraint *pinViewPinFieldWidthConstraint;
@property (weak) NSButton *pinViewHelpButton;
@property (weak) NSButton *pinViewConfirmButton;
@property (weak) NSButton *pinViewCancelButton;
@property (weak) NSProgressIndicator *pinViewProgressIndicator;
@property BOOL needsVerification;
@property int pinLength;
@property (readonly) NSTouchBar *touchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)pinFieldViewTextDidChange:(id)a0;
- (void)clickedOnLink:(id)a0;
- (void)cancelButtonClicked:(id)a0;
- (id)_passphraseFromSecureEntryView;
- (void)_showErrorMessage:(id)a0;
- (void)_showNormalMessage;
- (void)clearSecureEntryView;
- (void)confirmButtonClicked:(id)a0;
- (id)forgotCodeAttributedString;
- (void)setupView:(long long)a0;
- (void)startCSCProgressIndicator:(id)a0;
- (void)stopCSCProgressIndicator:(id)a0;

@end
