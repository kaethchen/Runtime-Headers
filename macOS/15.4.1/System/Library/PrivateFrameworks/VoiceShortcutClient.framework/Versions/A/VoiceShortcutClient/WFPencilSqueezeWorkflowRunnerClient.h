@interface WFPencilSqueezeWorkflowRunnerClient : WFSystemActionRunnerClient

@property (nonatomic) BOOL hasStartedRun;
@property (readonly, nonatomic) BOOL hasCompletedRun;

+ (id)defaultContextualActionContext;

- (void)start;
- (id)initWithSystemAction:(id)a0 preciseTimeStamp:(id)a1;
- (void)startWithPreciseTimeStamp:(id)a0;

@end
