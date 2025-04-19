@class NSData, NSString, BerkeleyDatabase;

@interface FirefoxCryptoKeyStoreV3 : NSObject <FirefoxCryptoKeyStorage> {
    BerkeleyDatabase *_database;
    BOOL _databasePassedSanityCheck;
    NSData *_passwordCheckData;
    NSData *_passwordCheckHeader;
    NSData *_passwordCheckEntrySalt;
    NSData *_passwordCheckPayload;
}

@property (readonly, nonatomic) BOOL canOpen;
@property (readonly, nonatomic) BOOL storesRawPrivateKey;
@property (readonly, nonatomic) BOOL isKeyStorageUsingFirefox75AndAbove;
@property (readonly, copy, nonatomic) NSData *globalSaltData;
@property (readonly, copy, nonatomic) NSData *passwordCheckEntrySalt;
@property (readonly, copy, nonatomic) NSData *passwordCheckPayload;
@property (readonly, copy, nonatomic) NSData *passwordCheckIV;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_dataForKey:(id)a0;
- (BOOL)_openDatabaseIfNeeded;
- (id)initWithStoreURL:(id)a0;
- (id)_passwordCheckData;
- (id)_passwordCheckHeader;
- (void)_resetDerivedData;
- (id)_versionData;
- (id)encryptedPrivateKeyDataWithID:(id)a0;

@end
