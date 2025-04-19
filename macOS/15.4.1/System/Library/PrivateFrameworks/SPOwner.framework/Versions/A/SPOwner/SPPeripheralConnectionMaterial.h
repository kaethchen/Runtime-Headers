@class NSData;

@interface SPPeripheralConnectionMaterial : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *irkData;
@property (copy, nonatomic) NSData *btAddressData;
@property (copy, nonatomic) NSData *btAddressWithTypeData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
