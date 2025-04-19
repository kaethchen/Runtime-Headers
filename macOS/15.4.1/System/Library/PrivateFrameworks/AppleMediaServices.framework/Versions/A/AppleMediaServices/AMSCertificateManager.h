@interface AMSCertificateManager : NSObject

+ (id)_baseKeychainQueryDictionaryWithLabel:(id)a0;
+ (void)_deleteItemForLabel:(id)a0 type:(unsigned long long)a1;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)_generateLegacyAttestationKeyPairWithAccount:(id)a0 style:(unsigned long long)a1 forPurpose:(unsigned long long)a2;
+ (void *)_itemForLabel:(id)a0 type:(unsigned long long)a1;
+ (void *)_itemForLabel:(id)a0 type:(unsigned long long)a1 additionalQueryParameters:(id)a2;
+ (id)_labelForAccount:(id)a0 itemType:(unsigned long long)a1 purpose:(unsigned long long)a2;
+ (void)_saveCertificate:(struct __SecCertificate { } *)a0 forLabel:(id)a1;
+ (void)_saveKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0 forLabel:(id)a1;
+ (struct __SecAccessControl { } *)accessControlForAccount:(id)a0 forSignaturePurpose:(unsigned long long)a1;
+ (id)certificatesForAccount:(id)a0 forSignaturePurpose:(unsigned long long)a1;
+ (void)deleteCertificatesForAccount:(id)a0 forSignaturePurpose:(unsigned long long)a1;
+ (BOOL)isExpiredForCertificates:(id)a0;
+ (id)legacyAttestationWithAccount:(id)a0 style:(unsigned long long)a1 forPurpose:(unsigned long long)a2;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)privateKeyForAccount:(id)a0 forSignaturePurpose:(unsigned long long)a1;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)privateKeyForAccount:(id)a0 withContext:(id)a1 forSignaturePurpose:(unsigned long long)a2;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)publicKeyForAccount:(id)a0 forSignaturePurpose:(unsigned long long)a1;
+ (void)saveCertificatesForAccount:(id)a0 leafCertificate:(struct __SecCertificate { } *)a1 intermediateCertificate:(struct __SecCertificate { } *)a2 privateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a3 forSignaturePurpose:(unsigned long long)a4;
+ (BOOL)shouldUseAccountSpecificCertificatesForAccount:(id)a0;

@end
