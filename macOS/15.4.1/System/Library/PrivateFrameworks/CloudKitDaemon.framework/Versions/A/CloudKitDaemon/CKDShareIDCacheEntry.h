@class NSNumber, NSString;

@interface CKDShareIDCacheEntry : CKSQLiteCacheTableEntry

@property (retain, nonatomic) NSNumber *rowID;
@property (retain, nonatomic) NSString *recordName;
@property (retain, nonatomic) NSNumber *zoneRowID;

- (void).cxx_destruct;
- (id)initWithRecordName:(id)a0 zoneRowID:(id)a1;

@end
