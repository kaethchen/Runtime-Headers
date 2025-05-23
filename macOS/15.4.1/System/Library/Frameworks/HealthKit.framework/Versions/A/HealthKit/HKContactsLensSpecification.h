@class HKQuantity;

@interface HKContactsLensSpecification : HKLensSpecification <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKQuantity *baseCurve;
@property (readonly, copy, nonatomic) HKQuantity *diameter;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSphere:(id)a0 cylinder:(id)a1 axis:(id)a2 addPower:(id)a3 baseCurve:(id)a4 diameter:(id)a5;

@end
