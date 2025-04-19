@interface CLBIO_DeltaVelocity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double X;
@property (readonly, nonatomic) double Y;
@property (readonly, nonatomic) double Z;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithX:(double)a0 Y:(double)a1 Z:(double)a2;

@end
