@class NSString;

@interface CRKRemoteEndpoint : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *IPAddress;
@property (readonly, nonatomic) unsigned short port;
@property (readonly, copy, nonatomic) NSString *stringValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIPAddress:(id)a0 port:(unsigned short)a1;
- (BOOL)isEqualToRemoteEndpoint:(id)a0;

@end
