@interface MessageProtection.GFTKeyWrapper : NSObject

+ (id)decrypt:(id)a0 using:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1 error:(id *)a2;
+ (id)encrypt:(id)a0 to:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1 error:(id *)a2;
+ (id)unwrapWrappedSeed:(id)a0 legacy:(BOOL)a1 using:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a2 error:(id *)a3;
+ (id)wrapSeed:(id)a0 to:(id)a1 legacy:(BOOL)a2 error:(id *)a3;

- (id)init;
- (void).cxx_destruct;

@end
