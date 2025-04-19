@class NSString, AOSUIAccountContactPromptController, AOSUIAccountContactsSharingController, AOSUIOBBaseViewController, NSWindow;

@interface AOSUIMyPendingBeneficiaryActionHandler : AOSUIMyBeneficiaryActionHandler <AOSUIOBBaseViewControllerDelegate, AOSUIBeneficiaryRadioListViewSelectorDelegate> {
    unsigned long long _currentRadioListSelection;
    AOSUIOBBaseViewController *baseViewController;
    NSWindow *_modalWindow;
    unsigned long long currentSetupStep;
    AOSUIAccountContactPromptController *_viewController;
    AOSUIAccountContactsSharingController *_sharingController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)printOperationDidRun:(id)a0 success:(BOOL)a1 contextInfo:(void *)a2;
- (void)_showInheritanceMessageTemplate;
- (void)_checkMessageEligibility;
- (void)_dismissWithReturnCode:(long long)a0;
- (void)_printAccessKeyDocument;
- (void)_sendDefaultiMessage;
- (void)_sendInheritanceInvitation;
- (id)_setupWindowWithContentViewController:(id)a0;
- (void)_showChoseHowToShare:(id)a0;
- (void)_showIncompatibleDeviceAlert;
- (void)_showInheritanceEditMessageUI;
- (void)_showInheritanceSetupCompletedForAccessKeyShareType:(unsigned long long)a0;
- (void)currentSelection:(unsigned long long)a0;
- (void)doPrimaryAction:(id)a0;
- (void)firstButtonPressed;
- (void)secondButtonPressed;

@end
