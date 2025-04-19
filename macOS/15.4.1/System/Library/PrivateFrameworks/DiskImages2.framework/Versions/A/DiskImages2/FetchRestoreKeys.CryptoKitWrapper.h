@interface FetchRestoreKeys.CryptoKitWrapper : NSObject

+ (id)convertPrivateKeyToPEMWithX963PrivateKey:(id)a0 error:(id *)a1;
+ (id)convertPrivateKeyTox963WithPemPrivateKey:(id)a0 error:(id *)a1;
+ (id)unwrapEncryptionKeyWithWrappedKey:(id)a0 encapsulatedKey:(id)a1 privateKey:(id)a2 error:(id *)a3;
+ (id)wrappedDataDictionaryWithCertWithPlainText:(id)a0 certificate:(struct __SecCertificate { } *)a1 error:(id *)a2;

- (id)init;

@end
