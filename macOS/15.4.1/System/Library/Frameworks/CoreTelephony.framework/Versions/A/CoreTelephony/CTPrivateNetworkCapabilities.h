@interface CTPrivateNetworkCapabilities : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isPrivateNetworkSIM;
@property (nonatomic) BOOL isPrivateNetworkPreferredOverWifi;
@property (nonatomic) BOOL isPrivateNetworkModeEnabled;
@property (nonatomic) BOOL hideDataRoaming;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
