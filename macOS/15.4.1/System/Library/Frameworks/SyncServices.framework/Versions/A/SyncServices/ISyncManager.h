@interface ISyncManager : NSObject

+ (void)initialize;
+ (id)sharedManager;
+ (void)clearThreadISyncRecordSnapshotTable;
+ (unsigned long long)dataWrapperThresholdSize;
+ (id)getThreadISyncRecordSnapshotTable;
+ (void)setDataReferencesDirectory:(id)a0;
+ (void)setSyncServerName:(id)a0 dataDirectoryPath:(id)a1;

- (BOOL)isEnabled;
- (void)addRequestMode:(id)a0;
- (void)removeRequestMode:(id)a0;
- (id)requestModes;
- (id)clientWithIdentifier:(id)a0;
- (void)unregisterClient:(id)a0;
- (void)clientWithIdentifier:(id)a0 needsSyncing:(BOOL)a1;
- (id)registerClientWithIdentifier:(id)a0 description:(id)a1;
- (id)registerClientWithIdentifier:(id)a0 descriptionFilePath:(id)a1;
- (BOOL)registerSchemaWithBundlePath:(id)a0;
- (void)registerSchemaWithDescriptionFilePath:(id)a0;
- (void)resetClientsWithLastSyncDatesEarlierThanDate:(bycopy id)a0 purgeTruth:(bycopy BOOL)a1 andVacuum:(bycopy BOOL)a2;
- (void)resetSyncData;
- (id)snapshotOfRecordsInTruthWithEntityNames:(id)a0 usingIdentifiersForClient:(id)a1;
- (id)syncDatesForClientsEarlierThanDate:(bycopy id)a0;
- (id)syncDisabledReason;
- (void)unregisterSchemaWithName:(id)a0;

@end
