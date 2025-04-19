@class NSDictionary, NSArray;

@interface STDeviceActivityDataSourceInterface : NSObject

@property (class, readonly, copy) NSDictionary *deviceIdentifiersByUserAltDSID;
@property (class, readonly, copy) NSArray *allLocallyUsedBundleIdentifiers;

+ (void)setGenesisDate:(id)a0;
+ (void)downloadRemoteData;
+ (BOOL)hasDataForUserWithAltDSID:(id)a0 userDeviceStates:(id)a1;
+ (BOOL)hasLegacyUsageData:(id)a0;
+ (id)lastUpdatedDateFor:(id)a0;
+ (void)refreshAndUploadLocalDataSinceDate:(id)a0 completionHandler:(id /* block */)a1;
+ (id)totalWeeklyUsageDuringDateInterval:(id)a0 userAltDSID:(id)a1 error:(id *)a2;

@end
