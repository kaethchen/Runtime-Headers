@class SPNetworkMonitor, SPPowerStateMonitorMac, SPMacBeaconConfig, NSDate, NSObject, NSString;
@protocol OS_dispatch_queue, SPMonitorsWrapperDelegate;

@interface SPMonitorsWrapper : NSObject <SPPowerMonitorDelegate>

@property (weak, nonatomic) id<SPMonitorsWrapperDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) SPNetworkMonitor *networkMonitor;
@property (retain, nonatomic) NSDate *lastStateChangeDate;
@property (retain, nonatomic) NSDate *nextStateChangeDate;
@property BOOL isRunning;
@property (retain, nonatomic) NSDate *networkOffDuringSleepDate;
@property (retain, nonatomic) SPPowerStateMonitorMac *powerStateMonitor;
@property (retain, nonatomic) SPMacBeaconConfig *macBeaconConfig;
@property (readonly, nonatomic) BOOL useLegacyMacBeaconing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)resume;
- (void)pause;
- (void)start;
- (void)stop;
- (unsigned long long)powerState;
- (BOOL)isNetworkUp;
- (void)calculateLowPowerNetworkOffDate;
- (int)_cpuType;
- (id)initWithBeaconManager:(id)a0 delegateQueue:(id)a1;
- (id)nextWakeTimeForState:(unsigned long long)a0;
- (void)powerMonitor:(id)a0 didChangeState:(unsigned long long)a1;
- (void)updateConfig:(id)a0;

@end
