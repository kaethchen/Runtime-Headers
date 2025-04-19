@class HDDatabaseTransaction, HDProfile, HDEntityEncoder, NSMutableDictionary, HDDataProvenanceManager;

@interface HDDataProvenanceCache : NSObject {
    HDProfile *_profile;
    HDDataProvenanceManager *_provenanceManager;
    HDDatabaseTransaction *_transaction;
    HDEntityEncoder *_sourceEncoder;
    NSMutableDictionary *_provenanceByID;
    NSMutableDictionary *_codableSourcesByID;
    NSMutableDictionary *_deviceUUIDBytesByID;
    NSMutableDictionary *_sourceByPersistentIDCache;
    NSMutableDictionary *_sourceRevisionByDataProvenanceIDCache;
    NSMutableDictionary *_sourceRevisionsDictionaryBySourceCache;
    NSMutableDictionary *_deviceByPersistentIDCache;
    NSMutableDictionary *_contributorByReferenceCache;
    NSMutableDictionary *_codableObjectCollectionsByProvenance;
}

- (void).cxx_destruct;
- (id)allCodableObjectCollections;
- (id)allCodableObjectCollectionsByProvenance;
- (void)clearCodableObjectCollections;
- (id)codableObjectCollectionForProvenance:(id)a0 profile:(id)a1;
- (id)codableProvenanceWithProvenance:(id)a0;
- (id)codableSourceWithProvenance:(id)a0 profile:(id)a1;
- (id)contributorForReference:(id)a0 profile:(id)a1 error:(id *)a2;
- (id)deviceForPersistentID:(id)a0 profile:(id)a1 error:(id *)a2;
- (id)deviceUUIDBytesWithProvenance:(id)a0;
- (id)initWithProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2;
- (id)provenanceWithID:(id)a0;
- (id)sourceRevisionForProvenanceID:(id)a0 dataProvenance:(id)a1 profile:(id)a2 error:(id *)a3;

@end
