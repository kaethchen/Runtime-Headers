@interface SLSBridgedWindowManagementOperationInt32Result : SLSBridgedWindowManagementOperationResult

@property (readonly) int int32Value;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithInt32Value:(int)a0;

@end
