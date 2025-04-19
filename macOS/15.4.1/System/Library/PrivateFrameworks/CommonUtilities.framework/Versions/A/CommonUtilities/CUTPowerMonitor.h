@interface CUTPowerMonitor : NSObject {
    id _internal;
}

@property (readonly, nonatomic) BOOL isExternalPowerConnected;
@property (readonly, nonatomic) double batteryPercentRemaining;

+ (id)sharedInstance;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_init;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (void)_handlePowerChangedNotificationWithMessageType:(unsigned int)a0 notificationID:(void *)a1;
- (BOOL)_initIOService;
- (BOOL)_updateBatteryConnectedStateWithBatteryEntry:(unsigned int)a0;
- (void)updateBatteryConnectedStateWithBatteryEntry:(unsigned int)a0;
- (void)updateBatteryLevelWithBatteryEntry:(unsigned int)a0;

@end
