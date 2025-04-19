@interface ISDDisabledServer : ISDServer

+ (id)defaultServer;

- (bycopy id)allClients;
- (void)setSyncManager:(id)a0;
- (void)setDataManager:(id)a0;
- (id)dataManager;
- (oneway void)removeLockFile;
- (oneway void)detectedDataDirectoryCorruption;
- (void)setShouldSynchronize:(bycopy id)a0 withClientsOfType:(bycopy id)a1 forClientWithIdentifier:(bycopy id)a2;
- (bycopy id)auditTokenCollectorPortForUUID:(id)a0;
- (void)killConnection:(byref id)a0;
- (void)unregisterClientWithIdentifier:(bycopy id)a0;
- (void)_reallyResetSyncData;
- (void)_resetSyncData;
- (bycopy id)addClients:(bycopy id)a0 toSyncPlanWithIdentifier:(bycopy id)a1;
- (bycopy id)allSyncPlans;
- (void)autoregisterDefaultClients;
- (void)autoregisterSystemSchemas;
- (oneway void)cancelSyncSessionForPlanWithIdentifier:(bycopy id)a0;
- (bycopy id)clientWithId:(bycopy id)a0 auditTokenUUID:(bycopy id)a1 wantsToBeginSyncPlanBeforeDate:(bycopy id)a2 entityNames:(bycopy id)a3 pushTruthForEntityNames:(bycopy id)a4 quietlyPushingTruth:(bycopy id)a5 callback:(byref id)a6 withPlanIdentifier:(id)a7 hasChanges:(bycopy id)a8 skip:(bycopy id)a9;
- (void)clientWithId:(bycopy id)a0 didBeginPushingChangesInSyncPlan:(bycopy id)a1 negotiatedSyncStates:(bycopy id)a2;
- (void)clientWithId:(bycopy id)a0 didEndPushingChangesInSyncPlan:(bycopy id)a1;
- (bycopy id)clientWithId:(bycopy id)a0 didEndSyncPlan:(bycopy id)a1 finishedSyncing:(bycopy id)a2;
- (bycopy id)clientWithId:(bycopy id)a0 wantsToBeginSyncPlanRightNow:(bycopy id)a1;
- (bycopy id)clientsWithIdentifiers:(bycopy id)a0 modifiedSinceAnchor:(inout unsigned int *)a1;
- (bycopy id)filterDataForClientWithIdentifier:(bycopy id)a0;
- (bycopy id)isSyncServerAvailable:(inout id *)a0;
- (bycopy id)registerClientWithIdentifier:(bycopy id)a0 description:(bycopy id)a1 descriptionFilePath:(bycopy id)a2;
- (void)registerSchemaWithDescription:(bycopy id)a0 descriptionFilePath:(bycopy id)a1;
- (void)registerSchemaWithDescription:(bycopy id)a0 descriptionFilePath:(bycopy id)a1 bundlePath:(bycopy id)a2;
- (void)resetEntityNamesAndSetAllClientsToRefresh:(bycopy id)a0;
- (oneway void)sayGoodnightGracie;
- (bycopy id)schemaDataModifiedSinceAnchor:(inout unsigned int *)a0 dataClassesNamed:(id)a1 entitiesNamed:(id)a2;
- (bycopy id)schemaNameForDataclass:(bycopy id)a0;
- (void)setDisplayName:(bycopy id)a0 forClientWithIdentifier:(bycopy id)a1;
- (void)setEnabled:(bycopy id)a0 forEntityNames:(bycopy id)a1 forClientWithIdentifier:(bycopy id)a2;
- (void)setFilterData:(bycopy id)a0 filteredEntityNames:(bycopy id)a1 forClientWithIdentifier:(bycopy id)a2;
- (void)setHasDynamicSyncAlertHandler:(bycopy id)a0 forClientWithIdentifier:(bycopy id)a1;
- (void)setImagePath:(bycopy id)a0 bundleId:(bycopy id)a1 bundleRelativePath:(bycopy id)a2 forClientWithIdentifier:(bycopy id)a3;
- (bycopy id)setOneShotSyncGroupWithClientIdentifiers:(bycopy id)a0 entityNames:(bycopy id)a1;
- (void)setShouldReplaceClientRecords:(bycopy id)a0 forEntityNames:(bycopy id)a1 forClientWithIdentifier:(bycopy id)a2;
- (void)setSyncAlertToolPath:(bycopy id)a0 bundleId:(bycopy id)a1 bundleRelativePath:(bycopy id)a2 forClientWithIdentifier:(bycopy id)a3;
- (bycopy id)setSyncMode:(bycopy id)a0 forEntityNames:(bycopy id)a1 forClientWithIdentifier:(bycopy id)a2;
- (void)setUseLocalIdsForGUIDs:(bycopy id)a0 forClientWithIdentifier:(bycopy id)a1;
- (bycopy id)syncPlanWithIdentifier:(bycopy id)a0;
- (bycopy id)syncServerStatistics;
- (void)unregisterSchemaWithName:(bycopy id)a0;

@end
