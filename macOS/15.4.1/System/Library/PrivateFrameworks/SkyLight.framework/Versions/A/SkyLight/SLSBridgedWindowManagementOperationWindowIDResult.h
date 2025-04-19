@interface SLSBridgedWindowManagementOperationWindowIDResult : SLSBridgedWindowManagementOperationResult

@property (readonly) unsigned int windowID;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithWindowID:(unsigned int)a0;

@end
