@class NSXPCConnection;

@interface SFCredentialProviderExtensionHelperProxy : NSObject <SFCredentialProviderExtensionHelperProtocol> {
    NSXPCConnection *_connection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)fetchOneTimeCodeCredentialIdentitiesMatchingDomains:(id)a0 completion:(id /* block */)a1;
- (id)_proxyObject;
- (void)fetchAllCredentialIdentitiesMatchingDomains:(id)a0 completion:(id /* block */)a1;
- (void)fetchAllCredentialIdentitiesMatchingDomains:(id)a0 forExtension:(id)a1 completion:(id /* block */)a2;
- (void)fetchAllPaskeyCredentialIdentitiesWithCompletion:(id /* block */)a0;
- (void)fetchCredentialIdentitiesForService:(id)a0 serviceIdentifierType:(long long)a1 credentialIdentityTypes:(long long)a2 completion:(id /* block */)a3;
- (void)fetchOneTimeCodeCredentialIdentitiesMatchingDomains:(id)a0 forExtension:(id)a1 completion:(id /* block */)a2;
- (void)fetchPasskeyCredentialIdentitiesMatchingDomains:(id)a0 completion:(id /* block */)a1;
- (void)fetchPasswordCredentialIdentitiesMatchingDomains:(id)a0 completion:(id /* block */)a1;
- (void)fetchPasswordCredentialIdentitiesMatchingDomains:(id)a0 forExtension:(id)a1 completion:(id /* block */)a2;
- (void)getCredentialProviderExtensionStateWithCompletion:(id /* block */)a0;
- (void)removeAllCredentialIdentitiesWithCompletion:(id /* block */)a0;
- (void)removeCredentialIdentities:(id)a0 completion:(id /* block */)a1;
- (void)removeCredentialIdentityStoreForApplication:(id)a0 completion:(id /* block */)a1;
- (void)replaceCredentialIdentitiesWithIdentities:(id)a0 completion:(id /* block */)a1;
- (void)saveCredentialIdentities:(id)a0 completion:(id /* block */)a1;

@end
