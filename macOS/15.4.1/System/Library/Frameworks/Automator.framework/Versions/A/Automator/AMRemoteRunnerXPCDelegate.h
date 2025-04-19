@class AMWorkflow, AMRemoteRunnerController, NSMutableDictionary;
@protocol AMRunnerControllerDelegate;

@interface AMRemoteRunnerXPCDelegate : NSObject <AMRemoteRunnerXPCDelegateProtocol>

@property unsigned long long runnerState;
@property (retain) AMWorkflow *workflow;
@property (retain) AMRemoteRunnerController *remoteRunnerController;
@property (retain) NSMutableDictionary *conversionsByUUID;
@property BOOL didReceiveRemoteMessage;
@property (weak) id<AMRunnerControllerDelegate> runnerControllerDelegate;

- (void).cxx_destruct;
- (id)actionAtIndex:(unsigned long long)a0;
- (void)handleCommunicationsError:(id)a0;
- (id)initWithWorkflow:(id)a0 remoteRunnerController:(id)a1;
- (void)remoteWorkflowRunnerDidChangeState:(unsigned long long)a0;
- (void)remoteWorkflowRunnerDidError:(id)a0;
- (void)remoteWorkflowRunnerDidFinish;
- (void)remoteWorkflowRunnerDidLogMessage:(id)a0 ofType:(unsigned long long)a1 fromActionAtIndex:(unsigned long long)a2;
- (void)remoteWorkflowRunnerDidPause;
- (void)remoteWorkflowRunnerDidResumeWithActionAtIndex:(unsigned long long)a0;
- (void)remoteWorkflowRunnerDidRun;
- (void)remoteWorkflowRunnerDidRunActionAtIndex:(unsigned long long)a0 withResults:(id)a1;
- (void)remoteWorkflowRunnerDidRunConversion:(id)a0 uuid:(id)a1;
- (void)remoteWorkflowRunnerDidStopWithActionAtIndex:(unsigned long long)a0;
- (void)remoteWorkflowRunnerProgressDidChange:(double)a0 forActionAtIndex:(unsigned long long)a1;
- (void)remoteWorkflowRunnerWillPause;
- (void)remoteWorkflowRunnerWillRun;
- (void)remoteWorkflowRunnerWillRunActionAtIndex:(unsigned long long)a0;
- (void)remoteWorkflowRunnerWillRunConversion:(id)a0 uuid:(id)a1;
- (void)remoteWorkflowRunnerWillStop;
- (id)updatedLocalConversionForXPCConversion:(id)a0 uuid:(id)a1;

@end
