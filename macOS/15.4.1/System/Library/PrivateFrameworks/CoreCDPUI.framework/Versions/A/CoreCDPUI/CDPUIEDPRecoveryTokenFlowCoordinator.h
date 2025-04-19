@class NSViewController, CDPContext, NSMutableSet, CDPRemoteDeviceSecretValidator;
@protocol CDPRPDLedger, CDPUIEDPRecoveryTokenFlowCoordinatorDelegate;

@interface CDPUIEDPRecoveryTokenFlowCoordinator : NSObject {
    BOOL _isHSA2Enabled;
    BOOL _showCancel;
    NSMutableSet *_macOSPresentationBag;
}

@property (nonatomic) BOOL enteredAfterFailedCDPRecovery;
@property (readonly, nonatomic) NSViewController *firstViewController;
@property (readonly, nonatomic) CDPRemoteDeviceSecretValidator *validator;
@property (readonly, nonatomic) id<CDPRPDLedger> rpdLedger;
@property (readonly, nonatomic) CDPContext *cdpContext;
@property (readonly, weak, nonatomic) id<CDPUIEDPRecoveryTokenFlowCoordinatorDelegate> delegate;

- (void).cxx_destruct;
- (void)recoveryTokenIntroViewDidAppear;
- (void)_accessDataLaterSelectedFromSender:(id)a0;
- (BOOL)_canOfferRPD;
- (BOOL)_fullDataAccessRestored;
- (void)_presentDontHaveKeyAlertOnViewController:(id)a0;
- (void)_presentRecoveryFailedAlertOnViewController:(id)a0 title:(id)a1 message:(id)a2;
- (void)_rpdSelectedFromSender:(id)a0;
- (void)_showSuccessScreen;
- (id)initWithValidator:(id)a0 rpdLedger:(id)a1 cdpContext:(id)a2 showCancel:(BOOL)a3 delegate:(id)a4;
- (void)recoveryTokenEntryViewController:(id)a0 didRequestValidationForToken:(id)a1;
- (void)recoveryTokenEntryViewControllerDidAppear:(id)a0;
- (void)recoveryTokenEntryViewControllerDidSelectBack:(id)a0;
- (void)recoveryTokenEntryViewControllerDidTapForgotToken:(id)a0;
- (void)recoveryTokenIntroViewDidSelectContinue;
- (void)recoveryTokenIntroViewDidSelectDontHaveKey;
- (void)recoveryTokenIntroViewDidSelectSecondaryButton;

@end
