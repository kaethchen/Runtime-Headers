@interface SLSBridgedWindowManagementOperationSizeResult : SLSBridgedWindowManagementOperationResult

@property (readonly) struct CGSize { double width; double height; } size;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;

@end
