@class NSMutableSet, NSObject;
@protocol OS_os_log;

@interface UARPPowerLogManager : NSObject {
    NSMutableSet *_accessories;
    NSMutableSet *_pendingReachableEvents;
    NSObject<OS_os_log> *_log;
}

@property unsigned int stagingWindowPeriodSeconds;

- (id)init;
- (void).cxx_destruct;
- (void)addAccessoryID:(id)a0;
- (BOOL)accessoryIDSupportsPowerLogging:(id)a0;
- (id)createPowerLogAccessoryForAccessoryID:(id)a0;
- (id)pendingReachabilityEventForAccessoryID:(id)a0;
- (void)postPendingReachabilityEvent:(id)a0;
- (id)powerLogAccessoryForAccessoryID:(id)a0;
- (id)powerLogAccessoryForUUID:(id)a0;
- (void)removeAccessoryID:(id)a0;
- (void)setAccessoryIDReachable:(id)a0;
- (void)setAccessoryIDUnreachable:(id)a0;
- (void)setActiveFirmwareVersionForAccessoryID:(id)a0 activeFirmwareVersion:(id)a1;
- (void)setAssetOfferedForAccessoryID:(id)a0 offeredFirmwareVersion:(id)a1 activeFirmwareVersion:(id)a2;
- (void)setStagedFirmwareVersionForAccessoryID:(id)a0 stagedFirmwareVersion:(id)a1;
- (void)setStagingCompleteForAccessoryID:(id)a0 stagedFirmwareVersion:(id)a1 activeFirmareVersion:(id)a2 status:(unsigned long long)a3;
- (void)updateStagingProgressForAccessoryID:(id)a0 requestedOffset:(unsigned int)a1 requestedLength:(unsigned int)a2;

@end
