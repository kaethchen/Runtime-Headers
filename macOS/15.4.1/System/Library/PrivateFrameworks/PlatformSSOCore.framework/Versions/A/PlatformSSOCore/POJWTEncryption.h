@interface POJWTEncryption : NSObject

+ (id)algorithmWithAlg:(id)a0 enc:(id)a1;
+ (id)algorithmWithEncryptionAlgorithm:(id)a0;
+ (BOOL)decodeAndDecryptJWT:(id)a0 encryptionAlgorithm:(id)a1 privateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a2 otherInfo:(id)a3 psk:(id)a4 psk_id:(id)a5 authPublicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a6 error:(id *)a7;
+ (id)encodeAndEncryptJWT:(id)a0 encryptionAlgorithm:(id)a1 publicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a2 otherInfo:(id)a3 psk:(id)a4 psk_id:(id)a5 authPrivateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a6 auth_kid:(id)a7 error:(id *)a8;

- (id)init;

@end
