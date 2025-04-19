@class ICEncryptionKey, NSString, ICEncryptionMetadata, ICEncryptionObject, ICCloudSyncingObject;

@interface ICCryptoStrategyBase : NSObject <ICCloudSyncingObjectCryptoStrategy>

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
- (id)decryptData:(id)a0;
- (id)encryptData:(id)a0;
- (void)performBlockIfAttachmentExists:(id /* block */)a0;
- (BOOL)authenticateWithPassphrase:(id)a0;
- (id)decryptSidecarData:(id)a0;
- (id)decryptedDataFromFileURL:(id)a0;
- (id)decryptedSidecarDataFromFileURL:(id)a0;
- (BOOL)encryptFileFromURL:(id)a0 toURL:(id)a1;
- (id)encryptSidecarData:(id)a0;
- (BOOL)encryptSidecarFileFromURL:(id)a0 toURL:(id)a1;
- (id)encryptedData:(id)a0 rewrappedWithMainKey:(id)a1;
- (BOOL)hasSameKeyAsObject:(id)a0;
- (id)initWithCloudSyncingObject:(id)a0;
- (void)initializeCryptoPropertiesFromObject:(id)a0;
- (void)invalidateStrategy;
- (BOOL)isPassphraseCorrect:(id)a0;
- (BOOL)isRecordAuthenticated:(id)a0;
- (BOOL)loadDecryptedValuesIfNecessary;
- (BOOL)mainKeyDecryptsPrimaryData:(id)a0;
- (id)mainKeyForPassphrase:(id)a0;
- (BOOL)mergeEncryptedDataFromRecord:(id)a0;
- (void)performBlockIfAccountExists:(id /* block */)a0;
- (void)performBlockIfMediaExists:(id /* block */)a0;
- (void)performBlockIfNoteExists:(id /* block */)a0;
- (void)performBlockIfObjectExists:(id /* block */)a0;
- (void)performBlockIfPreviewImageExists:(id /* block */)a0;
- (BOOL)recordHasChangedPassphrase:(id)a0;
- (BOOL)rewrapDataAtURL:(id)a0 withMainKey:(id)a1;
- (BOOL)rewrapFile:(id /* block */)a0 withMainKey:(id)a1 generationManager:(id)a2;
- (BOOL)rewrapWithMainKey:(id)a0;
- (BOOL)saveEncryptedJSON;
- (BOOL)serialize:(id)a0 toURL:(id)a1;

@end
