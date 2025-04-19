@interface PlatformSSOCore.POCryptoKitHPKE_P384_SHA384_AES_GCM_256 : PlatformSSOCore.POCryptoKitHPKE <POJWTEncryptionAlgorithm>

@property (nonatomic, readonly) void /* unknown type, empty encoding */ encryptionAlgorithm;

- (id)init;
- (void).cxx_destruct;
- (void)addValuesTo:(id)a0;
- (id)algValue;
- (BOOL)decodeAndDecryptJWT:(id)a0 privateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1 otherInfo:(id)a2 psk:(id)a3 psk_id:(id)a4 authPublicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a5 error:(id *)a6;
- (id)encodeAndEncryptJWT:(id)a0 publicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1 otherInfo:(id)a2 psk:(id)a3 psk_id:(id)a4 authPrivateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a5 auth_kid:(id)a6 error:(id *)a7;

@end
