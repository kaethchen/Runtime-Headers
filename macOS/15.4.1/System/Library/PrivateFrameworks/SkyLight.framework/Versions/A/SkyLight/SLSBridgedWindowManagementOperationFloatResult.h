@interface SLSBridgedWindowManagementOperationFloatResult : SLSBridgedWindowManagementOperationResult

@property (readonly) float floatValue;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFloatValue:(float)a0;

@end
