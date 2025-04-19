@class NSString;

@interface SCROIOHIDElement : SCROIOElement <SCROIOBluetoothElementProtocol, SCROIOHIDElementProtocol> {
    struct __IOHIDDevice { } *_hidDevice;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned int productId;
@property (readonly, nonatomic) unsigned int vendorId;
@property (readonly, nonatomic) NSString *manufacturerName;
@property (readonly, nonatomic) NSString *productName;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)bluetoothAddress;
- (int)transport;
- (void *)hidDevice;
- (id)initWithIOObject:(unsigned int)a0;
- (BOOL)isBluetoothLowEnergy;

@end
