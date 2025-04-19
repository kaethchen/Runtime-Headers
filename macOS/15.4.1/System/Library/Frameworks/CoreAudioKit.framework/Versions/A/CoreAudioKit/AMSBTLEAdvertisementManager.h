@class NSString, CBPeripheralManager;

@interface AMSBTLEAdvertisementManager : NSObject <CBPeripheralManagerDelegate> {
    CBPeripheralManager *peripheralManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (BOOL)isAdvertising;
- (void)peripheralManager:(id)a0 didReceiveReadRequest:(id)a1;
- (void)peripheralManagerDidStartAdvertising:(id)a0 error:(id)a1;
- (void)peripheralManagerDidUpdateState:(id)a0;
- (void)advertiseMIDIService;
- (BOOL)isLECapableHardware;
- (void)stopAdvertisingMIDIService;

@end
