@class NSNumber;

@interface CKDZoneShareCacheEntry : CKSQLiteCacheTableEntry

@property (retain, nonatomic) NSNumber *zoneRowID;
@property (retain, nonatomic) NSNumber *shareRowID;

- (void).cxx_destruct;
- (id)initWithZoneRowID:(id)a0 shareRowID:(id)a1;

@end
