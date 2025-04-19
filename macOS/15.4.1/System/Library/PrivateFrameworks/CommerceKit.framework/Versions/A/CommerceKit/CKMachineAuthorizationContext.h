@class NSString, CKStoreClient, CKDialogContext;

@interface CKMachineAuthorizationContext : NSObject <CKStoreRequestDelegate>

@property (readonly) CKStoreClient *storeClient;
@property (retain) CKDialogContext *dialogContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)machineAuthorizationContextWithStoreClient:(id)a0;

- (void).cxx_destruct;
- (id)initWithStoreClient:(id)a0;
- (id)_authenticationContextWithAppleID:(id)a0;
- (id)_requestBodyForAccount:(id)a0 bagURLKey:(id)a1;
- (void)_runRequestWithAccount:(id)a0 bagURLKey:(id)a1 authenticationContext:(id)a2 completionHandler:(id /* block */)a3;
- (void)authorizeMachineWithAppleID:(id)a0 completionHandler:(id /* block */)a1;
- (void)deauthorizeMachineWithCompletionHandler:(id /* block */)a0;
- (void)storeRequest:(id)a0 didAuthenticateAccount:(id)a1;

@end
