@class NSString, NSDictionary, CDPContext, CDPDSecureBackupConfiguration;
@protocol CDPDSecureBackupDelegate, CDPStateUIProviderInternal, CDPDSecureBackupProxy;

@interface CDPDSOSSecureBackupController : NSObject <CDPDSecureBackupControl>

@property (retain, nonatomic) NSDictionary *cachedAccountInfo;
@property (weak, nonatomic) id<CDPDSecureBackupDelegate> delegate;
@property (retain, nonatomic) CDPDSecureBackupConfiguration *configuration;
@property (readonly, nonatomic) CDPContext *context;
@property (readonly, nonatomic) id<CDPStateUIProviderInternal> uiProvider;
@property (retain, nonatomic) id<CDPDSecureBackupProxy> secureBackupProxy;
@property (nonatomic) BOOL fakeNearlyDepletedRecords;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_sanitizedInfoDictionary:(id)a0;

- (void).cxx_destruct;
- (id)_dateWithSecureBackupDateString:(id)a0;
- (void)isEligibleForCDPWithCompletion:(id /* block */)a0;
- (void)_accountInfoWithCompletion:(id /* block */)a0;
- (id)_clientMetadataWithSecretType:(unsigned long long)a0 length:(unsigned long long)a1;
- (void)_getBackupRecordDevicesIncludingUnrecoverableRecords:(BOOL)a0 completion:(id /* block */)a1;
- (id)_recoverBackupDictionaryWithContext:(id)a0 fallbackState:(unsigned long long)a1 error:(id *)a2;
- (id)_recoveryInfoDictionaryFromContext:(id)a0 usePreviouslyCachedSecret:(BOOL)a1;
- (BOOL)_shouldUseSBDCacheWithSecureBackupContext:(id)a0 fallbackState:(unsigned long long)a1;
- (void)accountInfoWithCompletion:(id /* block */)a0;
- (void)backupRecordsArePresentWithCompletion:(id /* block */)a0;
- (void)checkForExistingRecord:(id /* block */)a0;
- (void)checkForExistingRecordMatchingPredicate:(id)a0 forceFetch:(BOOL)a1 completion:(id /* block */)a2;
- (void)checkForExistingRecordWithPeerId:(id)a0 completion:(id /* block */)a1;
- (void)clearAccountInfoCache;
- (void)getBackupRecordDevicesWithOptionForceFetch:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithContext:(id)a0 uiProvider:(id)a1 delegate:(id)a2;
- (void)performEscrowRecoveryWithRecoveryContext:(id)a0 completion:(id /* block */)a1;
- (void)recoverSecureBackupWithContext:(id)a0 completion:(id /* block */)a1;
- (void)synchronizeKeyValueStoreWithCompletion:(id /* block */)a0;

@end
