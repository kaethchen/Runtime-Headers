@class NSArray;

@interface DABluetoothAccessInfo : NSObject <CUXPCCodable>

@property (copy, nonatomic) NSArray *bluetoothDevices;
@property (readonly, copy, nonatomic) NSArray *bluetoothScanCompanyIdentifiers;
@property (copy, nonatomic) NSArray *bluetoothScanServices;

- (id)description;
- (void).cxx_destruct;
- (id)descriptionWithLevel:(int)a0;
- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;

@end
