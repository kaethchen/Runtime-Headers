@interface MCKeychainManager : NSObject

+ (struct __SecCertificate { } *)copyEncryptionCertificateForAddress:(id)a0;
+ (struct __SecIdentity { } *)copySigningIdentityForAddress:(id)a0 error:(id *)a1;
+ (int)_encryptionCertificateFromList:(struct __CFArray { } *)a0 forPolicy:(struct __SecPolicy { } *)a1 matchingCertificate:(struct __SecCertificate **)a2;
+ (int)_trustedEncryptionCertificatesForPolicy:(struct __SecPolicy { } *)a0 matchingCertificates:(const struct __CFArray **)a1;
+ (id)copyTLSClientIdentities;
+ (struct __SecPolicy { } *)createSMIMEPolicyForAddress:(id)a0 keyUsage:(void *)a1;
+ (struct __SecPolicy { } *)createSMIMEPolicyForAddress:(id)a0 keyUsage:(void *)a1 ignoreExpiration:(BOOL)a2;
+ (id)sessionTrustedCertificatesForHost:(id)a0;
+ (void)setSessionTrustedCertificates:(id)a0 forHost:(id)a1;

@end
