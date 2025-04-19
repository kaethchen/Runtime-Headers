@interface SPBeaconSharingLimits : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long maxCircleMembers;
@property (nonatomic) long long maxDelegatedShares;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMaxCircleMembers:(long long)a0 maxDelegatedShares:(long long)a1;

@end
