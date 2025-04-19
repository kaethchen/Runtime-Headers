@class AFUICreditCardViewController, NSString, RTIDocumentState, RTIDocumentTraits, AFUIContactsController, NSLock, AFUIPasswordsController;
@protocol AFUIModalUIDelegate;

@interface AFUIExplicitAutoFillController : NSObject <AFUIContactPropertyPickerDelegate, AFUIPasswordPickerDelegate> {
    RTIDocumentTraits *_documentTraits;
    RTIDocumentState *_documentState;
    id /* block */ _textOperationsHandler;
    id /* block */ _keyboardOutputHandler;
    AFUIContactsController *_contactsController;
    AFUIPasswordsController *_passwordsController;
    AFUICreditCardViewController *_creditCardViewController;
}

@property (retain, nonatomic) NSLock *authLock;
@property (weak, nonatomic) id<AFUIModalUIDelegate> delegate;
@property (readonly, nonatomic) BOOL isPopoverPresentedFromVerticalEdge;
@property (nonatomic) BOOL isCreditCardAuthenticationOngoing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isCreditCardAuthenticationOngoing;
+ (BOOL)isCreditCardViewControllerAuthenticating;
+ (BOOL)isExplicitAutoFillInvocationWithDocumentTraits:(id)a0;
+ (void)setIsCreditCardAuthenticationOngoing:(BOOL)a0;

- (void).cxx_destruct;
- (void)presentFromViewController:(id)a0;
- (BOOL)isSingleLineDocument;
- (void)_finishWithSelectedCredential:(id)a0;
- (void)_finishWithStringValue:(id)a0;
- (void)_generateSuggestions:(id /* block */)a0;
- (void)_showContactsPanelFromViewController:(id)a0;
- (void)_showCreditCardsPanelFromViewController:(id)a0;
- (void)_showPasswordsPanelFromViewController:(id)a0;
- (void)_yieldToClientApplicationIfNeeded;
- (void)authenticationDidEndForSessionUUID:(id)a0 completion:(id /* block */)a1;
- (void)authenticationWillBeginForSessionUUID:(id)a0 completion:(id /* block */)a1;
- (void)contactPickerDidCancel;
- (void)contactsUIDidEndForSessionUUID:(id)a0 completion:(id /* block */)a1;
- (void)contactsUIWillBeginForSessionUUID:(id)a0 completion:(id /* block */)a1;
- (void)creditCardsUIDidEndForSessionUUID:(id)a0 completion:(id /* block */)a1;
- (void)creditCardsUIWillBeginForSessionUUID:(id)a0 completion:(id /* block */)a1;
- (id)initWithDocumentTraits:(id)a0 documentState:(id)a1 keyboardOutputHandler:(id /* block */)a2;
- (id)initWithDocumentTraits:(id)a0 documentState:(id)a1 textOperationsHandler:(id /* block */)a2;
- (void)passwordsController:(id)a0 fillPassword:(id)a1;
- (void)passwordsController:(id)a0 fillText:(id)a1;
- (void)passwordsController:(id)a0 fillUsername:(id)a1;
- (void)passwordsController:(id)a0 fillVerificationCode:(id)a1;
- (void)passwordsController:(id)a0 selectedCredential:(id)a1;
- (void)passwordsControllerDidCancel:(id)a0;
- (void)passwordsControllerDidFinish:(id)a0;
- (void)passwordsUIDidEndForSessionUUID:(id)a0 completion:(id /* block */)a1;
- (void)passwordsUIWillBeginForSessionUUID:(id)a0 completion:(id /* block */)a1;
- (void)userSelectedContactProperties:(id)a0;

@end
