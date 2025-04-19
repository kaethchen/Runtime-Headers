@class NSUUID, NSDate;

@interface SPBTRSSIResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *beaconIdentifier;
@property (readonly, copy, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) long long bucket;
@property (readonly, nonatomic) long long rssi;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBeaconIdentifier:(id)a0 timestamp:(id)a1 bucket:(long long)a2 rssi:(long long)a3;

@end
