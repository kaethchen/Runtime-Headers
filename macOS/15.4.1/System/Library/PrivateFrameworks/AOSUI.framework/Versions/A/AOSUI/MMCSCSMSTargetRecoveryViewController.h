@class NSTextField, NSString, NSView, MMPinFieldView, NSProgressIndicator, MMLinkTextField, iCloudTouchBarController, NSTouchBar, NSLayoutConstraint, NSImageView, NSButton;
@protocol MMCSCSMSTargetRecoveryViewControllerDelegate;

@interface MMCSCSMSTargetRecoveryViewController : NSViewController <NSTouchBarProvider, MMPinFieldViewDelegate, MMLinkTextFieldDelegate, MMCSCProgressIndicatorProtocol>

@property (retain) MMPinFieldView *smsTargetPinFieldView;
@property (copy) NSString *smsVerificationToken;
@property (retain) iCloudTouchBarController *touchBarController;
@property id<MMCSCSMSTargetRecoveryViewControllerDelegate> delegate;
@property (weak) NSImageView *smsTargetImageView;
@property (weak) NSTextField *smsTargetTitle;
@property (weak) NSView *smsTargetPinFieldPlaceholder;
@property (weak) NSLayoutConstraint *smsTargetPinFieldWidthConstraint;
@property (weak) MMLinkTextField *smsTargetMessage;
@property (weak) NSButton *smsTargetConfirmButton;
@property (weak) NSButton *smsTargetCancelButton;
@property (weak) NSButton *smsTargetHelpButton;
@property (weak) NSProgressIndicator *smsTargetProgressIndicator;
@property (copy) NSString *smsTargetCountryCode;
@property (copy) NSString *smsTarget;
@property (readonly) NSTouchBar *touchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)pinFieldViewTextDidChange:(id)a0;
- (void)clickedOnLink:(id)a0;
- (void)cancelButtonClicked:(id)a0;
- (id)_countryPrefixForCountryCode:(id)a0;
- (id)_passphraseFromSecureEntryView;
- (void)clearSecureEntryView;
- (void)confirmButtonClicked:(id)a0;
- (void)setupViewWithPinLength:(long long)a0;
- (void)startCSCProgressIndicator:(id)a0;
- (void)stopCSCProgressIndicator:(id)a0;

@end
