@class ICEncryptionKey, NSString, NSMutableDictionary, ICEncryptionMetadata, ICEncryptionObject, ICCloudSyncingObject;

@interface ICCloudSyncingObjectCryptoStrategyV2 : ICCryptoStrategyBase <ICCloudSyncingObjectCryptoStrategy>

@property (class, readonly, nonatomic) NSMutableDictionary *accountKeyByIdentifier;

@property (readonly, nonatomic) NSString *accountDsid;
@property (readonly, nonatomic) NSString *accountKeyIdentifier;
@property (readonly, nonatomic) NSString *currentAccountKeyIdentifier;
@property (readonly, weak, nonatomic) ICCloudSyncingObject *object;
@property (readonly, nonatomic) long long intrinsicNotesVersion;
@property (readonly, nonatomic) BOOL canAuthenticate;
@property (readonly, nonatomic) BOOL isAuthenticated;
@property (readonly, nonatomic) BOOL hasPassphraseSet;
@property (readonly, copy, nonatomic) NSString *passphraseHint;
@property (readonly, nonatomic) ICEncryptionMetadata *primaryMetadata;
@property (readonly, nonatomic) ICEncryptionKey *primaryWrappedKey;
@property (readonly, nonatomic) ICEncryptionObject *primaryEncryptionObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)decryptData:(id)a0;
- (id)encryptData:(id)a0;
- (id)accountIdentifier;
- (void)serializeToEncryptedValuesJSON:(id)a0;
- (id)accountKeyWithIdentifier:(id)a0 createIfNotExist:(BOOL)a1;
- (BOOL)authenticateWithPassphrase:(id)a0;
- (BOOL)canAuthenticateRecord:(id)a0;
- (void)decryptAndMergeEncryptedJSON:(id)a0;
- (id)decryptObject:(id)a0;
- (id)decryptSidecarData:(id)a0;
- (id)decryptedDataFromFileURL:(id)a0;
- (BOOL)encryptFileFromURL:(id)a0 toURL:(id)a1;
- (id)encryptSidecarData:(id)a0;
- (BOOL)encryptSidecarFileFromURL:(id)a0 toURL:(id)a1;
- (id)encryptedData:(id)a0 rewrappedWithMainKey:(id)a1;
- (id)encryptedDataFromRecord:(id)a0;
- (void)fetchKeychainItemsForAccountKeyIdentifier:(id)a0 accountDsid:(id)a1;
- (BOOL)hasSameKeyAsObject:(id)a0;
- (BOOL)isInICloudAccount;
- (BOOL)isPassphraseCorrect:(id)a0;
- (BOOL)isRecordAuthenticated:(id)a0;
- (BOOL)loadDecryptedValuesIfNecessary;
- (BOOL)mainKeyDecryptsPrimaryData:(id)a0;
- (id)mainKeyForPassphrase:(id)a0;
- (BOOL)mergeEncryptedDataFromRecord:(id)a0;
- (BOOL)recordHasChangedPassphrase:(id)a0;
- (BOOL)rewrapDataAtURL:(id)a0 withMainKey:(id)a1;
- (BOOL)rewrapWithMainKey:(id)a0;
- (BOOL)saveEncryptedJSON;
- (BOOL)serialize:(id)a0 toURL:(id)a1;
- (BOOL)shouldSpoofAccountKey;

@end
