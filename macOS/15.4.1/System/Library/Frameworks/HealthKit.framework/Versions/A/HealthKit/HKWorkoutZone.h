@class NSUUID, HKQuantity;

@interface HKWorkoutZone : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) HKQuantity *startQuantity;
@property (readonly, copy, nonatomic) HKQuantity *endQuantity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 startQuantity:(id)a1 endQuantity:(id)a2;

@end
