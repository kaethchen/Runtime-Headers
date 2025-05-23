@class NSUUID;

@interface HKElectrocardiogramSessionConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *sessionUUID;
@property (nonatomic) long long mode;
@property (nonatomic) double maximumDuration;
@property (nonatomic) BOOL wornOnRightArm;

+ (id)sessionConfigurationWithUUID:(id)a0 mode:(long long)a1 maximumDuration:(double)a2 wornOnRightArm:(BOOL)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
