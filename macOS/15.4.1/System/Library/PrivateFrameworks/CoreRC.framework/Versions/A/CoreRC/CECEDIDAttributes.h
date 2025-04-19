@class NSString;

@interface CECEDIDAttributes : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned short address;
@property (nonatomic) long long vendorID;
@property (nonatomic) long long productID;
@property (nonatomic) long long week;
@property (nonatomic) long long year;
@property (copy, nonatomic) NSString *modelName;
@property (copy, nonatomic) NSString *uuid;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAttributes:(id)a0;
- (id)initWithVendorID:(long long)a0;
- (id)initWithModelName:(id)a0;

@end
