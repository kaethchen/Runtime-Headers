@class NSString, WFServicesRunnerClient, NSError, NSObject;
@protocol OS_dispatch_queue;

@interface _NSServicesShortcutRunner : NSObject <WFWorkflowRunnerClientDelegate> {
    WFServicesRunnerClient *_runnerClient;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _serviceCompleted;
    BOOL _serviceCancelled;
    NSError *_shortcutsError;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
