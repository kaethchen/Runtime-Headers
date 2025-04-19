@class NSString, NSXPCConnection;

@interface SecFoundationModVector : NSObject {
    NSXPCConnection *_proxyConnection;
    struct AuthorizationOpaqueRef { } *_authRef;
    struct __SecKeychain { } *_kcRef;
    struct __SecKeychain { } *_tmpRef;
    long long _err;
    long long _lock;
    unsigned int _uid;
    NSString *_path;
    NSString *_tmpPath;
}

+ (id)sharedInstance;
+ (BOOL)isAccessError:(int)a0;
+ (id)pathForKeychain:(struct __SecKeychain { } *)a0;

- (void)dealloc;
- (id)init;
- (int)removeItem:(struct __SecKeychainItem { } *)a0;
- (void)_connectionDidDie:(id)a0;
- (int)addCertificate:(struct __SecCertificate { } *)a0 toKeychain:(struct __SecKeychain { } *)a1;
- (int)addCertificate:(struct __SecCertificate { } *)a0 toKeychain:(struct __SecKeychain { } *)a1 domain:(unsigned int)a2 settings:(struct __CFArray { } *)a3;
- (BOOL)authorizationValid;
- (int)createKeyPair:(struct __SecKeychain { } *)a0 algorithm:(unsigned int)a1 keySizeInBits:(unsigned int)a2 contextHandle:(unsigned long long)a3 publicKeyUsage:(unsigned int)a4 publicKeyAttr:(unsigned int)a5 privateKeyUsage:(unsigned int)a6 privateKeyAttr:(unsigned int)a7 initialAccess:(id)a8 publicKey:(struct __SecKey **)a9 privateKey:(struct __SecKey **)a10 commonName:(id)a11;
- (void)doWithProxy:(id /* block */)a0 onError:(id /* block */)a1;
- (long long)obtainAuthorization:(id)a0;
- (id)privateKeyPersistentRef;
- (id)proxyWithSemaphore:(id)a0;
- (id)publicKeyPersistentRef;
- (long long)releaseAuthorization;
- (void)setKeyPrintNamesWithCommonName:(id)a0 forKey:(struct __SecKey { } *)a1;
- (void)startProxy;
- (void)stopProxy;

@end
