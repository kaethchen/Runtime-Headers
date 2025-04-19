@interface POCredentialUtil : NSObject

+ (id)decryptPendingSSOTokens:(id)a0 UsingPrivateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1 sharedData:(id)a2;
+ (BOOL)encryptPendingSSOTokens:(id)a0 usingPublicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1 sharedData:(id)a2 encryptedTokens:(id *)a3;
+ (id)maskName:(id)a0;
+ (id)passwordDataFromContext:(id)a0 error:(id *)a1;
+ (id)passwordStringFromData:(id)a0;

@end
