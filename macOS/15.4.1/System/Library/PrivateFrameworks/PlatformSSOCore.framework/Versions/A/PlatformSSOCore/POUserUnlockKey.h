@interface POUserUnlockKey : NSObject

+ (BOOL)createUnlockKeyWithPublicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0 userName:(id)a1 returningCertificate:(struct __SecCertificate **)a2 hash:(id *)a3 encryptedData:(id *)a4;
+ (struct __SecCertificate { } *)selfSignedCertWithPrivateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0 subjectName:(id)a1;
+ (BOOL)unlockKey:(id)a0 privateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1 returningKey:(struct __SecKey **)a2;

@end
