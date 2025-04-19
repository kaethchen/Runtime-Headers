@class NSNumber;

@interface MTRProductIdentity : NSObject <NSCopying, NSSecureCoding> {
    unsigned short _vendorID;
    unsigned short _productID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *vendorID;
@property (readonly, copy, nonatomic) NSNumber *productID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithVendorID:(id)a0 productID:(id)a1;

@end
