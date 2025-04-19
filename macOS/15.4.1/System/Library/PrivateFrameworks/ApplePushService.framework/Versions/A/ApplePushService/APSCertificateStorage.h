@interface APSCertificateStorage : NSObject

+ (BOOL)hasEntitlement:(id)a0;
+ (id)certificateName;
+ (id)activationRecordForName:(id)a0;
+ (struct __SecCertificate { } *)certificateForIdentity:(struct __SecIdentity { } *)a0;
+ (struct __SecIdentity { } *)clientIdentity;
+ (id)commonNameForCertificate:(struct __SecCertificate { } *)a0;
+ (struct __SecKeychainItem { } *)copyActivationRecordKeychainItemForName:(id)a0;
+ (struct __SecCertificate { } *)copyCertificateForName:(id)a0;
+ (void)flushKeychain;
+ (struct __SecKeychain { } *)getKeychain;
+ (id)getUniqueHostIdentifier;
+ (id)identityExpirationDate:(struct __SecIdentity { } *)a0;
+ (struct __SecIdentity { } *)identityForName:(id)a0;
+ (struct __SecKeychain { } *)unlockAndCopyKeychain;

@end
