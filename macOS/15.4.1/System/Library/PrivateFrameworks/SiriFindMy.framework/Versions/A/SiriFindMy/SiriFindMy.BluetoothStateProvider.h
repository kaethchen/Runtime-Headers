@interface SiriFindMy.BluetoothStateProvider : NSObject <CBCentralManagerDelegate> {
    void /* unknown type, empty encoding */ subject;
    void /* unknown type, empty encoding */ bluetoothManager;
    void /* unknown type, empty encoding */ statePublisher;
    void /* unknown type, empty encoding */ subscription;
}

- (id)init;
- (void).cxx_destruct;
- (void)centralManagerDidUpdateState:(id)a0;

@end
