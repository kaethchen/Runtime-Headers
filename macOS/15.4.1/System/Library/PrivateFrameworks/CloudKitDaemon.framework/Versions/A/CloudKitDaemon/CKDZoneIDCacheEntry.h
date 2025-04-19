@class NSNumber, NSString;

@interface CKDZoneIDCacheEntry : CKSQLiteCacheTableEntry

@property (retain, nonatomic) NSNumber *rowID;
@property (retain, nonatomic) NSString *zoneIDString;

- (void).cxx_destruct;
- (id)initWithZoneIDString:(id)a0;

@end
