@class NSString;

@interface WFStaccatoWorkflowRunnerClient : WFSystemActionRunnerClient

@property (nonatomic) BOOL hasStartedRun;
@property (readonly, copy, nonatomic) NSString *presentableIdentifier;
@property (readonly, copy, nonatomic) NSString *presentableRequester;
@property (readonly, nonatomic) BOOL hasCompletedRun;

+ (id)defaultContextualActionContext;

- (void)start;
- (id)initWithStaccatoAction:(id)a0;
- (id)initWithStaccatoAction:(id)a0 interactionType:(id)a1 preciseTimeStamp:(id)a2;
- (void)startWithInteractionType:(id)a0 preciseTimeStamp:(id)a1;
- (void)userInteractionBegan;

@end
