@class DeviceCollection;

@interface AMPDiscoveryClient : NSObject <AMPDeviceDiscoveryEventsProtocol>

@property (weak, nonatomic) DeviceCollection *deviceCollection;

- (void).cxx_destruct;
- (void)deviceChanged:(id)a0;
- (void)deviceConnected:(id)a0;
- (void)deviceDisconnected:(id)a0;
- (void)completedOperationForDeviceWithIdentifier:(id)a0;
- (void)discoveryServiceWillTerminate;
- (id)initWithDeviceCollection:(id)a0;
- (void)nameChangedTo:(id)a0 forDeviceWithIdentifier:(id)a1;
- (void)performBlockOnMainThreadAsync:(id /* block */)a0;
- (void)startedOperationForDeviceWithIdentifier:(id)a0 allowCancel:(BOOL)a1;

@end
