@class CKDZoneIDCacheTable, CKContainerID, CKDShareIDCacheTable, CKDZoneShareCacheTable, CKDShareIDCacheRecordTable;

@interface CKDShareIDSQLCache : CKSQLiteContainerAttributedTableGroup

@property (retain, nonatomic) CKContainerID *containerID;
@property (readonly, nonatomic) CKDZoneIDCacheTable *zoneIDTable;
@property (readonly, nonatomic) CKDShareIDCacheTable *shareIDTable;
@property (readonly, nonatomic) CKDZoneShareCacheTable *zoneShareTable;
@property (readonly, nonatomic) CKDShareIDCacheRecordTable *recordTable;

+ (double)expirationTime;
+ (id)_groupNameForContainer:(id)a0;
+ (id)shareIDSQLCacheForContainer:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)createTables:(id *)a0;
- (void)removeZoneWithID:(id)a0;
- (void)addZoneShareID:(id)a0;
- (void)removeRecordID:(id)a0;
- (void)addHierarchicalShareID:(id)a0 forRootRecordID:(id)a1;
- (void)addOrUpdateRecordID:(id)a0 withParentID:(id)a1;
- (void)removeShareID:(id)a0;
- (BOOL)removeShareWithShareEntry:(id)a0 error:(id *)a1;
- (void)removeZoneShareForZoneID:(id)a0;
- (id)shareIDForRecordID:(id)a0;
- (id)shareIDsForZoneID:(id)a0;
- (id)zoneShareIDForZoneID:(id)a0;

@end
