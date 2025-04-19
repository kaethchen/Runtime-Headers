@class NSArray, NSUUID;

@interface DABluetoothDeviceAccessInfo : NSObject <CUXPCCodable>

@property (copy, nonatomic) NSArray *bluetoothServices;
@property (copy, nonatomic) NSUUID *identifier;

- (id)description;
- (void).cxx_destruct;
- (id)descriptionWithLevel:(int)a0;
- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;

@end
