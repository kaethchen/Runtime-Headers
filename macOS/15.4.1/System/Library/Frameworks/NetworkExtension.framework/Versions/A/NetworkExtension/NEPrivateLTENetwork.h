@class NSString;

@interface NEPrivateLTENetwork : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *mobileCountryCode;
@property (copy) NSString *mobileNetworkCode;
@property (copy) NSString *trackingAreaCode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
