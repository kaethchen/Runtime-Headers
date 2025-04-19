@interface PlatformSSOCore.POCryptoKitAlgorithmCurve25519 : POJWTSigning

- (id)init;
- (BOOL)verifyKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0;
- (id)initWithSecKeyAlgorithm:(const struct __CFString { } *)a0 algorithmName:(id)a1 alg:(id)a2;
- (id)signData:(id)a0 usingKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1 error:(id *)a2;
- (BOOL)verifySignature:(id)a0 onData:(id)a1 usingCertificateString:(id)a2;
- (BOOL)verifySignature:(id)a0 onData:(id)a1 usingKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a2;

@end
