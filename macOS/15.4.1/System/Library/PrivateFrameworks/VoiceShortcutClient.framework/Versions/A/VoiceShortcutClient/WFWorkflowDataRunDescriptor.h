@class NSData;

@interface WFWorkflowDataRunDescriptor : WFWorkflowRunDescriptor

@property (readonly, copy, nonatomic) NSData *workflowData;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)kind;
- (id)initWithWorkflowData:(id)a0;

@end
