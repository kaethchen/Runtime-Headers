@class CKDRecordPCSData, CKRecordID, NSString;

@interface CKDPCSCacheRecordFetchOperation : CKDPCSCacheFetchOperation

@property (readonly, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) CKDRecordPCSData *recordPCSData;
@property (nonatomic) BOOL serverRecordHasNoProtectionData;
@property (retain, nonatomic) NSString *serverRecordType;

- (void).cxx_destruct;
- (BOOL)_createAdditionalPCS;
- (BOOL)_decryptPCS;
- (BOOL)_decryptRecordPCSInPrivateDatabase;
- (BOOL)_decryptRecordPCSInSharedDatabase;
- (BOOL)_fetchDependentPCS;
- (BOOL)_fetchDependentPCSInSharedDatabase;
- (BOOL)_fetchPCSDataFromDatabase;
- (BOOL)_fetchPCSDataFromServer;
- (BOOL)_fetchPCSForPrivateZone;
- (void)_handlePCSDataFetched:(id)a0 withError:(id)a1;
- (BOOL)_savePCSDataToCache;
- (BOOL)hasAllPCSData;
- (id)itemTypeName;
- (BOOL)needsChainPCSCreation;

@end
