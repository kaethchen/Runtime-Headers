@class WFSiriWorkflowRunnerClientOptions;

@interface WFSiriWorkflowRunRequest : WFWorkflowRunRequest

@property (retain, nonatomic) WFSiriWorkflowRunnerClientOptions *options;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOptions:(id)a0;
- (BOOL)handlesSiriActionRequests;

@end
