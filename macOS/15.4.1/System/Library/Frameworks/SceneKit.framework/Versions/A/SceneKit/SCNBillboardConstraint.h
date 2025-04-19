@interface SCNBillboardConstraint : SCNConstraint {
    BOOL _preserveScale;
}

@property (nonatomic) unsigned long long freeAxes;

+ (BOOL)supportsSecureCoding;
+ (id)billboardConstraint;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)preserveScale;
- (void)setPreserveScale:(BOOL)a0;

@end
