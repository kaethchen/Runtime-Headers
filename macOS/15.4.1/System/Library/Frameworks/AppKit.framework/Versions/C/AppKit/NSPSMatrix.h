@interface NSPSMatrix : NSAffineTransform

@property struct CGSize { double x0; double x1; } scale;
@property double horizontalShear;
@property double rotationDegrees;
@property double rotationRadians;
@property struct CGSize { double x0; double x1; } translation;

+ (void)initialize;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)rotateByDegrees:(double)a0;
- (void)rotateByRadians:(double)a0;
- (id)makeIdentity;

@end
