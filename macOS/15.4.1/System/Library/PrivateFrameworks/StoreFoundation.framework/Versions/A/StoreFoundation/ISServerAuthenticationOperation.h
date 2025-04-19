@class ISDialog, NSURL, ISAuthenticationContext, NSNumber;
@protocol ISDialogOperationDelegate;

@interface ISServerAuthenticationOperation : ISOperation

@property (retain) NSNumber *authenticatedAccountDSID;
@property (retain) NSURL *redirectURL;
@property (weak) id<ISDialogOperationDelegate> delegate;
@property (retain) ISAuthenticationContext *authenticationContext;
@property (readonly) ISDialog *dialog;

+ (id)operationWithDialog:(id)a0 storeClient:(id)a1;

- (void)run;
- (void).cxx_destruct;
- (id)_authentciateReturningError:(id *)a0;
- (id)_authenticationContext;
- (BOOL)_handleSelectedButton:(id)a0;
- (void)_sendClientToURL:(id)a0;
- (BOOL)_shouldAuthenticateForButton:(id)a0;
- (id)initWithDialog:(id)a0 storeClient:(id)a1;

@end
