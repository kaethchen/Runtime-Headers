@class HKQuantity;

@interface HKQuantityRange : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) HKQuantity *minimum;
@property (copy, nonatomic) HKQuantity *maximum;
@property (nonatomic) BOOL isMinimumInclusive;
@property (nonatomic) BOOL isMaximumInclusive;

+ (id)ATTDHyperglycemicRangeWithUnit:(id)a0;
+ (id)ATTDGlycemicRangesWithUnit:(id)a0;
+ (id)ATTDLevel2HypoglycemicRangeWithUnit:(id)a0;
+ (id)ATTDEuglycemicRangeWithUnit:(id)a0;
+ (id)ATTDLevel1HypoglycemicRangeWithUnit:(id)a0;
+ (BOOL)areRangesDisjoint:(id)a0;
+ (id)exclusiveRangeWithMinimum:(id)a0 maximum:(id)a1;
+ (id)inclusiveRangeWithMinimum:(id)a0 maximum:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)intersectsRange:(id)a0;
- (BOOL)containsQuantity:(id)a0;
- (id)initWithMinimum:(id)a0 maximum:(id)a1 isMinimumInclusive:(BOOL)a2 isMaximumInclusive:(BOOL)a3;
- (BOOL)isEqualToQuantityRange:(id)a0 withAccuracy:(id)a1;

@end
