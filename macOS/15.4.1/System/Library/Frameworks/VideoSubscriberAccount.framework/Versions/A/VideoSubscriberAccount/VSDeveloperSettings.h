@class NSString;

@interface VSDeveloperSettings : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isInSetTopBoxMode;
@property (nonatomic) BOOL cacheBusterEnabled;
@property (nonatomic) BOOL requestTimeoutsDisabled;
@property (nonatomic) BOOL simulateExpiredToken;
@property (copy, nonatomic) NSString *setTopBoxBundleIdentifier;
@property (copy, nonatomic) NSString *setTopBoxUserToken;
@property (copy, nonatomic) NSString *setTopBoxIdentityProviderID;
@property (nonatomic) BOOL setTopBoxUseDeviceProfile;
@property (nonatomic) BOOL setTopBoxSupportsOptOut;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setDefaults;

@end
