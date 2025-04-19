@class NSString, BRCPQLConnection, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_workloop;

@interface BRCDatabaseFacade : NSObject <BRCServerDatabaseReadProtocol> {
    BRCPQLConnection *_db;
    NSObject<OS_dispatch_workloop> *_workloop;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_workloop> *workloop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)assertOnQueue;
- (BOOL)performWithFlags:(unsigned int)a0 action:(id /* block */)a1;
- (void)forceBatchStart;
- (BOOL)groupInTransaction:(id /* block */)a0;
- (void)assertNotOnQueue;
- (id)_initWithDB:(id)a0 workloop:(id)a1;
- (id)deviceKeyForName:(id)a0;
- (id)deviceNameForDeviceID:(long long)a0;
- (id)initWithDB:(id)a0 workloop:(id)a1;
- (id)serverAliasItemForItemWithBookmarkData:(id)a0 inZone:(id)a1 itemBuilder:(id)a2;
- (id)serverChildCountWithParentID:(id)a0 zoneRowID:(id)a1;
- (id)serverItemByParentID:(id)a0 andLogicalName:(id)a1 zoneRowID:(id)a2 itemBuilder:(id)a3;
- (id)serverItemByRank:(long long)a0 zoneRowID:(id)a1 itemBuilder:(id)a2;
- (id)serverItemByRowID:(unsigned long long)a0 itemBuilder:(id)a1;
- (id)serverItemTypeForItemWithID:(id)a0 zoneRowID:(id)a1;
- (id)serverItemWithItemID:(id)a0 itemBuilder:(id)a1;
- (id)serverItemWithItemID:(id)a0 zoneRowID:(id)a1 itemBuilder:(id)a2;
- (id)serverQuotaUsageWithParentID:(id)a0 zoneRowID:(id)a1;
- (long long)serverRankByItemID:(id)a0 zoneRowID:(id)a1;
- (id)userIdentityForKey:(id)a0;
- (id)userIdentityForName:(id)a0;
- (id)userKeyForOwnerName:(id)a0;
- (id)zoneIDsEnumeratorForItemWithItemID:(id)a0;

@end
