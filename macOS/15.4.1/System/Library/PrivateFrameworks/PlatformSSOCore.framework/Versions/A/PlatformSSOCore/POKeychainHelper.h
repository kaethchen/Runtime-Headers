@interface POKeychainHelper : NSObject

- (id)_checkForCachedAttestationForExtensionIdentifier:(id)a0 keyHash:(id)a1;
- (void)_deleteAllCachedAttestations;
- (void)_deleteCachedAttestationForExtensionIdentifier:(id)a0 key:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1;
- (BOOL)_saveAttestationToKeychain:(id)a0 extensionIdentifier:(id)a1 keyHash:(id)a2 error:(id *)a3;
- (int)addTokens:(id)a0 metaData:(id)a1 toKeychainForService:(id)a2 username:(id)a3;
- (int)addTokens:(id)a0 metaData:(id)a1 toKeychainForService:(id)a2 username:(id)a3 system:(BOOL)a4;
- (int)removeTokensFromKeychainWithService:(id)a0 username:(id)a1 system:(BOOL)a2;
- (BOOL)retrieveCertAndKeyForTokenId:(id)a0 context:(id)a1 forSigning:(BOOL)a2 hash:(id)a3 certificate:(struct __SecCertificate **)a4 privateKey:(struct __SecKey **)a5;
- (BOOL)retrieveIdentityForTokenId:(id)a0 context:(id)a1 forSigning:(BOOL)a2 hash:(id)a3 identity:(struct __SecIdentity **)a4;
- (int)retrieveTokensFromKeychainForService:(id)a0 username:(id)a1 system:(BOOL)a2 returningTokens:(id *)a3 metaData:(id *)a4;
- (void)_deleteCachedAttestationForExtensionIdentifier:(id)a0 keyHash:(id)a1;
- (BOOL)_saveAttestationToKeychain:(id)a0 extensionIdentifier:(id)a1 keyHash:(id)a2 attestationDate:(id)a3 error:(id *)a4;

@end
