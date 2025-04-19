@class NSString, ICAccountCryptoStrategyV1, ICAccountCryptoStrategyV2, ICEncryptionObject, ICAccountCryptoStrategyV1Neo, ICEncryptionMetadata, ICCloudSyncingObject, ICEncryptionKey;
@protocol ICAccountCryptoStrategy;

@interface ICAccountCryptoStrategyProxy : ICCryptoStrategyBase <ICAccountCryptoStrategy>

@property (readonly, nonatomic) ICAccountCryptoStrategyV1 *v1Strategy;
@property (readonly, nonatomic) ICAccountCryptoStrategyV1Neo *v1NeoStrategy;
@property (readonly, nonatomic) ICAccountCryptoStrategyV2 *v2Strategy;
@property (readonly, nonatomic) id<ICAccountCryptoStrategy> customPasswordStrategy;
@property (readonly, nonatomic) id<ICAccountCryptoStrategy> devicePasswordStrategy;
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

- (void).cxx_destruct;
- (id)currentStrategy;
- (BOOL)authenticateWithPassphrase:(id)a0;
- (id)decryptSidecarData:(id)a0;
- (BOOL)encryptFileFromURL:(id)a0 toURL:(id)a1;
- (id)encryptSidecarData:(id)a0;
- (BOOL)encryptSidecarFileFromURL:(id)a0 toURL:(id)a1;
- (id)encryptedData:(id)a0 rewrappedWithMainKey:(id)a1;
- (BOOL)hasSameKeyAsObject:(id)a0;
- (id)initWithCloudSyncingObject:(id)a0;
- (void)initializeCryptoPropertiesFromObject:(id)a0;
- (BOOL)isPassphraseCorrect:(id)a0;
- (BOOL)loadDecryptedValuesIfNecessary;
- (BOOL)mainKeyDecryptsPrimaryData:(id)a0;
- (id)mainKeyForPassphrase:(id)a0;
- (BOOL)mergeEncryptedDataFromRecord:(id)a0;
- (BOOL)recordHasChangedPassphrase:(id)a0;
- (void)removePassphrase;
- (BOOL)rewrapDataAtURL:(id)a0 withMainKey:(id)a1;
- (BOOL)rewrapWithMainKey:(id)a0;
- (BOOL)saveEncryptedJSON;
- (BOOL)setPassphrase:(id)a0 hint:(id)a1;

@end
