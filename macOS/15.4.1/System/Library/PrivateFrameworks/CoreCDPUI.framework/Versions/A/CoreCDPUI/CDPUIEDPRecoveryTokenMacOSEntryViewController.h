@class NSString, CDPUIEDPRecoveryTokenFormatter, CDPUIEDPRecoveryTokenEntryViewModel, CDPUIBottomButtonTray;
@protocol CDPUIEDPRecoveryTokenEntryViewControllerDelegate;

@interface CDPUIEDPRecoveryTokenMacOSEntryViewController : NSViewController <CDPUIBottomButtonTrayDelegate, NSTextFieldDelegate, CDPUIEDPRecoveryTokenEntryViewControllerProtocol> {
    CDPUIEDPRecoveryTokenEntryViewModel *_viewModel;
    CDPUIEDPRecoveryTokenFormatter *_formatter;
    CDPUIBottomButtonTray *_buttonTray;
}

@property (weak, nonatomic) id<CDPUIEDPRecoveryTokenEntryViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)controlTextDidChange:(id)a0;
- (void)controlTextDidEndEditing:(id)a0;
- (void)loadView;
- (void)mouseDown:(id)a0;
- (void)viewDidAppear;
- (id)_makeTitleLabel;
- (void)_formatEnteredText;
- (void)beginWaitingForValidation;
- (void)bottomButtonTrayDidSelectPrimaryButton:(id)a0;
- (void)bottomButtonTrayDidSelectSecondaryButton:(id)a0;
- (void)bottomButtonTrayDidSelectTertiaryLinkButton:(id)a0;
- (void)endWaitingForValidation;
- (id)initWithViewModel:(id)a0 delegate:(id)a1;

@end
