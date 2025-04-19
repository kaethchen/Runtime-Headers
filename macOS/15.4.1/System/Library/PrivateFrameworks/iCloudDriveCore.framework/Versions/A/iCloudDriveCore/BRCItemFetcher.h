@class BRCReadWriteClientDatabaseFacade, BRCReadWriteServerDatabaseFacade, BRCLocalItemBuilder, BRCServerItemBuilder;
@protocol BRCZoneAppRetriever;

@interface BRCItemFetcher : NSObject {
    id<BRCZoneAppRetriever> _zoneAppRetriever;
    BRCLocalItemBuilder *_localItemBuilder;
    BRCServerItemBuilder *_serverItemBuilder;
    BRCReadWriteClientDatabaseFacade *_defaultClientDBFacade;
    BRCReadWriteServerDatabaseFacade *_defaultServerDBFacade;
}

- (void).cxx_destruct;
- (id)enumerateUserVisibleChildrenDirectoriesOfItemGlobalID:(id)a0 dbFacade:(id)a1;
- (id)localAliasForSharedItem:(id)a0 inZone:(id)a1;
- (id)allClientItemsSortedByDepthDescendingInZoneRowID:(id)a0 descending:(BOOL)a1 isSharedZone:(BOOL)a2 parentItemID:(id)a3;
- (id)clientItemsEnumeratorWithParentID:(id)a0 andLogicalName:(id)a1 zoneRowID:(id)a2;
- (id)clientItemsParentedToPassedZoneButLivingInAnOtherZone:(id)a0;
- (id)clientItemsWithInFlightDiffsEnumeratorInZone:(id)a0;
- (id)enumerateChildrenOfItemGlobalID:(id)a0 dbFacade:(id)a1 sortOrder:(unsigned char)a2 offset:(unsigned long long)a3 limit:(unsigned long long)a4;
- (id)globalItemByDocumentID:(unsigned int)a0;
- (id)globalItemByDocumentID:(unsigned int)a0 dbFacade:(id)a1;
- (id)globalItemByFileID:(unsigned long long)a0;
- (id)globalItemByFileID:(unsigned long long)a0 dbFacade:(id)a1;
- (id)globalItemByFileID:(unsigned long long)a0 zoneRowID:(id)a1 dbFacade:(id)a2;
- (id)initWithSessionContext:(id)a0 localItemBuilder:(id)a1 serverItemBuilder:(id)a2;
- (id)itemByFileObjectID:(id)a0;
- (id)itemByFileObjectID:(id)a0 dbFacade:(id)a1;
- (id)itemByItemGlobalID:(id)a0;
- (id)itemByItemGlobalID:(id)a0 dbFacade:(id)a1;
- (id)itemByParentID:(id)a0 andLogicalName:(id)a1 excludingItemID:(id)a2 zoneRowID:(id)a3;
- (id)itemByRowID:(unsigned long long)a0;
- (id)itemByRowID:(unsigned long long)a0 dbFacade:(id)a1;
- (id)itemByRowID:(unsigned long long)a0 zoneRowID:(id)a1;
- (id)itemsWithSideCarInFlightDiffsEnumeratorWithDBFacade:(id)a0;
- (id)serverAliasItemForSharedItem:(id)a0;
- (id)serverAliasItemForSharedItem:(id)a0 dbFacade:(id)a1;
- (id)serverAliasItemForSharedItem:(id)a0 inZone:(id)a1;
- (id)serverAliasItemForSharedItem:(id)a0 inZone:(id)a1 dbFacade:(id)a2;
- (id)serverItemByItemID:(id)a0;
- (id)serverItemByItemID:(id)a0 zoneRowID:(id)a1 dbFacade:(id)a2;
- (id)serverItemByParentID:(id)a0 andLogicalName:(id)a1 zoneRowID:(id)a2 dbFacade:(id)a3;
- (id)serverItemByRank:(long long)a0 zoneRowID:(id)a1 dbFacade:(id)a2;
- (id)serverItemByRowID:(unsigned long long)a0;

@end
