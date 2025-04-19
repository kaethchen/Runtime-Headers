@class ICEncryptionKey, NSString, ICEncryptionMetadata, ICEncryptionObject, ICCloudSyncingObject;

@interface ICNoteCryptoStrategyV1 : ICCloudSyncingObjectCryptoStrategyV1 <ICNoteCryptoStrategy>

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

- (BOOL)decrypt;
- (void)correctCryptoTagAndIVIfNecessary;
- (id)decryptNotePrimitiveData;
- (id)decryptTextDataOrSaveAsUnappliedRecordIfNotAuthenticated:(id)a0;
- (BOOL)mainKeyDecryptsPrimaryData:(id)a0;
- (void)mergeEncryptedData:(id)a0 mergeConflict:(id)a1;
- (BOOL)mergeEncryptedDataFromRecord:(id)a0;
- (void)recoverMissingCryptoWrappedKeyIfNeededWithMainKey:(id)a0;
- (BOOL)rewrapWithMainKey:(id)a0;
- (id)unwrappedKey;
- (BOOL)writeEncryptedNoteData:(id)a0;

@end
