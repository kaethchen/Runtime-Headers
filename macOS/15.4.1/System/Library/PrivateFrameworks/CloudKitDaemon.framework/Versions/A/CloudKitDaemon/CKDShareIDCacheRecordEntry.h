@class NSNumber, NSString;

@interface CKDShareIDCacheRecordEntry : CKSQLiteCacheTableEntry

@property (retain, nonatomic) NSNumber *rowID;
@property (retain, nonatomic) NSNumber *zoneRowID;
@property (retain, nonatomic) NSString *recordName;
@property (retain, nonatomic) NSNumber *shareRowID;
@property (retain, nonatomic) NSNumber *parentRowID;

- (void).cxx_destruct;
- (id)initWithZoneRowID:(id)a0 recordName:(id)a1;

@end
