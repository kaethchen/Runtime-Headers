@interface SLSBridgedSpaceSetTransformOperation : SLSAsynchronousBridgedWindowManagementOperation

@property (readonly) unsigned long long spaceID;
@property (readonly) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property (readonly) unsigned int options;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSpaceID:(unsigned long long)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 options:(unsigned int)a2;
- (void)invokeFallback;

@end
