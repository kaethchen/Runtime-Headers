@class ICEncryptionKey, NSString, ICEncryptionMetadata, ICEncryptionObject, ICCloudSyncingObject;

@interface ICMediaCryptoStrategyV1Neo : ICCloudSyncingObjectCryptoStrategyV1Neo <ICMediaCryptoStrategy>

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

- (id)decryptedData;
- (BOOL)encryptFileFromURL:(id)a0 toURL:(id)a1;
- (BOOL)rewrapWithMainKey:(id)a0;

@end
