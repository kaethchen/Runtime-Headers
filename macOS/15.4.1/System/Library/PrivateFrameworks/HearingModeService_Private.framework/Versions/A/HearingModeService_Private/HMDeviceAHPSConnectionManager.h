@class CBCentralManager, NSString, CBPeripheral, NSObject;
@protocol OS_dispatch_queue;

@interface HMDeviceAHPSConnectionManager : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate> {
    BOOL _activateCalled;
    CBCentralManager *_centralManager;
    id /* block */ _diagnosticCheckWriteCompletion;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_identifier;
    BOOL _isCentralManagerOn;
    BOOL _isDiagnosticCheckPending;
    CBPeripheral *_selectedPeripheral;
}

@property (copy, nonatomic) id /* block */ diagnosticStatusUpdateHandler;
@property (copy, nonatomic) id /* block */ hearingProtectionUpdateHandler;
@property (copy, nonatomic) id /* block */ settingsUpdateHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (void)_invalidate;
- (id)initWithQueue:(id)a0;
- (void)peripheral:(id)a0 didDiscoverServices:(id)a1;
- (void)centralManager:(id)a0 connectionEventDidOccur:(long long)a1 forPeripheral:(id)a2;
- (void)centralManager:(id)a0 didConnectPeripheral:(id)a1;
- (void)centralManager:(id)a0 didDisconnectPeripheral:(id)a1 error:(id)a2;
- (void)centralManagerDidUpdateState:(id)a0;
- (void)peripheral:(id)a0 didDiscoverCharacteristicsForService:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didUpdateValueForCharacteristic:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didWriteValueForCharacteristic:(id)a1 error:(id)a2;
- (void)_centralManagerEnsureStarted;
- (void)_activateWithBluetoothDeviceUUID:(id)a0;
- (void)_centralManagerEnsureStopped;
- (void)_discoverAccessory;
- (void)_triggerOnDemandDiagnosticCheckWithCompletionHandler:(id /* block */)a0;
- (void)_writeHMSettingsConfigsData:(id)a0 completion:(id /* block */)a1;
- (void)activateWithBluetoothDeviceUUID:(id)a0;
- (void)triggerOnDemandDiagnosticCheckWithCompletionHandler:(id /* block */)a0;
- (void)writeHMSettingsConfigsData:(id)a0 completion:(id /* block */)a1;

@end
