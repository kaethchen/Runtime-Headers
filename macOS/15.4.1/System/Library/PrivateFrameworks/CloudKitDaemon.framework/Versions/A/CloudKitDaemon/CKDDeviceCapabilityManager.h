@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CKDDeviceCapabilityManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *updateOperationsPerContainer;
@property (nonatomic) double lastTrackedFailureTime;
@property (nonatomic) double failureBackoffDelay;
@property (retain, nonatomic) NSMutableDictionary *capabilitiesAndUsagesCachePerContainer;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)initInternal;
- (void)_deleteLastSentCapabilitiesAndUsageDataForContainer:(id)a0;
- (void)_deleteRecordWithUnknownShareUsage:(id)a0 inContainer:(id)a1;
- (void)_deleteShareUsageForShareID:(id)a0 inContainer:(id)a1;
- (void)_deleteZoneUsageForZoneID:(id)a0 inContainer:(id)a1;
- (id)_deviceAndCapabilityCacheForContainer:(id)a0;
- (void)_handleDeviceCapabilitiesResultForContainer:(id)a0 savedCapabilities:(id)a1 skipErrorMitigation:(BOOL)a2 withError:(id)a3;
- (void)_handleOperationCompletedForContainerLookupName:(id)a0 containerID:(id)a1;
- (void)_handleShareUsageResultForContainer:(id)a0 shareID:(id)a1 date:(id)a2 skipErrorMitigation:(BOOL)a3 withError:(id)a4;
- (void)_handleZoneUsageResultForContainer:(id)a0 zoneID:(id)a1 date:(id)a2 skipErrorMitigation:(BOOL)a3 withError:(id)a4;
- (id)_lastSentCapabilityAndUsageForContainer:(id)a0;
- (id)_prepareShareUsageSendForContainer:(id)a0 maxCount:(unsigned long long)a1 triggerOperation:(id)a2;
- (id)_prepareZoneUsageSendForContainer:(id)a0 maxCount:(unsigned long long)a1 triggerOperation:(id)a2;
- (id)_recordWithUnknownShareUsagesInContainer:(id)a0 maxCount:(unsigned long long)a1;
- (void)_setRecordWithUnknownShareUsage:(id)a0 forRecordID:(id)a1 inContainer:(id)a2;
- (void)_setShareUsage:(id)a0 forShareID:(id)a1 inContainer:(id)a2;
- (void)_setZoneUsage:(id)a0 forZoneID:(id)a1 inContainer:(id)a2;
- (id)_shareUsageForShareID:(id)a0 inContainer:(id)a1;
- (id)_shareUsagesInContainer:(id)a0 maxCount:(unsigned long long)a1;
- (void)_updateLastSentCapabilities:(id)a0 capabilitySetSavedDate:(id)a1 forContainer:(id)a2;
- (void)_updateUsageSavedDate:(id)a0 forContainer:(id)a1;
- (id)_zoneUsageForZoneID:(id)a0 inContainer:(id)a1;
- (id)_zoneUsagesInContainer:(id)a0 maxCount:(unsigned long long)a1;
- (void)dropCacheConnectionForContainer:(id)a0;
- (BOOL)isObsoleteCapabilities:(id)a0 operation:(id)a1;
- (BOOL)isObsoleteUsage:(id)a0 operation:(id)a1;
- (id)lookupStringForContainer:(id)a0;
- (void)recordShareUsageForDeletedRecordID:(id)a0 at:(id)a1 container:(id)a2 operation:(id)a3;
- (void)recordShareUsageForRecordID:(id)a0 at:(id)a1 container:(id)a2 operation:(id)a3;
- (void)recordShareUsageForRequest:(id)a0 container:(id)a1;
- (void)recordShareUsageForShareID:(id)a0 at:(id)a1 container:(id)a2 operation:(id)a3;
- (void)recordShareUsageForShareID:(id)a0 container:(id)a1 date:(id)a2;
- (void)recordWithUnknownShareUsageForRecordID:(id)a0 container:(id)a1 date:(id)a2;
- (void)recordZoneUsageForOperation:(id)a0 container:(id)a1;
- (void)sendToServerForContainer:(id)a0 operation:(id)a1;

@end
