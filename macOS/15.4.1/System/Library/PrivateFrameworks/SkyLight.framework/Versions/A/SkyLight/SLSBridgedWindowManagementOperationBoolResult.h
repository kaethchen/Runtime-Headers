@interface SLSBridgedWindowManagementOperationBoolResult : SLSBridgedWindowManagementOperationResult

@property (readonly) BOOL boolValue;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBoolValue:(BOOL)a0;

@end
