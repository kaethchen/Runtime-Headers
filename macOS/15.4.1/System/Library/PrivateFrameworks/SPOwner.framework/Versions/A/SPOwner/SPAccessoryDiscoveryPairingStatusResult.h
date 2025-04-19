@class SPLostModeInfo;

@interface SPAccessoryDiscoveryPairingStatusResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long pairingStatus;
@property (readonly, nonatomic) SPLostModeInfo *lostModeInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPairingStatus:(long long)a0 lostModeInfo:(id)a1;

@end
