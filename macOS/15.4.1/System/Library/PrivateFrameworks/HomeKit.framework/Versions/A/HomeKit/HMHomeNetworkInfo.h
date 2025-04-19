@class NSArray, NSString, NSData, HMHomeWiFiInfo;

@interface HMHomeNetworkInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSArray *ipv4Addresses;
@property (copy) NSArray *ipv6Addresses;
@property (copy) NSString *ipv4NetworkSignature;
@property (copy) NSString *ipv6NetworkSignature;
@property (copy) NSData *binaryIPv4NetworkSignature;
@property (copy) NSData *binaryIPv6NetworkSignature;
@property (copy) NSString *routerIPV4;
@property (copy) NSString *routerIPV6;
@property (readonly, copy) HMHomeWiFiInfo *wiFiInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIpv4Addresses:(id)a0 ipv6Addresses:(id)a1 ipv4NetworkSignature:(id)a2 ipv6NetworkSignature:(id)a3 binaryIPv4NetworkSignature:(id)a4 binaryIPv6NetworkSignature:(id)a5 routerIPV4:(id)a6 routerIPV6:(id)a7 wiFiInfo:(id)a8;

@end
