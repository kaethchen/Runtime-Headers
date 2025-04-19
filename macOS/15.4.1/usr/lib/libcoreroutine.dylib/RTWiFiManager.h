@class NSArray;

@interface RTWiFiManager : RTService

@property (nonatomic) unsigned long long powerStatus;
@property (readonly, nonatomic) unsigned long long linkStatus;
@property (retain, nonatomic) NSArray *accessPoints;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)linkStatusToString:(unsigned long long)a0;
+ (id)powerStatusToString:(unsigned long long)a0;
+ (BOOL)supportsNotificationName:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_cancelScan;
- (void)_notifyLeechScanResults:(id)a0;
- (void)_notifyScanResults:(id)a0;
- (void)_scheduleActiveScan;
- (void)_scheduleScan;
- (void)_scheduleScanWithChannels:(id)a0;
- (void)cancelScan;
- (void)fetchLinkStatus:(id /* block */)a0;
- (void)fetchPowerStatus:(id /* block */)a0;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)scheduleActiveScan;
- (void)scheduleScan;
- (void)scheduleScanWithChannels:(id)a0;

@end
