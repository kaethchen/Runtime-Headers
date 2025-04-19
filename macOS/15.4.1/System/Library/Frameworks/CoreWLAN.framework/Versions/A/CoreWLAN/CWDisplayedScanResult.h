@class CWTetherDevice, NSString, CWTrimmedNetwork, CWNetworkProfile;

@interface CWDisplayedScanResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) CWTetherDevice *tetherDevice;
@property (copy, nonatomic) CWTrimmedNetwork *network;
@property (copy, nonatomic) CWNetworkProfile *profile;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) long long groupTag;

+ (id)displayedScanResultWithDisplayName:(id)a0 groupTag:(long long)a1;
+ (id)displayedScanResultsWithNetworks:(id)a0 anqpElements:(id)a1 tetherDevices:(id)a2 cachedTetherDevices:(id)a3 filterCurrentNetworkWithInterface:(id)a4 noBSSID:(BOOL)a5;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDisplayName:(id)a0 groupTag:(long long)a1;
- (BOOL)isEqualToDisplayedScanResult:(id)a0;

@end
