@class WFWorkflowRunningContext;

@interface WFHandoffRunDescriptor : WFWorkflowRunDescriptor

@property (readonly, nonatomic) WFWorkflowRunningContext *context;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
