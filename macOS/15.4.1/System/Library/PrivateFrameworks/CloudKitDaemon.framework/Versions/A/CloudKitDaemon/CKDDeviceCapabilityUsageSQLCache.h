@class CKContainerID, CKDDeviceCapabilityUsageSQLTable, CKDDeviceCapabilityLastSentCapabilitiesAndUsageTable;

@interface CKDDeviceCapabilityUsageSQLCache : CKSQLiteContainerAttributedTableGroup

@property (retain, nonatomic) CKContainerID *containerID;
@property (readonly, nonatomic) CKDDeviceCapabilityUsageSQLTable *usageTable;
@property (readonly, nonatomic) CKDDeviceCapabilityLastSentCapabilitiesAndUsageTable *lastSentTable;

+ (double)expirationTime;
+ (id)_groupNameForContainer:(id)a0;
+ (id)deviceCapabilityUsageSQLCacheForContainer:(id)a0;

- (void).cxx_destruct;
- (id)createTables:(id *)a0;
- (void)deleteAllUsageEntries;
- (void)deleteLastSentCapabilitiesAndUsageEntry;
- (void)deleteRecordWithUnknownShareUsageForRecordID:(id)a0;
- (void)deleteShareUsageForShareID:(id)a0;
- (void)deleteZoneUsageForZoneID:(id)a0;
- (id)lastSentCapabilitiesAndUsage;
- (id)recordWithUnknownShareUsageForRecordID:(id)a0;
- (id)recordWithUnknownShareUsagesWithMaxCount:(unsigned long long)a0;
- (void)setRecordWithUnknownShareUsage:(id)a0 forRecordID:(id)a1;
- (void)setShareUsage:(id)a0 forShareID:(id)a1;
- (void)setZoneUsage:(id)a0 forZoneID:(id)a1;
- (id)shareUsageForShareID:(id)a0;
- (id)shareUsagesWithMaxCount:(unsigned long long)a0;
- (void)updateCapabilitySet:(id)a0 capabilitySetSavedDate:(id)a1;
- (void)updateUsageSavedDate:(id)a0;
- (id)zoneUsageForZoneID:(id)a0;
- (id)zoneUsagesWithMaxCount:(unsigned long long)a0;

@end
