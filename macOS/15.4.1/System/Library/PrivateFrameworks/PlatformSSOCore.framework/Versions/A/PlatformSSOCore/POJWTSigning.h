@class NSString;

@interface POJWTSigning : NSObject <POJWTSigningAlgorithm>

@property (readonly) struct __CFString { } *algorithm;
@property (readonly) NSString *algorithmName;
@property (readonly) NSString *alg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)algorithmWithIdentifier:(id)a0;
+ (id)algorithmWithSigningAlgorithm:(id)a0;
+ (id)encodeAndSignJWT:(id)a0 algorithm:(id)a1 key:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a2 certificate:(struct __SecCertificate { } *)a3;
+ (id)encodeAndSignJWT:(id)a0 algorithm:(id)a1 key:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a2 certificate:(struct __SecCertificate { } *)a3 error:(id *)a4;
+ (id)encodeAndSignJWT:(id)a0 signingAlgorithm:(id)a1 key:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a2 certificate:(struct __SecCertificate { } *)a3;
+ (id)encodeAndSignJWT:(id)a0 signingAlgorithm:(id)a1 key:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a2 certificate:(struct __SecCertificate { } *)a3 error:(id *)a4;
+ (BOOL)verifyJWTSignature:(id)a0 algorithm:(id)a1 key:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a2;
+ (BOOL)verifyJWTSignature:(id)a0 signingAlgorithm:(id)a1 key:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a2;

- (void).cxx_destruct;
- (id)encodeAndSignJWT:(id)a0 key:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1 certificate:(struct __SecCertificate { } *)a2;
- (id)encodeAndSignJWT:(id)a0 key:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1 certificate:(struct __SecCertificate { } *)a2 error:(id *)a3;
- (id)initWithSecKeyAlgorithm:(struct __CFString { } *)a0 algorithmName:(id)a1 alg:(id)a2;
- (id)signData:(id)a0 usingKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1;
- (id)signData:(id)a0 usingKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1 error:(id *)a2;
- (BOOL)verifyJWTSignature:(id)a0 key:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1;
- (BOOL)verifySignature:(id)a0 onData:(id)a1 usingCertificateString:(id)a2;
- (BOOL)verifySignature:(id)a0 onData:(id)a1 usingKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a2;

@end
