@class NSURL, NSData;

@interface CMLNetworkManager : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (copy, nonatomic) NSURL *endpoint;
@property (copy, nonatomic) NSURL *issuer;
@property (copy, nonatomic) NSData *authenticationToken;
@property (nonatomic) BOOL privacyProxyFailOpen;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0;
- (id)initWithType:(long long)a0 endpoint:(id)a1 issuer:(id)a2 authenticationToken:(id)a3;
- (id)initWithType:(long long)a0 endpoint:(id)a1 issuer:(id)a2 authenticationToken:(id)a3 privacyProxyFailOpen:(BOOL)a4;
- (BOOL)isEqualToNetworkManager:(id)a0;

@end
