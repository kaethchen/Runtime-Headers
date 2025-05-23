@class NSString;

@interface IRMiLoNearbyDeviceDO : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL hasBleRssi;
@property (readonly, nonatomic) NSString *deviceIdentifier;

+ (id)miLoNearbyDeviceDOWithHasBleRssi:(BOOL)a0 deviceIdentifier:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithReplacementDeviceIdentifier:(id)a0;
- (id)copyWithReplacementHasBleRssi:(BOOL)a0;
- (id)initWithHasBleRssi:(BOOL)a0 deviceIdentifier:(id)a1;
- (BOOL)isEqualToMiLoNearbyDeviceDO:(id)a0;

@end
