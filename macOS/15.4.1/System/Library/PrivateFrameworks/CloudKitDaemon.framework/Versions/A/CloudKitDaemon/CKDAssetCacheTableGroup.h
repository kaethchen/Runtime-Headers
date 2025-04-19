@class CKDAssetVolumeTable, CKDAssetHandleTable;

@interface CKDAssetCacheTableGroup : CKSQLiteContainerAttributedTableGroup

@property (readonly, nonatomic) CKDAssetHandleTable *assetHandleTable;
@property (readonly, nonatomic) CKDAssetVolumeTable *assetVolumeTable;

+ (double)expirationTime;
+ (BOOL)rebootShouldClearData;

- (void).cxx_destruct;
- (id)createTables:(id *)a0;

@end
