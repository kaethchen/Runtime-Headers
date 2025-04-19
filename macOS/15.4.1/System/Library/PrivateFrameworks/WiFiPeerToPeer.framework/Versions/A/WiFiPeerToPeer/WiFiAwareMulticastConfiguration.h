@class WiFiMACAddress;

@interface WiFiAwareMulticastConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) WiFiMACAddress *multicastAddress;
@property (nonatomic) BOOL dynamicLinkRate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)multicastAddressConfigurationEqual:(id)a0;

@end
