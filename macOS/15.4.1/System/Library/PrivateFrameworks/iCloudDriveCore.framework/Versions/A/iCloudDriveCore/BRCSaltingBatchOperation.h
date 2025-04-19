@class BRCItemID, NSString, CKRecordID, NSDictionary, NSData, BRCClientZone, CKRecord;

@interface BRCSaltingBatchOperation : _BRCOperation <BRCOperationSubclass> {
    long long _batchSize;
    BRCClientZone *_parentClientZone;
    BRCItemID *_parentItemID;
    CKRecordID *_parentRecordID;
    unsigned int _parentSaltingState;
    NSDictionary *_parentPluginFields;
    CKRecord *_appLibraryRootRecord;
    NSData *_baseHashSaltValidationKey;
    NSData *_childBaseSalt;
    BOOL _parentItemEncounteredValidationError;
}

@property (copy, nonatomic) id /* block */ metadataCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)_buildRecordsWithCompletion:(id /* block */)a0;
- (void)_createCKOperationForRecords:(id)a0 completion:(id /* block */)a1;
- (id)_createStructureRecordForParentItem;
- (id)_createStructureRecordForServerItem:(id)a0 salt:(id)a1;
- (id)_createStructureRecordWithRecordID:(id)a0 serverItem:(id)a1;
- (void)_saltChildRecordFields:(id)a0 serverItem:(id)a1 basehashSalt:(id)a2;
- (void)_sendRecordBatch:(id)a0 completion:(id /* block */)a1;
- (void)_updateRootItemInClientDB;
- (void)_updateRootItemInServerDB;
- (void)_updateSaltingInfoInClientDBWithRecords:(id)a0;
- (void)_updateSaltingInfoInServerDBWithRecords:(id)a0;
- (void)_updateServerTruthForItemID:(id)a0;
- (id)getOrGenerateChildBasehashSaltingKey;
- (id)initWithParentItem:(id)a0 sessionContext:(id)a1;

@end
