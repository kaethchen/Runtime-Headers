@class CMSensorMonitorSimulatorProxy;

@interface CMSensorMonitorSimulator : NSObject

@property (readonly, nonatomic) CMSensorMonitorSimulatorProxy *sensorMonitorSimulatorProxy;

- (void)dealloc;
- (id)init;
- (void)simulateMotionSensorDataForType:(unsigned long long)a0 payload:(id)a1 withHandler:(id /* block */)a2;

@end
