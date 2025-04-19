@class NSData, NSString;

@interface RSAKeyPair : NSObject <RSAKeyPairProtocol> {
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *rsaPublicKey;
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *rsaPrivateKey;
}

@property (retain) NSData *rsaPrivateKeyData;
@property (retain) NSData *rsaPublicKeyData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)appName;
+ (id)basePath;
+ (void)LowerEUID:(const char *)a0;
+ (void)RaiseEUID:(const char *)a0;
+ (void)TerminateApp;
+ (id)encryptWithKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0 data:(const char *)a1 length:(long long)a2;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)fetchKeyFromKeychainWithName:(id)a0 class:(id)a1;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)importRSAPublicKey:(id)a0 label:(id)a1;
+ (id)keySubpath;
+ (id)keysPath;
+ (id)loadRSAPublicKeyWithLabel:(id)a0;
+ (struct __SecKeychain { } *)openKeychainWithPath:(const char *)a0 private:(BOOL)a1;
+ (id)pathForRSAPublicKeyWithLabel:(id)a0;
+ (struct __SecKeychain { } *)privateKeyKeychain;
+ (id)privateKeychainPath;
+ (void)removePrivateKeychain;
+ (void)removeRSAPublicKeyWithLabel:(id)a0;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)retrieveRSAPublicKeyWithLabel:(id)a0;
+ (unsigned char)rsaKeyPairSimpleHash:(id)a0;
+ (id)rsaPublicKeyStoragePath;
+ (BOOL)saveRSAPublicKey:(id)a0 label:(id)a1;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)secKeyRefFromKeyData:(id)a0;

- (void)dealloc;
- (id)init;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)privateKey;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)publicKey;
- (id)decrypt:(id)a0;
- (id)encrypt:(const char *)a0 length:(long long)a1;
- (id)attributesForPrivateKey;
- (void)deprecateKeyPair:(int)a0;
- (id)exportedRSAPrivateKeyNoCache:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0;
- (id)exportedRSAPublicKey;
- (id)exportedRSAPublicKeyNoCache:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0;
- (void)freeKeys;
- (BOOL)generateKeyPairWithKeySize:(id)a0;
- (BOOL)loadAndVerifyKeys;
- (BOOL)makeKeysWithKeySize:(id)a0;
- (id)preferredKeySizeInBits;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)privateKeyFromCache;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)privateKeyFromKeychain;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)publicKeyFromCache;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)publicKeyFromKeychain;
- (void)purgeKeyPair;

@end
