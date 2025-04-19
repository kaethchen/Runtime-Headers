@class MMCSCSMSTargetRecoveryViewController, NSString, NSMutableDictionary, MMCSCPinRecoveryViewController, MMCSCPassPhraseRecoveryViewController, NSWindow;
@protocol MMCSCRecoveryControllerDelegate;

@interface MMCSCRecoveryController : NSObject <MMCSCPinRecoveryViewControllerDelegate, MMCSCPassPhraseRecoveryViewControllerDelegate, MMCSCSMSTargetRecoveryViewControllerDelegate>

@property (retain) NSWindow *parentWindow;
@property (weak) NSWindow *dialog;
@property (copy) NSString *passPhrase;
@property (copy) NSString *verificationToken;
@property (retain) NSMutableDictionary *recoveryContext;
@property (retain) MMCSCPinRecoveryViewController *cscPinVC;
@property (retain) MMCSCPassPhraseRecoveryViewController *cscPassPhraseVC;
@property (retain) MMCSCSMSTargetRecoveryViewController *cscSMSTargetVC;
@property id<MMCSCRecoveryControllerDelegate> delegate;
@property (copy) NSString *accountID;
@property BOOL isFirstDevice;
@property int pinLength;
@property BOOL useComplexPassphraseView;
@property BOOL usesRandomPassphrase;
@property BOOL needsVerification;
@property (copy) NSString *smsTargetCountryCode;
@property (copy) NSString *smsTarget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_handleSMSRetryError;
- (void)_handleSecurityCodeVerificationAndRestore:(id)a0;
- (void)_handleSoftLimitRecoveryError:(id)a0;
- (void)animateFromView:(id)a0 toView:(id)a1;
- (void)beginDialogWithParentWindow:(id)a0 completionHandler:(id /* block */)a1;
- (void)endModalDialog;
- (void)mmCSCPassPhraseRecoveryViewControllerDidCancel:(id)a0;
- (void)mmCSCPassPhraseRecoveryViewControllerDidEnd:(id)a0;
- (void)mmCSCPassPhraseRecoveryViewControllerDidForget:(id)a0;
- (void)mmCSCPinRecoveryViewControllerDidCancel:(id)a0;
- (void)mmCSCPinRecoveryViewControllerDidEnd:(id)a0;
- (void)mmCSCPinRecoveryViewControllerDidForget:(id)a0;
- (void)mmCSCSMSTargetRecoveryViewControllerDidCancel:(id)a0;
- (void)mmCSCSMSTargetRecoveryViewControllerDidEnd:(id)a0;
- (void)modalDialogCancelled;

@end
