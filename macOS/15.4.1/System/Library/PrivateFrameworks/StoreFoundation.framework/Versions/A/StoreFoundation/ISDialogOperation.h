@class ISServerAuthenticationOperation, ISDialog, NSString, ISDialogButton, NSNumber;

@interface ISDialogOperation : ISOperation <ISDialogOperationDelegate> {
    id _userNotification;
    ISServerAuthenticationOperation *_authenticationOperation;
}

@property (readonly) ISServerAuthenticationOperation *authenticationOperation;
@property (readonly) ISDialog *dialog;
@property BOOL performDefaultActions;
@property (retain) ISDialogButton *selectedButton;
@property (readonly) NSNumber *authenticatedAccountDSID;
@property (copy) id /* block */ buttonClickHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)operationWithDialog:(id)a0 storeClient:(id)a1;

- (id)init;
- (void)run;
- (void).cxx_destruct;
- (id)authenticationOperation;
- (void)handleButtonSelected:(long long)a0;
- (id)initWithDialog:(id)a0 storeClient:(id)a1;
- (void)operation:(id)a0 selectedButton:(id)a1;

@end
