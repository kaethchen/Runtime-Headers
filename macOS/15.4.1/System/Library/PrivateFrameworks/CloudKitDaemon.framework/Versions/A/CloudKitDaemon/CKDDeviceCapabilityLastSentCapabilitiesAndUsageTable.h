@class CKContainerID;

@interface CKDDeviceCapabilityLastSentCapabilitiesAndUsageTable : CKSQLiteCacheTable

@property (retain, nonatomic) CKContainerID *containerID;

+ (id)dbProperties;
+ (Class)entryClass;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContainerID:(id)a0;
- (id)_lastSentCapabilityAndUsage;
- (void)_updateLastSentCapabilities:(id)a0 capabilitySetSavedDate:(id)a1;
- (void)_updateUsageSavedDate:(id)a0;

@end
