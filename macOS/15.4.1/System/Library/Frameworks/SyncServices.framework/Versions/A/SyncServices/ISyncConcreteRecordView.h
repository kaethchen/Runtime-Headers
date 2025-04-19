@class NSMutableDictionary, NSDictionary, ISyncRecordSnapshot, ISDRecordStore, ISDConflictManager;

@interface ISyncConcreteRecordView : ISyncRecordView {
    ISDRecordStore *_recordStore;
    ISyncRecordSnapshot *_snapshot;
    NSDictionary *_clientStoreIdToTruthIdMap;
    NSDictionary *_truthIdToClientStoreIdMap;
    NSMutableDictionary *_cachedRecords;
    ISDConflictManager *_conflictManager;
}

- (void)dealloc;
- (void)resetCache;
- (id)actualRecordsWithIdentifiers:(id)a0;
- (void)flushAndResetConflictManager;
- (id)formattedAwayPropertiesForRecordWithIdentifier:(id)a0;
- (id)initWithRecordStore:(id)a0 identityMatchedIdMapper:(id)a1 entityNames:(id)a2;
- (id)recordByApplyingIdentityMatchedIdMapToRecord:(id)a0 withRecordId:(id)a1;
- (id)recordGraphNodesWithIdentifiers:(id)a0;

@end
