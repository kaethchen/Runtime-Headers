@class NSString;
@protocol FirefoxCryptoKeyStorage;

@interface FirefoxCredentialDecrypter : NSObject {
    id<FirefoxCryptoKeyStorage> _keyStore;
}

@property (copy, nonatomic) NSString *masterPassword;
@property (readonly, nonatomic, getter=isMasterPasswordCorrect) BOOL masterPasswordCorrect;

+ (id)_AESDecryptedPrivateKeyFromEncryptedPrivateKey:(id)a0 unpaddedIV:(id)a1 entrySalt:(id)a2 globalSalt:(id)a3 masterPassword:(id)a4;
+ (id)_dataByDecryptingData:(id)a0 rawKey:(id)a1 initializationVector:(id)a2;

- (void).cxx_destruct;
- (id)_hmacForData:(id)a0 key:(id)a1;
- (id)_rawKeyFromDecryptedPrivateKey:(id)a0;
- (id)_combinedHashOfHashedPassword:(id)a0 entrySalt:(id)a1;
- (id)_decryptedPrivateKeyFromEncryptedPrivateKey:(id)a0 password:(id)a1 globalSalt:(id)a2 entrySalt:(id)a3;
- (id)_entrySaltByPaddingEntrySalt:(id)a0;
- (id)_extractDecryptedPrivateKeyFromEncryptedPrivateKeyPayload:(id)a0 entrySalt:(id)a1 unpaddedIV:(id)a2;
- (void)_getEncryptedPrivateKeyData:(id *)a0 cipherText:(id *)a1 initializationVector:(id *)a2 forEncryptedCredentialData:(id)a3;
- (void)_getKeyId:(id *)a0 initializationVector:(id *)a1 cipherText:(id *)a2 fromEncryptedCredentialData:(id)a3;
- (void)_getRawKey:(id *)a0 andInitializationVector:(id *)a1 fromKKey:(id)a2;
- (void)_getRawKey:(id *)a0 andInitializationVector:(id *)a1 fromPassword:(id)a2 globalSalt:(id)a3 entrySalt:(id)a4;
- (id)_hashOfPassword:(id)a0 usingGlobalSalt:(id)a1;
- (id)_k1KeyFromEntrySalt:(id)a0 combinedHashedPassword:(id)a1;
- (id)_k2KeyFromEntrySalt:(id)a0 temporaryKey:(id)a1 combinedHashedPassword:(id)a2;
- (id)_kKeyFromK1Key:(id)a0 k2Key:(id)a1;
- (id)_masterPasswordData;
- (id)_stringByDecryptingCredentialData:(id)a0;
- (id)_temporaryKeyFromPaddedEntrySalt:(id)a0 combinedHashedPassword:(id)a1;
- (id)_test_AESDecryptedPrivateKeyFromEncryptedPrivateKey:(id)a0 unpaddedIV:(id)a1 entrySalt:(id)a2 globalSalt:(id)a3 masterPassword:(id)a4;
- (id)_test_combinedHashOfHashedPassword:(id)a0 entrySalt:(id)a1;
- (id)_test_dataByDecryptingData:(id)a0 rawKey:(id)a1 initializationVector:(id)a2;
- (id)_test_entrySaltByPaddingEntrySalt:(id)a0;
- (void)_test_getKeyId:(id *)a0 initializationVector:(id *)a1 cipherText:(id *)a2 fromEncryptedCredentialData:(id)a3;
- (void)_test_getRawKey:(id *)a0 andInitializationVector:(id *)a1 fromKKey:(id)a2;
- (void)_test_getRawKey:(id *)a0 andInitializationVector:(id *)a1 fromPassword:(id)a2 globalSalt:(id)a3 entrySalt:(id)a4;
- (id)_test_hashOfPassword:(id)a0 usingGlobalSalt:(id)a1;
- (id)_test_init;
- (id)_test_k1KeyFromEntrySalt:(id)a0 combinedHashedPassword:(id)a1;
- (id)_test_k2KeyFromEntrySalt:(id)a0 temporaryKey:(id)a1 combinedHashedPassword:(id)a2;
- (id)_test_kKeyFromK1Key:(id)a0 k2Key:(id)a1;
- (id)_test_temporaryKeyFromPaddedEntrySalt:(id)a0 combinedHashedPassword:(id)a1;
- (id)credentialByDecryptingFirefoxCredential:(id)a0;
- (id)initWithKeyStore:(id)a0;

@end
