@interface SMAutoLoaderSSL : NSObject

+ (struct __SecIdentity { } *)clientIdentity;
+ (id)keychainPath;
+ (struct __SecIdentity { } *)serverIdentity;
+ (void)persistKeychainAndCertificates:(BOOL)a0;
+ (void)deleteKeychain;
+ (unsigned long long)passCodeFromServerKeyData:(id)a0 clientKeyData:(id)a1;
+ (id)pemEncodedDataFromIdentity:(struct __SecIdentity { } *)a0;
+ (void)unlockIdentityKeychain;
+ (void)userRespondedToPasscode:(unsigned long long)a0;
+ (id)publicKeyDataFromCertificate:(struct __SecCertificate { } *)a0;
+ (struct __SecKeychain { } *)sessionKeychain;
+ (id)certificateDataFromIdentity:(struct __SecIdentity { } *)a0;
+ (struct __SecCertificate { } *)certificateFromPEMEncodedData:(id)a0;
+ (id)dataWithTxtRecordPublicKeyValues:(id)a0;
+ (BOOL)doSynchronousPairingWithPasscode:(unsigned long long)a0;
+ (struct __SecCertificate { } *)generateSelfSignedCertificate:(id)a0 forSSLServer:(BOOL)a1;
+ (id)identitiesMatchingPrefix:(id)a0;
+ (BOOL)persistKeychainAndCertificates;
+ (id)publicKeyDataFromIdentity:(struct __SecIdentity { } *)a0;
+ (id)txtRecordPublicKeyValuesWithData:(id)a0;

@end
