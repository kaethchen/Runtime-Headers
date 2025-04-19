@class OSIPowerButtonMonitor, OSIMSUOptions, NSMutableArray, NSString, IASUnifiedProgressClient, NSObject, OSIPowerController;
@protocol OS_dispatch_queue, OSIFirstBootControllerDelegate;

@interface OSIFirstBootController : NSObject <OSIPowerControllerDelegate, OSIPowerButtonMonitorDelegate>

@property (weak) NSObject<OSIFirstBootControllerDelegate> *delegate;
@property (retain) IASUnifiedProgressClient *progressClient;
@property (retain) OSIPowerController *powerManager;
@property (retain) OSIPowerButtonMonitor *powerButtonMonitor;
@property (retain) OSIMSUOptions *options;
@property (retain) NSMutableArray *installOperations;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)_logSystemInfo;
- (BOOL)doBootTasks;
- (void)lowBatteryStatusChanged:(BOOL)a0;
- (void)powerButtonPressed;

@end
