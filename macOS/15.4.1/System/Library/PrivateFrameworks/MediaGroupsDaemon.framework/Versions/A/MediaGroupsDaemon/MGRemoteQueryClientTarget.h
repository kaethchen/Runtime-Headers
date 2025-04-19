@class NSString, NSObject;
@protocol OS_nw_endpoint;

@interface MGRemoteQueryClientTarget : NSObject <NSCopying>

@property (readonly, nonatomic) NSObject<OS_nw_endpoint> *endpoint;
@property (readonly, nonatomic) unsigned long long protocolVersion;
@property (readonly, copy, nonatomic) NSString *homeHash;

+ (id)targetWithEndpoint:(id)a0 txtRecord:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithEndpoint:(id)a0 txtRecord:(id)a1;
- (BOOL)_parseTXTRecord:(id)a0;
- (void)_parseTXTRecord:(id)a0 forVersion:(id)a1 result:(id /* block */)a2;

@end
