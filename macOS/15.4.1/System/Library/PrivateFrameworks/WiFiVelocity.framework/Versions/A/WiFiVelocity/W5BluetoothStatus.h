@class NSString, NSArray;

@interface W5BluetoothStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL powerOn;
@property (copy, nonatomic) NSString *address;
@property (nonatomic) BOOL isDiscoverable;
@property (nonatomic) BOOL isConnectable;
@property (nonatomic) BOOL isScanning;
@property (copy, nonatomic) NSArray *devices;

- (void)dealloc;
- (BOOL)conformsToProtocol:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToBluetoothStatus:(id)a0;

@end
