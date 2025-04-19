@class NSString;

@interface CDPDAuthProxyImpl : NSObject <CDPDAuthProviderInternal>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cdpContext:(id)a0 verifyMasterKey:(id)a1 completion:(id /* block */)a2;
- (void)getUserInformationForAltDSID:(id)a0 completion:(id /* block */)a1;
- (id)_authContextFromCDPContext:(id)a0;
- (void)cdpContext:(id)a0 persistMasterKeyVerifier:(id)a1 completion:(id /* block */)a2;
- (void)cdpContext:(id)a0 persistRecoveryKey:(id)a1 keyType:(unsigned long long)a2 completion:(id /* block */)a3;
- (BOOL)isPrimaryAppleIDLoggedIn;

@end
