@class NWHostEndpoint, NSObject;
@protocol OS_nw_endpoint;

@interface NENetworkRule : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL appliesToLoopback;
@property (readonly) NSObject<OS_nw_endpoint> *matchRemoteHostOrNetworkEndpoint;
@property (readonly) NWHostEndpoint *matchRemoteEndpoint;
@property (readonly) unsigned long long matchRemotePrefix;
@property (readonly) NSObject<OS_nw_endpoint> *matchLocalNetworkEndpoint;
@property (readonly) NWHostEndpoint *matchLocalNetwork;
@property (readonly) unsigned long long matchLocalPrefix;
@property (readonly) long long matchProtocol;
@property (readonly) long long matchDirection;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)initWithDestinationHost:(id)a0 protocol:(long long)a1;
- (id)initWithDestinationHostEndpoint:(id)a0 protocol:(long long)a1;
- (id)initWithDestinationNetwork:(id)a0 prefix:(unsigned long long)a1 protocol:(long long)a2;
- (id)initWithDestinationNetworkEndpoint:(id)a0 prefix:(unsigned long long)a1 protocol:(long long)a2;
- (id)initWithRemoteNetwork:(id)a0 remotePrefix:(unsigned long long)a1 localNetwork:(id)a2 localPrefix:(unsigned long long)a3 protocol:(long long)a4 direction:(long long)a5;
- (id)initWithRemoteNetworkEndpoint:(id)a0 remotePrefix:(unsigned long long)a1 localNetworkEndpoint:(id)a2 localPrefix:(unsigned long long)a3 protocol:(long long)a4 direction:(long long)a5;

@end
