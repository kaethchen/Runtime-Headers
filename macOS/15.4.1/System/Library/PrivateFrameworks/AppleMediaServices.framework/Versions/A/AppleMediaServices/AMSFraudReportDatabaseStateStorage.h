@class NSArray, NSString, AMSStorageDatabase, NSDate;

@interface AMSFraudReportDatabaseStateStorage : NSObject <AMSFraudReportStateStorage> {
    AMSStorageDatabase *_storageDatabase;
}

@property (retain, nonatomic) NSDate *lastCleanupDate;
@property (readonly, nonatomic) NSArray *allKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

@end
