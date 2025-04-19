@class CBCentralManager, NSString, CBPeripheral, BluetoothDevice, NSObject, BluetoothManager;
@protocol OS_dispatch_queue;

@interface HMAccessoryManager : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate> {
    BluetoothManager *_bluetoothManager;
    CBCentralManager *_centralManager;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id /* block */ _faultCheckWriteCompletion;
    BOOL _isCentralManagerOn;
    BOOL _isFaultCheckPending;
    BluetoothDevice *_selectedDevice;
    CBPeripheral *_selectedPeripheral;
}

@property (copy, nonatomic) id /* block */ settingsUpdateHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_invalidate;
- (void)peripheral:(id)a0 didDiscoverServices:(id)a1;
- (void)centralManager:(id)a0 connectionEventDidOccur:(long long)a1 forPeripheral:(id)a2;
- (void)centralManager:(id)a0 didConnectPeripheral:(id)a1;
- (void)centralManager:(id)a0 didDisconnectPeripheral:(id)a1 error:(id)a2;
- (void)centralManagerDidUpdateState:(id)a0;
- (void)peripheral:(id)a0 didDiscoverCharacteristicsForService:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didUpdateValueForCharacteristic:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didWriteValueForCharacteristic:(id)a1 error:(id)a2;
- (void)_activateWithBluetoothDeviceAddress:(id)a0;
- (void)_discoveryAccessory;
- (void)_triggerOnDemandFaultCheckWithCompletionHandler:(id /* block */)a0;
- (void)_writeHearingModeSetting:(id)a0;
- (void)activateWithBluetoothDeviceAddress:(id)a0;
- (void)triggerOnDemandFaultCheckWithCompletionHandler:(id /* block */)a0;
- (void)writeHearingModeSetting:(id)a0;

@end
