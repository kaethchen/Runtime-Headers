@interface IMDRecoverableMessageStore : NSObject <RecordStoreProviding, RecordStoreDeleting> {
    void /* unknown type, empty encoding */ metadataByRecordNameMap;
}

- (id)init;
- (void).cxx_destruct;
- (void)resetFetchState;
- (id)batchOfRecordIDsToDeleteWithLimit:(long long)a0 error:(id *)a1;
- (id)batchOfRecordsToWriteWithFilter:(unsigned long long)a0 limit:(long long)a1 error:(id *)a2;
- (void)clearLocalSyncState:(unsigned long long)a0;
- (void)clearTombstonesForRecordIDs:(id)a0;
- (void)legacyImport:(id)a0;
- (void)recordUpdateFailedWithID:(id)a0 localGUID:(id)a1 error:(id)a2;
- (void)recordUpdateSucceededWithRecord:(id)a0;
- (void)resetLocalSyncStateIfAppropriate;

@end
