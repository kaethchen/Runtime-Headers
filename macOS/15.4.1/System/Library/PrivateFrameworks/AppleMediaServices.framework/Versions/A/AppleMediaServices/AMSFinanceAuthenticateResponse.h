@class AMSFinanceDialogResponse, NSDictionary, NSString, AMSAuthenticateRequest;

@interface AMSFinanceAuthenticateResponse : NSObject <AMSFinancePerformable>

@property (retain) NSDictionary *dialogDictionary;
@property (readonly) AMSFinanceDialogResponse *dialogResponse;
@property (readonly) AMSAuthenticateRequest *authenticateRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_authenticateRequestWithAuthType:(unsigned long long)a0 taskInfo:(id)a1 dialogResponse:(id)a2 serviceIdentifier:(id)a3;
+ (id)_handleAuthResult:(id)a0 authError:(id)a1 originalRequest:(id)a2 actionResult:(id)a3 redirectURL:(id)a4 taskInfo:(id)a5;
+ (void)_handleDialogFromAuthError:(id)a0 taskInfo:(id)a1;
+ (id)_performAuthRequest:(id)a0 actionResult:(id)a1 redirectURL:(id)a2 taskInfo:(id)a3;
+ (id)_presentAuthRequest:(id)a0 taskInfo:(id)a1;
+ (id)_serviceIdentifierForResponse:(id)a0 taskInfo:(id)a1;
+ (void)_updateTaskWithAuthedAccount:(id)a0 taskInfo:(id)a1;
+ (void)_updateTaskWithLastCredentialSource:(id)a0 taskInfo:(id)a1;
+ (unsigned long long)authenticationTypeForResponse:(id)a0 responseDictionary:(id)a1;
+ (id)performAuthFromResponse:(id)a0 taskInfo:(id)a1;

- (void).cxx_destruct;
- (id)_locateActionableButtonUsingDialogResponse:(id)a0;
- (id)initWithResponseDictionary:(id)a0 taskInfo:(id)a1;
- (id)performWithTaskInfo:(id)a0;
- (void)performWithTaskInfo:(id)a0 completionHandler:(id /* block */)a1;

@end
