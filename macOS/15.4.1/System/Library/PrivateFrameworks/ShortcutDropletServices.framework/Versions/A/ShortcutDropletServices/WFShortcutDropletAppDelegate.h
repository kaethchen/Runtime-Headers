@class NSArray, WFWorkflowRunnerClient, NSString;

@interface WFShortcutDropletAppDelegate : NSObject <WFWorkflowRunnerClientDelegate, NSApplicationDelegate>

@property (retain, nonatomic) NSArray *fileURLs;
@property (retain, nonatomic) WFWorkflowRunnerClient *runnerClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)application:(id)a0 openFiles:(id)a1;
- (void)applicationDidFinishLaunching:(id)a0;
- (void)applicationWillTerminate:(id)a0;
- (void)workflowRunnerClient:(id)a0 didFinishRunningWorkflowWithOutput:(id)a1 error:(id)a2 cancelled:(BOOL)a3;
- (void)runSerializedLNActionWithDropletMetadata:(id)a0;
- (void)runWorkflowWithWorkflowDropletMetadata:(id)a0;
- (void)showErrorAndExit:(id)a0;

@end
