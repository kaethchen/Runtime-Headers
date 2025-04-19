@class NSXPCConnection;

@interface SUSetupAssistantActions : NSObject {
    NSXPCConnection *_connection;
}

+ (double)estimatedRunningTime;

- (void)dealloc;
- (id)init;
- (BOOL)_connectToService;
- (void)_disconnectFromService;
- (void)runActionsWithProgressHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;

@end
