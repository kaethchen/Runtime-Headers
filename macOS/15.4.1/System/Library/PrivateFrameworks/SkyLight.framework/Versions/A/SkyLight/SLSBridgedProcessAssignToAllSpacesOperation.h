@interface SLSBridgedProcessAssignToAllSpacesOperation : SLSAsynchronousBridgedWindowManagementOperation

@property (readonly) int process;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProcess:(int)a0;
- (void)invokeFallback;

@end
