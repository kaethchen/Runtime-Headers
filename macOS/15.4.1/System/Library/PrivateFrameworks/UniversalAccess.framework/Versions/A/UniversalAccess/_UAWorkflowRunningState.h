@class NSString, WFWorkflowRunnerClient;

@interface _UAWorkflowRunningState : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) WFWorkflowRunnerClient *client;

- (void).cxx_destruct;

@end
