@class NSData, NSString;

@interface AVBIPAddress : NSObject <NSCopying> {
    unsigned char _ipAddress[16];
}

@property (readonly) BOOL representsIPv4Address;
@property (copy) NSData *ipv6Address;
@property unsigned int ipv4Address;
@property (copy) NSString *stringRepresentation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithSockAddr:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0;
- (id)initWithIPv4Address:(unsigned int)a0;
- (id)initWithIPv6Address:(const char *)a0;
- (id)initWithIPv6AddressData:(id)a0;

@end
