@interface FindMyBluetooth.DelegateTrampoline_CBPeripheralPrivateDelegate : NSObject <CBPeripheralDelegate> {
    void /* unknown type, empty encoding */ delegateQueue;
    void /* unknown type, empty encoding */ peripheral;
}

- (id)init;
- (void).cxx_destruct;
- (void)peripheral:(id)a0 didDiscoverServices:(id)a1;
- (void)peripheral:(id)a0 didDiscoverCharacteristicsForService:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didModifyServices:(id)a1;
- (void)peripheral:(id)a0 didReadRSSI:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didUpdateNotificationStateForCharacteristic:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didUpdateValueForCharacteristic:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didWriteValueForCharacteristic:(id)a1 error:(id)a2;
- (void)peripheralDidUpdateName:(id)a0;
- (void)peripheralIsReadyToSendWriteWithoutResponse:(id)a0;

@end
