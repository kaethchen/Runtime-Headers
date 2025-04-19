@interface SCNSliderConstraint : SCNConstraint {
    unsigned long long _categoryBitMask;
    struct SCNVector3 { double x; double y; double z; } _offset;
    float _radius;
}

@property (nonatomic) unsigned long long collisionCategoryBitMask;
@property (nonatomic) double radius;
@property (nonatomic) struct SCNVector3 { double x0; double x1; double x2; } offset;

+ (BOOL)supportsSecureCoding;
+ (id)sliderConstraint;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
