@class MMCSCPinSetupViewController, NSString, NSMutableDictionary, MMCSCOptionsSetupViewController, MMCSCPassPhraseSetupViewController, MMCSCSMSTargetSetupViewController, NSWindow;
@protocol MMCSCSetupControllerDelegate;

@interface MMCSCSetupController : NSObject <MMCSCPinSetupViewControllerDelegate, MMCSCPassPhraseSetupViewControllerDelegate, MMCSCSMSTargetSetupViewControllerDelegate, MMCSCOptionsSetupViewControllerDelegate> {
    long long _currentView;
}

@property (retain) NSWindow *parentWindow;
@property (weak) NSWindow *dialog;
@property (copy) NSString *passPhrase;
@property (copy) NSString *smsCountryCode;
@property (copy) NSString *smsCountryPrefix;
@property (copy) NSString *smsTarget;
@property (retain) NSMutableDictionary *setupContext;
@property BOOL usingNumericPassphrase;
@property int numericPassphraseLength;
@property (retain) MMCSCPinSetupViewController *cscPinVC;
@property (retain) MMCSCOptionsSetupViewController *cscOptionsVC;
@property (retain) MMCSCPassPhraseSetupViewController *cscPassPhraseVC;
@property (retain) MMCSCSMSTargetSetupViewController *cscSMSTargetVC;
@property id<MMCSCSetupControllerDelegate> delegate;
@property (readonly) BOOL usingComplexPassphrase;
@property (readonly) BOOL isSecurePassphrase;
@property BOOL isUpdatingPassphrase;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_showOptOutConfirmation:(id)a0;
- (void)animateFromView:(id)a0 toView:(id)a1;
- (void)beginDialogWithParentWindow:(id)a0 completionHandler:(id /* block */)a1;
- (void)beginDialogWithParentWindow:(id)a0 shouldNest:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)endModalDialog;
- (BOOL)isSecurePassphrase;
- (void)mmCSCOptionsSetupViewControllerDidCancel:(id)a0;
- (void)mmCSCOptionsSetupViewControllerDidEnd:(id)a0;
- (void)mmCSCOptionsSetupViewControllerDidReturn:(id)a0;
- (void)mmCSCPassPhraseSetupViewControllerDidCancel:(id)a0;
- (void)mmCSCPassPhraseSetupViewControllerDidEnd:(id)a0;
- (void)mmCSCPassPhraseSetupViewControllerDidReturn:(id)a0;
- (void)mmCSCPinSetupViewControllerDidCancel:(id)a0;
- (void)mmCSCPinSetupViewControllerDidEnd:(id)a0;
- (void)mmCSCPinSetupViewControllerDidSelectOption:(id)a0;
- (void)mmCSCSMSTargetSetupViewControllerDidCancel:(id)a0;
- (void)mmCSCSMSTargetSetupViewControllerDidEnd:(id)a0;
- (void)modalDialogCancelled;
- (BOOL)usingComplexPassphrase;

@end
