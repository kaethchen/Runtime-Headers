@interface SLSBridgedCopyBestManagedDisplayForPointOperation : SLSSynchronousBridgedWindowManagementOperation

@property (readonly) struct CGPoint { double x; double y; } point;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)invokeFallback;
- (id)makeResultWithString:(id)a0;

@end
