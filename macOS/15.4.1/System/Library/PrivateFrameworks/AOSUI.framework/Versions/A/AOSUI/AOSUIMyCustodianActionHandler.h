@class AKBiometricRatchetController, NSString, AALocalContactInfo, AIDAAccountManager, NSWindow;

@interface AOSUIMyCustodianActionHandler : NSObject <AOSUIAccountContactPromptActionHandler> {
    AKBiometricRatchetController *_bioRatchetController;
}

@property (retain, nonatomic) AIDAAccountManager *accountManager;
@property (retain) NSWindow *modalWindow;
@property (readonly) AALocalContactInfo *contactInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_bioRatchetController;
- (void)_continueDestructiveAction:(id)a0;
- (void)_dismissAndPresentPostRemovalAlert:(id)a0;
- (id)_setupWindowWithContentViewController:(id)a0;
- (void)_showCustodianDeleteNotAllowedAlertForViewController:(id)a0;
- (void)doDestructiveAction:(id)a0;
- (id)initWithLocalContact:(id)a0 accountManager:(id)a1;

@end
