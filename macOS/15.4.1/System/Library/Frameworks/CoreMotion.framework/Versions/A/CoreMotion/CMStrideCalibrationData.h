@interface CMStrideCalibrationData : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long state;
@property (nonatomic) double kValue;
@property (nonatomic) double begin;
@property (nonatomic) double end;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBegin:(double)a0 end:(double)a1 state:(long long)a2 kValue:(double)a3;

@end
