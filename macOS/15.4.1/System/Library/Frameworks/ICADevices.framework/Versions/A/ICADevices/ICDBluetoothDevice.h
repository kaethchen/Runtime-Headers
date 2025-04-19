@class NSString, NSMutableDictionary;

@interface ICDBluetoothDevice : ICDDevice {
    NSMutableDictionary *_params;
}

@property (readonly) NSString *bluetoothAddress;

- (void)dealloc;
- (id)initWithParams:(id)a0;
- (short)openDevice;
- (void)updateDeviceDictionary:(id)a0;

@end
