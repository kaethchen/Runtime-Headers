@interface MessageProtection.GLTKeyDiversificationSwift : NSObject

+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)diversifyWithPrivateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0 docId:(id)a1 trackingPreventionSalt:(id)a2 error:(id *)a3;
+ (id)diversifyWithPublicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0 trackingPreventionSalt:(id)a1 docId:(id)a2 error:(id *)a3;

- (id)init;

@end
