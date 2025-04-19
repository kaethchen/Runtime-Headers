@class HMFMACAddress, NSString, NSArray;

@interface HMFWiFiNetworkInfo : HMFObject <HMFObject, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) HMFMACAddress *MACAddress;
@property (readonly, copy) NSString *SSID;
@property (readonly, copy) NSString *networkBSSID;
@property (readonly, copy) NSString *networkGatewayIPAddress;
@property (readonly, copy) NSString *networkGatewayMACAddress;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMACAddress:(id)a0 SSID:(id)a1;
- (id)initWithMACAddress:(id)a0 SSID:(id)a1 BSSID:(id)a2 gatewayIPAddress:(id)a3 gatewayMACAddress:(id)a4;
- (BOOL)isEqualToNetworkInfo:(id)a0;

@end
