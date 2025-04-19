@class HKAudiogramSensitivityPointClampingRange, HKQuantity;

@interface HKAudiogramSensitivityTest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKQuantity *clampedSensitivity;
@property (readonly, copy, nonatomic) HKQuantity *sensitivity;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) BOOL masked;
@property (readonly, nonatomic) long long side;
@property (readonly, copy, nonatomic) HKAudiogramSensitivityPointClampingRange *clampingRange;

+ (id)_rangeViolationMin:(id)a0 max:(id)a1 value:(id)a2;
+ (BOOL)validateConductionType:(long long)a0 side:(long long)a1 error:(id *)a2;
+ (BOOL)validateSensitivity:(id)a0 error:(id *)a1;
+ (BOOL)validateUnitForSensitivity:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithSensitivity:(id)a0 type:(long long)a1 masked:(BOOL)a2 side:(long long)a3 clampingRange:(id)a4;
- (id)initWithSensitivity:(id)a0 type:(long long)a1 masked:(BOOL)a2 side:(long long)a3 clampingRange:(id)a4 error:(id *)a5;

@end
