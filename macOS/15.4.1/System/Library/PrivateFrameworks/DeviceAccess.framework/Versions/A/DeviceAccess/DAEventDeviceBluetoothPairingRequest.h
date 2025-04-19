@class DABluetoothPairingInfo;

@interface DAEventDeviceBluetoothPairingRequest : DAEvent

@property (copy, nonatomic) DABluetoothPairingInfo *pairingInfo;

- (void).cxx_destruct;
- (id)descriptionWithLevel:(int)a0;
- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)initWithEventType:(long long)a0 pairingInfo:(id)a1;

@end
