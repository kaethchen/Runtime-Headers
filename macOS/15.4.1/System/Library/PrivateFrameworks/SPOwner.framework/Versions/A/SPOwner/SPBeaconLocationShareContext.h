@class NSUUID, SPBeaconSharingAppBundleIdentifier;

@interface SPBeaconLocationShareContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *beaconIdentifier;
@property (readonly, copy, nonatomic) SPBeaconSharingAppBundleIdentifier *bundleIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBeaconIdentifier:(id)a0;
- (id)initWithBeaconIdentifier:(id)a0 andBundleIdentifier:(id)a1;

@end
