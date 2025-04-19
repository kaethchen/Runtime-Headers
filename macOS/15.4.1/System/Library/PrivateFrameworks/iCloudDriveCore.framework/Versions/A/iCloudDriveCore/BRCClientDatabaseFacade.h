@class NSString;

@interface BRCClientDatabaseFacade : BRCDatabaseFacade <BRCClientDatabaseReadProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_localItemByFileID:(unsigned long long)a0 zoneInjectionCondition:(id)a1 itemBuilder:(id)a2;
- (id)allItemsSortedByDepthDescendingInZoneRowID:(id)a0 descending:(BOOL)a1 isSharedZone:(BOOL)a2 parentItemID:(id)a3 itemBuilder:(id)a4;
- (id)clientChildCountWithParentID:(id)a0 zoneRowID:(id)a1;
- (BOOL)clientStateData:(id *)a0 clientStateDictionary:(id *)a1 silent:(BOOL)a2;
- (id)clientStateDictionary;
- (id)clientStateDictionaryWithSilent:(BOOL)a0;
- (BOOL)containsNonRejectedChildWithParentID:(id)a0 zoneRowID:(id)a1;
- (id)documentItemByDocumentID:(unsigned int)a0 itemBuilder:(id)a1;
- (id)enumerateChildrenOfItemGlobalID:(id)a0 itemBuilder:(id)a1 sortOrder:(unsigned char)a2 offset:(unsigned long long)a3 limit:(unsigned long long)a4;
- (void)enumerateItemsWithShareIDUnderParent:(id)a0 block:(id /* block */)a1;
- (id)enumerateUserVisibleChildrenDirectoriesOfItemGlobalID:(id)a0 itemBuilder:(id)a1;
- (BOOL)existsByParentID:(id)a0 andLogicalName:(id)a1 excludingItemGlobalID:(id)a2 zoneRowID:(id)a3;
- (unsigned long long)inFlightSyncUpDiffsForItem:(id)a0;
- (unsigned long long)inFlightSyncUpDiffsForItem:(id)a0 zoneRowID:(id)a1;
- (id)initWithDB:(id)a0 workloop:(id)a1;
- (id)itemByParentID:(id)a0 andLogicalName:(id)a1 excludingItemID:(id)a2 zoneRowID:(id)a3 itemBuilder:(id)a4;
- (id)itemIDByRowID:(unsigned long long)a0;
- (char)itemTypeByItemID:(id)a0 zoneRowID:(id)a1;
- (id)itemsEnumeratorWithParentID:(id)a0 andLogicalName:(id)a1 zoneRowID:(id)a2 itemBuilder:(id)a3;
- (id)itemsParentedToPassedZoneButLivingInAnOtherZone:(id)a0 itemBuilder:(id)a1;
- (id)itemsWithInFlightDiffsEnumeratorInZone:(id)a0 itemBuilder:(id)a1;
- (id)itemsWithSideCarInflightDiffsWithItemBuilder:(id)a0;
- (id)localAliasForItemWithBookmarkData:(id)a0 inZone:(id)a1 itemBuilder:(id)a2;
- (id)localItemByFileID:(unsigned long long)a0 itemBuilder:(id)a1;
- (id)localItemByFileID:(unsigned long long)a0 zoneRowID:(id)a1 itemBuilder:(id)a2;
- (id)localItemByItemGlobalID:(id)a0 itemBuilder:(id)a1;
- (id)localItemByRowID:(unsigned long long)a0 itemBuilder:(id)a1;
- (id)localItemByRowID:(unsigned long long)a0 zoneRowID:(id)a1 itemBuilder:(id)a2;
- (id)serverHiddenChildCountWithParentID:(id)a0 zoneRowID:(id)a1;
- (BOOL)zoneHasItemsWithInflightDiffsInZoneRowID:(id)a0;

@end
