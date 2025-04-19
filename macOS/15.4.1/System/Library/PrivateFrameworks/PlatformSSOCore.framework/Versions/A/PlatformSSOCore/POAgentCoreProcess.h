@class POAuthenticationProcess, NSString, POTokenHelper, POKeychainHelper, NSXPCConnection;
@protocol POUserIdentifierProvider, POJWKSStorageProvider;

@interface POAgentCoreProcess : NSObject <POServiceCoreProtocol> {
    NSXPCConnection *_xpcConnection;
}

@property (retain) POAuthenticationProcess *authenticationProcess;
@property (retain) id<POUserIdentifierProvider> userIdentifierProvider;
@property (retain) id<POJWKSStorageProvider> jwksStorageProvider;
@property (retain) POTokenHelper *tokenHelper;
@property (retain) POKeychainHelper *keychainHelper;
@property (copy) id /* block */ invalidationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)connectionInvalidated;
- (BOOL)verifyPasswordChangeEntitlement;
- (void)getLoginTypeForUser:(id)a0 completion:(id /* block */)a1;
- (void)_verifyLogin:(id)a0 passwordContext:(id)a1 smartCardContext:(id)a2 tokenId:(id)a3 deviceConfiguration:(id)a4 loginConfiguration:(id)a5 forAuthorization:(BOOL)a6 completion:(id /* block */)a7;
- (void)bypassLoginPolicyForUserName:(id)a0 volume:(id)a1 contextData:(id)a2 completion:(id /* block */)a3;
- (void)exchangeKeyWithPublicKeyData:(id)a0 userName:(id)a1 passwordContext:(id)a2 responseContext:(id)a3 completion:(id /* block */)a4;
- (id)initWithXPCConnection:(id)a0 identifierProvider:(id)a1 jwksStroageProvider:(id)a2;
- (void)insertTokenForUserName:(id)a0 completion:(id /* block */)a1;
- (BOOL)verifyAgentEntitlement;
- (BOOL)verifyLoginUserEntitlement;
- (void)verifyPasswordLogin:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;
- (void)verifyPasswordUser:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;
- (void)verifyTokenForUserName:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;
- (BOOL)verifySecurityEntitlement;

@end
