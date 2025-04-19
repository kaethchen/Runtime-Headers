@class NSNumber, NSString, NSDate;

@interface CKDDeviceCapabilityUsageSQLEntry : CKSQLiteCacheTableEntry

@property (retain, nonatomic) NSNumber *rowID;
@property (retain, nonatomic) NSString *IDString;
@property (retain, nonatomic) NSNumber *itemType;
@property (copy, nonatomic) NSDate *lastUsed;
@property (copy, nonatomic) NSDate *lastSent;
@property (copy, nonatomic) NSDate *sending;
@property (nonatomic) unsigned long long failureCount;

- (void).cxx_destruct;

@end
