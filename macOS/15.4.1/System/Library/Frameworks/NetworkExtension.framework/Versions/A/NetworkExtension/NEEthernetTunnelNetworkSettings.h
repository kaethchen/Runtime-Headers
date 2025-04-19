@class NSString;

@interface NEEthernetTunnelNetworkSettings : NEPacketTunnelNetworkSettings

@property (copy) NSString *ethernetAddress;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)initWithTunnelRemoteAddress:(id)a0 ethernetAddress:(id)a1 mtu:(long long)a2;

@end
