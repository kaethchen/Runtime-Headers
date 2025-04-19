@class WFHomeWorkflow;

@interface WFHomeWorkflowRunDescriptor : WFWorkflowRunDescriptor

@property (readonly, nonatomic) WFHomeWorkflow *homeWorkflow;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)createWorkflowWithEnvironment:(long long)a0 database:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithHomeWorkflow:(id)a0;
- (id)workflowFileDataWithDatabase:(id)a0 error:(id *)a1;

@end
