@interface ICNFMCKeychainManager : NSObject

+ (void)initialize;
+ (struct __SecCertificate { } *)copyEncryptionCertificateForAddress:(id)a0;
+ (struct __SecPolicy { } *)createSMIMEPolicyForAddress:(id)a0 keyUsage:(void *)a1;
+ (id)sessionTrustedCertificatesForHost:(id)a0;
+ (void)setSessionTrustedCertificates:(id)a0 forHost:(id)a1;
+ (id)_copyTlsClientIdentities;
+ (BOOL)canEncryptMessagesToAddress:(id)a0;
+ (BOOL)canEncryptMessagesToAddresses:(id)a0 sender:(id)a1;
+ (BOOL)canSignMessagesFromAddress:(id)a0;
+ (BOOL)configureTLSCertificatesPopUp:(id)a0 usingPersistentReference:(BOOL)a1 withOldIdentity:(id)a2 newIdentity:(id *)a3;
+ (struct __SecIdentity { } *)copySigningIdentityForAddress:(id)a0;
+ (id)passwordForHost:(id)a0 username:(id)a1 port:(long long)a2 protocol:(void *)a3;
+ (id)passwordForServiceName:(id)a0 accountName:(id)a1;
+ (void)removePasswordForHost:(id)a0 username:(id)a1 port:(long long)a2 protocol:(void *)a3;
+ (void)removePasswordForServiceName:(id)a0 accountName:(id)a1;
+ (void)setPassword:(id)a0 forServiceName:(id)a1 accountName:(id)a2;

@end
