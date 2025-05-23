@class NSUUID;

@interface SPAccessoryDiscoveryPairingStatusRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL checkSerialNumber;
@property (nonatomic) BOOL verifyFMNID;
@property (nonatomic) BOOL verifyWithServer;
@property (copy, nonatomic) NSUUID *identifier;
@property (nonatomic) BOOL wantsLostModeInfo;

+ (id)checkSerialNumberWithIdentifier:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;

@end
