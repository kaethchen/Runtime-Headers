@class NSDistributedNotificationCenter, NSString, NSXPCConnection, POKeychainHelper, NSMutableDictionary, POKeyWrap, PODirectoryServices, POAgentAuthenticationProcess;

@interface POAgentProcess : POAgentCoreProcess <POServiceProtocol> {
    NSXPCConnection *_xpcConnection;
}

@property (class, readonly, nonatomic) NSMutableDictionary *retainedContexts;

@property (retain) PODirectoryServices *directoryServices;
@property (retain) POAgentAuthenticationProcess *process;
@property (retain) POKeyWrap *keyWrap;
@property (retain) POKeychainHelper *keychainHelper;
@property (retain) NSDistributedNotificationCenter *distributedNotificationCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)retainedContexts;

- (void).cxx_destruct;
- (void)connectionInvalidated;
- (id)initWithAuthenticationProcess:(id)a0;
- (BOOL)verifyPasswordChangeEntitlement;
- (void)getLoginTypeForUser:(id)a0 completion:(id /* block */)a1;
- (void)_saveCredentialForUserName:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;
- (void)authenticateTemporaryUserAccount:(id)a0 passwordContext:(id)a1 smartCardContext:(id)a2 tokenId:(id)a3 loginContext:(id)a4 completion:(id /* block */)a5;
- (void)configurationDidChangeAndRemovedExtension:(id)a0 removed:(BOOL)a1 completion:(id /* block */)a2;
- (void)createUserAccount:(id)a0 passwordContext:(id)a1 smartCardContext:(id)a2 tokenId:(id)a3 completion:(id /* block */)a4;
- (id)initWithXPCConnection:(id)a0 authenticationProcess:(id)a1;
- (void)passwordDidChangeForUsername:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;
- (void)performPasswordLogin:(id)a0 loginUserName:(id)a1 passwordContext:(id)a2 updateLocalAccountPassword:(BOOL)a3 completion:(id /* block */)a4;
- (void)performPasswordLogin:(id)a0 passwordContext:(id)a1 updateLocalAccountPassword:(BOOL)a2 completion:(id /* block */)a3;
- (void)retainContextForUserName:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)saveCredentialForUserName:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;
- (void)screenDidUnlockWithCredentialContext:(id)a0 smartCardContext:(id)a1 biometricContext:(id)a2 tokenId:(id)a3 atLogin:(BOOL)a4 tokenUnlock:(BOOL)a5 completion:(id /* block */)a6;
- (void)updateLocalAccountPassword:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;
- (void)updateLocalAccountPassword:(id)a0 passwordContextData:(id)a1 completion:(id /* block */)a2;
- (BOOL)verifyAgentEntitlement;
- (BOOL)verifyLoginUserEntitlement;
- (void)verifyPasswordLogin:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;

@end
