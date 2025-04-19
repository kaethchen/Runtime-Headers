@class NSString, NSObject;
@protocol OS_dispatch_queue, SPPowerMonitorDelegate;

@interface SPPowerStateMonitorMac : NSObject <SPPowerStateMonitor>

@property (nonatomic) unsigned long long state;
@property (nonatomic) struct __IOPMConnection { } *powerManagementConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *monitorQueue;
@property (weak, nonatomic) id<SPPowerMonitorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)startMonitoring;
- (void)stopMonitoring;
- (void)claimWakeWithReason:(id)a0;
- (unsigned long long)parseCapabilities:(unsigned int)a0;

@end
