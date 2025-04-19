@interface FamilyCircleUI.RecoveryContactSpecialDelegate : NSObject <AOSUIAccountContactsViewControllerDelegate, AOSUIAccountContactSetupFlowControllerDelegate> {
    void /* unknown type, empty encoding */ didDismiss;
    void /* unknown type, empty encoding */ dismiss;
}

- (id)init;
- (void).cxx_destruct;
- (void)doneButtonPressed;
- (void)accountContactSetupFlowControllerDidFinish:(id)a0;

@end
