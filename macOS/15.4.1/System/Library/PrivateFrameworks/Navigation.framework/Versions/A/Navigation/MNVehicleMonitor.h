@protocol MNVehicleMonitorDelegate;

@interface MNVehicleMonitor : NSObject {
    int _vehicleConnectedToken;
    int _vehicleDisconnectedToken;
    BOOL _isMonitoring;
}

@property (weak, nonatomic) id<MNVehicleMonitorDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)startMonitoring;
- (void)stopMonitoring;

@end
