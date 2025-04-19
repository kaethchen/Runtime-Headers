@interface SLSBridgedWindowManagementOperationAffineTransformWithOptionsResult : SLSBridgedWindowManagementOperationResult

@property (readonly) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } affineTransform;
@property (readonly) unsigned int options;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 options:(unsigned int)a1;

@end
