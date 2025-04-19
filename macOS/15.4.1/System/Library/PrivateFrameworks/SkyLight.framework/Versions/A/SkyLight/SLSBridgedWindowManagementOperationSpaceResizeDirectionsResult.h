@interface SLSBridgedWindowManagementOperationSpaceResizeDirectionsResult : SLSBridgedWindowManagementOperationResult

@property (readonly) unsigned long long spaceResizeDirections;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSpaceResizeDirections:(unsigned long long)a0;

@end
