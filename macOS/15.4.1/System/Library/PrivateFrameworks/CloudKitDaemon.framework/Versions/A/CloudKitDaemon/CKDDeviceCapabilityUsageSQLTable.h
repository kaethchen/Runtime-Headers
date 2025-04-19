@class CKContainerID;

@interface CKDDeviceCapabilityUsageSQLTable : CKSQLiteCacheTable

@property (retain, nonatomic) CKContainerID *containerID;

+ (id)dbProperties;
+ (Class)entryClass;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContainerID:(id)a0;
- (void)_deleteRecordWithUnknownShareUsageForRecordID:(id)a0;
- (void)_deleteShareUsageForShareID:(id)a0;
- (void)_deleteUsageForIDString:(id)a0 itemType:(unsigned long long)a1;
- (void)_deleteZoneUsageForZoneID:(id)a0;
- (id)_recordWithUnknownShareUsageForRecordID:(id)a0;
- (id)_recordWithUnknownShareUsagesForContainerID:(id)a0 maxCount:(unsigned long long)a1;
- (void)_setRecordWithUnknownShareUsage:(id)a0 forRecordID:(id)a1;
- (void)_setShareUsage:(id)a0 forShareID:(id)a1;
- (void)_setUsage:(id)a0 forIDString:(id)a1 forItemType:(unsigned long long)a2;
- (void)_setZoneUsage:(id)a0 forZoneID:(id)a1;
- (id)_shareUsageForShareID:(id)a0;
- (id)_shareUsagesForContainerID:(id)a0 maxCount:(unsigned long long)a1;
- (id)_usageEntriesForContainerID:(id)a0 itemType:(unsigned long long)a1 maxCount:(unsigned long long)a2;
- (id)_usageForIDString:(id)a0 itemType:(unsigned long long)a1;
- (id)_zoneUsageForZoneID:(id)a0;
- (id)_zoneUsagesForContainerID:(id)a0 maxCount:(unsigned long long)a1;

@end
