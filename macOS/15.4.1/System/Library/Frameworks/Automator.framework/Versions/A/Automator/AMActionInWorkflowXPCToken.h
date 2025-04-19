@class NSString;

@interface AMActionInWorkflowXPCToken : AMXPCToken

@property (retain) NSString *actionUUID;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUUID:(id)a0;
- (id)_am_convertFromXPCWithWorkflow:(id)a0;

@end
