@interface SLSBridgedProcessAssignToSpaceOperation : SLSAsynchronousBridgedWindowManagementOperation

@property (readonly) int process;
@property (readonly) unsigned long long spaceID;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProcess:(int)a0 spaceID:(unsigned long long)a1;
- (void)invokeFallback;

@end
