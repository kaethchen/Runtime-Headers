@class PQLConnection, EXSAccount, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface EXSDataManager : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *databaseQueue;
@property (retain, nonatomic) PQLConnection *databaseConnection;
@property BOOL dbConnectionOpen;
@property (readonly, nonatomic) EXSAccount *account;

+ (id)createDatabaseURLForAccount:(id)a0 errorLog:(id)a1;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (void)shutdown;
- (long long)startup;
- (BOOL)_removeChangeSource:(id)a0 forAccount:(id)a1;
- (BOOL)_updateFolderWithExternalID:(id)a0 newInternalID:(id)a1 newInternalChangeKey:(id)a2;
- (id)getChangeItemsSinceChangeID:(long long)a0 skippingChangeSourceID:(id)a1 shouldBatch:(BOOL)a2;
- (BOOL)updateAttachmentMetadataWithAttachmentIDType:(id)a0 usingDBConnection:(id)a1;
- (BOOL)_updateFolderWithInternalID:(id)a0 newExternalID:(id)a1 newExternalChangeKey:(id)a2;
- (BOOL)updateAttachmentMetadataWithCachedFilePath:(id)a0 forAttachmentIDType:(id)a1;
- (void)_cleanupStaleData;
- (BOOL)_clearCachedFilePathForUUID:(id)a0 usingDBConnection:(id)a1;
- (long long)_distinguishedFolderTypeForExternalID:(id)a0;
- (id)_externalIDForDistinguishedFolderType:(long long)a0;
- (id)_fetchAttachmentMetadataForExternalID:(id)a0 usingDBConnection:(id)a1;
- (id)_fetchAttachmentMetadataForInternalID:(id)a0 usingDBConnection:(id)a1;
- (id)_findFolders;
- (id)_folderAssociatedWithChangeItem:(id)a0 markedAsDeleted:(BOOL)a1;
- (id)_folderWithExternalID:(id)a0 markedAsDeleted:(BOOL)a1;
- (id)_folderWithFolderID:(long long)a0 markedAsDeleted:(BOOL)a1;
- (id)_folderWithInternalID:(id)a0 markedAsDeleted:(BOOL)a1;
- (id)_foldersWithFolderType:(long long)a0;
- (id)_getAllAccountsFromChangeSources;
- (id)_getChangeItemsSinceChangeID:(long long)a0 skippingChangeSourceID:(id)a1 shouldBatch:(BOOL)a2;
- (id)_getSyncStateForChangeSource:(id)a0 inAccount:(id)a1;
- (id)_itemAssociatedWithChangeItem:(id)a0;
- (id)_itemWithExternalID:(id)a0;
- (id)_itemWithInternalID:(id)a0;
- (id)_itemWithItemID:(long long)a0;
- (id)_itemsInFolderID:(long long)a0;
- (id)_parentFolderAssociatedWithChangeItem:(id)a0;
- (BOOL)_prepareAccountDatabaseForCalDataImportUsingDBConnection:(id)a0;
- (BOOL)_registerChangeSource:(id)a0 forAccount:(id)a1;
- (BOOL)_setSyncState:(id)a0 forChangeSource:(id)a1 inAccount:(id)a2;
- (BOOL)_storeExternalFolderID:(id)a0 forDistinguishedFolderType:(long long)a1;
- (BOOL)_updateFolderWithExternalID:(id)a0 newParentExternalID:(id)a1;
- (BOOL)_updateItemWithExternalID:(id)a0 newExternalChangeKey:(id)a1;
- (BOOL)_updateItemWithExternalID:(id)a0 newInternalID:(id)a1 newInternalChangeKey:(id)a2;
- (BOOL)_updateItemWithExternalID:(id)a0 newParentExternalID:(id)a1;
- (BOOL)_updateItemWithInternalID:(id)a0 newExternalID:(id)a1 newExternalChangeKey:(id)a2;
- (BOOL)addItemForChangeItem:(id)a0 usingDBConnection:(id)a1;
- (id)beginDataPushForChangeSource:(id)a0 inAccount:(id)a1 forLastChangeID:(long long)a2;
- (id)cachedAttachmentForExternalID:(id)a0;
- (id)cachedAttachmentForInternalID:(id)a0;
- (void)cleanupStaleData;
- (BOOL)clearCachedFilePathForUUID:(id)a0;
- (BOOL)deleteAttachmentMetaData:(id)a0;
- (BOOL)deleteAttachmentMetadataForAttachmentWithUUID:(id)a0 usingDBConnection:(id)a1;
- (BOOL)deleteFolderForChangeItem:(id)a0 usingDBConnection:(id)a1;
- (BOOL)deleteItemForChangeItem:(id)a0 usingDBConnection:(id)a1;
- (BOOL)dropExistingTablesForMigration;
- (BOOL)dropInfoForFolder:(id)a0;
- (void)endDataPushForChangeSource:(id)a0 inAccount:(id)a1 withFailedLastChangeID:(long long)a2;
- (void)endDataPushForChangeSource:(id)a0 inAccount:(id)a1 withSuccessfulLastChangeID:(long long)a2;
- (id)fetchPropertiesBlobForChangeSource:(id)a0;
- (id)fetchPropertiesForStoredItemAssociatedWithExternalID:(id)a0;
- (id)fetchPropertiesForStoredItemAssociatedWithInternalID:(id)a0;
- (id)filePathForAttachmentWithID:(id)a0;
- (long long)findDistinguishedFolderTypeForExternalID:(id)a0;
- (id)findExternalIDForDistinguishedFolderType:(long long)a0;
- (id)findFolderAssociatedWithChangeItem:(id)a0;
- (id)findFolderForDistinguishedFolderType:(long long)a0;
- (id)findFolderWithExternalID:(id)a0;
- (id)findFolderWithInternalID:(id)a0;
- (id)findFolders;
- (id)findFoldersWithExternalIDs:(id)a0;
- (id)findFoldersWithFolderType:(long long)a0;
- (id)findItemAssociatedWithChangeItem:(id)a0;
- (id)findItemWithExternalID:(id)a0;
- (id)findItemWithInternalID:(id)a0;
- (id)findItemsInFolder:(id)a0;
- (id)findParentFolderAssociatedWithChangeItem:(id)a0;
- (id)getExternalParentFolderIDForMovingChangeItemWithParentID:(id)a0;
- (long long)getLastChangeIDForChangeSource:(id)a0 inAccount:(id)a1;
- (long long)getLastChangeItemIDForChangeSource:(id)a0 inAccount:(id)a1;
- (long long)getLastDataPushStateForChangeSource:(id)a0 inAccount:(id)a1 recoveryTrackingToken:(id *)a2 recoveryTimestamp:(id *)a3;
- (long long)getLastInsertedRowID:(id)a0;
- (id)getLastTrackingTokenForChangeSource:(id)a0;
- (id)getSyncStateForChangeSource:(id)a0 inAccount:(id)a1;
- (BOOL)persistAttachmentMetaData:(id)a0;
- (BOOL)persistChangeItem:(id)a0 forChangeSource:(id)a1;
- (BOOL)persistChangeItems:(id)a0 forChangeSource:(id)a1 newSyncState:(id)a2;
- (BOOL)persistChangeItems:(id)a0 forChangeSource:(id)a1 newSyncState:(id)a2 forBatch:(BOOL)a3;
- (BOOL)persistChangeItems:(id)a0 forChangeSource:(id)a1 newSyncState:(id)a2 forMigration:(BOOL)a3;
- (BOOL)persistChangeItems:(id)a0 forFolder:(id)a1 newFolderExternalSyncState:(id)a2;
- (BOOL)persistChangeItems:(id)a0 forFolder:(id)a1 newFolderInternalSyncState:(id)a2;
- (BOOL)persistChangeItems:(id)a0 usingDBConnection:(id)a1 forMigration:(BOOL)a2;
- (BOOL)persistChangeItems:(id)a0 usingDBConnection:(id)a1 forMigration:(BOOL)a2 silenceNotifications:(BOOL)a3;
- (BOOL)persistRepushedFolderItems:(id)a0;
- (id)persistedAccountAttachments;
- (id)persistedAttachmentsForEventWithID:(id)a0;
- (void)recoverFailedDataPushForChangeSource:(id)a0 inAccount:(id)a1;
- (void)recoverSuccessfulDataPushForChangeSource:(id)a0 inAccount:(id)a1;
- (BOOL)registerChangeSource:(id)a0 forAccount:(id)a1;
- (BOOL)removeChangeSource:(id)a0 forAccount:(id)a1;
- (BOOL)removeDatabaseFiles;
- (id)retrieveAttachmentDataAssociatedWithConsumerUUID:(id)a0;
- (id)retrieveAttachmentDataForEventWithID:(id)a0;
- (id)retrieveAttachmentMetadataForUUID:(id)a0;
- (id)retrieveCachedAttachmentFilepathForAttachmentWithUUID:(id)a0;
- (id)retrieveParentIDForAttachmentWithUUID:(id)a0;
- (BOOL)saveAttachmentMetadataForAttachment:(id)a0 usingDBConnection:(id)a1;
- (BOOL)savePropertiesBlobForChangeSource:(id)a0 withBlob:(id)a1;
- (BOOL)setSyncState:(id)a0 forChangeSource:(id)a1 inAccount:(id)a2;
- (void)shutdownWithDatabaseError:(id)a0;
- (BOOL)storeExternalFolderID:(id)a0 forDistinguishedFolderType:(long long)a1;
- (BOOL)updateAttachmentEventIDWithAttachmentIDType:(id)a0 usingDBConnection:(id)a1;
- (BOOL)updateAttachmentMetaData:(id)a0;
- (BOOL)updateAttachmentMetadataForAttachment:(id)a0 usingDBConnection:(id)a1;
- (BOOL)updateAttachmentMetadataWithCachedFilePath:(id)a0 forAttachmentIDType:(id)a1 usingDBConnection:(id)a2;
- (BOOL)updateEventIDForAttachment:(id)a0;
- (BOOL)updateExternalIDValueForAttachment:(id)a0;
- (BOOL)updateFolderWithExternalID:(id)a0 newInternalID:(id)a1 newInternalChangeKey:(id)a2;
- (BOOL)updateFolderWithExternalID:(id)a0 newParentExternalID:(id)a1;
- (BOOL)updateFolderWithInternalID:(id)a0 newExternalID:(id)a1 newExternalChangeKey:(id)a2;
- (BOOL)updateItemForChangeItem:(id)a0 usingDBConnection:(id)a1;
- (BOOL)updateItemWithExternalID:(id)a0 newExternalChangeKey:(id)a1;
- (BOOL)updateItemWithExternalID:(id)a0 newInternalID:(id)a1 newInternalChangeKey:(id)a2;
- (BOOL)updateItemWithExternalID:(id)a0 newParentExternalID:(id)a1;
- (BOOL)updateItemWithInternalID:(id)a0 newExternalID:(id)a1 newExternalChangeKey:(id)a2;
- (BOOL)updateOrAddFolderForChangeItem:(id)a0 usingDBConnection:(id)a1;
- (BOOL)updateOrAddFolderForChangeItem:(id)a0 usingDBConnection:(id)a1 forMigration:(BOOL)a2;
- (long long)validateDatabaseTableStructure;
- (void)writeAccountAttachmentItemsToArray:(id)a0;

@end
