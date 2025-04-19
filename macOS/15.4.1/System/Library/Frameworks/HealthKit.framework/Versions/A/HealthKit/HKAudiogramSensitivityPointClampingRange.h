@class HKQuantity;

@interface HKAudiogramSensitivityPointClampingRange : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKQuantity *lowerBound;
@property (readonly, copy, nonatomic) HKQuantity *upperBound;

+ (BOOL)_validateLowerBound:(id)a0 upperBound:(id)a1 error:(id *)a2;
+ (id)clampingRangeWithLowerBound:(id)a0 upperBound:(id)a1 error:(id *)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithLowerBound:(id)a0 upperBound:(id)a1;
- (BOOL)isEqualToClampedRange:(id)a0;

@end
