@class NSNumber, NSString;

@interface POJWTEncryptionECDHE_A256GCM : NSObject <POJWTEncryptionAlgorithm>

@property (readonly, nonatomic) NSNumber *encryptionAlgorithm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addValuesToHeader:(id)a0;
- (id)algValue;
- (BOOL)decodeAndDecryptJWT:(id)a0 privateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1 otherInfo:(id)a2 psk:(id)a3 psk_id:(id)a4 authPublicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a5 error:(id *)a6;
- (id)encodeAndEncryptJWT:(id)a0 publicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1 otherInfo:(id)a2 psk:(id)a3 psk_id:(id)a4 authPrivateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a5 auth_kid:(id)a6 error:(id *)a7;

@end
