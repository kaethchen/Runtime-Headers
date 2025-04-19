@interface SLSBridgedSpaceGetRectOperation : SLSSynchronousBridgedWindowManagementOperation

@property (readonly) unsigned long long spaceID;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSpaceID:(unsigned long long)a0;
- (id)invokeFallback;
- (id)makeResultWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
