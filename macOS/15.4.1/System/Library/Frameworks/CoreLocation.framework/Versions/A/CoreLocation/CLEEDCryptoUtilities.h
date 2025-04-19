@interface CLEEDCryptoUtilities : NSObject

+ (id)getRandomBytes:(int)a0;
+ (id)copyAdrPublicKeyData:(id)a0;
+ (struct __SecCertificate { } *)copyCertFromBase64String:(id)a0;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)copyPublicKeyFromPrivateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0;
+ (id)createKeyExternalRepresentation:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)createKeyFromExternalRepresentationData:(id)a0 keyClass:(id)a1;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)createKeyFromExternalRepresentationString:(id)a0 keyClass:(id)a1;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)createRandomP256PrivateKey;
+ (id)getAESGCMDecryptedData:(id)a0 key:(id)a1 iv:(id)a2 authTag:(id)a3;
+ (id)getDerivedKeyWithLength:(int)a0 secretData:(id)a1 additionalInfo:(id)a2;
+ (id)getECIESDecryptedData:(id)a0 key:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1 sharedInfo:(id)a2;
+ (id)getECIESEncryptedData:(id)a0 key:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1 sharedInfo:(id)a2 prependKeyFingerprint:(BOOL)a3;
+ (id)getGMACWithAuthData:(id)a0 key:(id)a1 iv:(id)a2;
+ (id)getKeyExternalRepresentation:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0;
+ (id)getKeyFingerprint:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0;
+ (id)getKeyFingerprintWithKeyData:(id)a0;
+ (id)getSessionIDWithPhoneNumber:(id)a0 sessionStartTime:(long long)a1;

@end
