@class CKDZonePCSData, CKRecordZoneID;

@interface CKDPCSCacheZoneFetchOperation : CKDPCSCacheFetchOperation

@property (readonly, nonatomic) BOOL needsZoneishPCS;
@property (readonly, nonatomic) CKRecordZoneID *zoneID;
@property (retain, nonatomic) CKDZonePCSData *zonePCSData;
@property (nonatomic) BOOL shouldCreateZoneishPCS;
@property (nonatomic) BOOL rolledPCSForZone;

- (int)operationType;
- (void)_decryptZonePCSInSharedDatabase;
- (void)_willRetryFetch;
- (BOOL)_checkAndUpdateZonePCSIfNeeded;
- (BOOL)_createAdditionalPCS;
- (BOOL)_decryptPCS;
- (void)_decryptZonePCSUsingServiceIdentities;
- (void)_fetchDepedentPCSInSharedDatabase;
- (BOOL)_fetchDependentPCS;
- (BOOL)_fetchPCSDataFromDatabase;
- (BOOL)_fetchPCSDataFromServer;
- (void)_handleDecryptedZonePCSData:(id)a0 withError:(id)a1;
- (void)_handlePCSDataFetched:(id)a0 withError:(id)a1;
- (void)_saveNewPCSOnZone:(id)a0 completion:(id /* block */)a1;
- (BOOL)_savePCSDataToCache;
- (BOOL)_saveUpdatedPCSToServer;
- (void)_saveZoneToServer:(id)a0 completion:(id /* block */)a1;
- (void)_saveZoneToServer:(id)a0 withPCS:(struct _OpaquePCSShareProtection { } *)a1 zoneishPCS:(struct _OpaquePCSShareProtection { } *)a2 previousEtag:(id)a3 completion:(id /* block */)a4;
- (BOOL)hasAllPCSData;
- (id)itemTypeName;

@end
