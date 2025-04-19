@class NSData, NSString, CWFChannel;

@interface CWFHostAPConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *SSID;
@property (copy, nonatomic) CWFChannel *channel;
@property (nonatomic) unsigned long long securityType;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) int PHYMode;
@property (copy, nonatomic) NSData *IEList;
@property (nonatomic) BOOL forceHiddenMode;
@property (nonatomic) BOOL forceBeaconInterval100ms;
@property (nonatomic) int bridgeMode;
@property (nonatomic) int bridgeType;
@property (copy, nonatomic) NSString *bridgeInterfaceName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToHostAPConfiguration:(id)a0;

@end
