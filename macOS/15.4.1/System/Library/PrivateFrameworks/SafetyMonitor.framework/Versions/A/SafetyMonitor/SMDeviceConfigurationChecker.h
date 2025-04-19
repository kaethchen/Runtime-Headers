@class IDSService, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SMDeviceConfigurationChecker : NSObject <IDSServiceDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) IDSService *ownAccountIDSService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)convertLowPowerModeWarningStateToString:(long long)a0;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)_fetchDeviceConfigurationLowPowerModeWarningStateWithHandler:(id /* block */)a0;
- (id)effectivePairedDevice;
- (void)fetchDeviceConfigurationLowPowerModeWarningStateWithHandler:(id /* block */)a0;
- (BOOL)isEffectivePairedDeviceNearby;
- (id)initWithQueue:(id)a0 messagingService:(id)a1;
- (long long)_determineLowPowerModeWarningStateWithPairedDeviceNearby:(BOOL)a0;
- (long long)_getDeviceConfigurationLowPowerModeWarningState;
- (long long)_getDeviceConfigurationLowPowerModeWarningStateWithPairedDeviceNearby:(BOOL)a0;
- (long long)getDeviceConfigurationLowPowerModeWarningState;
- (long long)getDeviceConfigurationLowPowerModeWarningStateWithPairedDeviceNearby:(BOOL)a0;

@end
