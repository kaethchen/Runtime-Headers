@class NSXPCConnection;

@interface STContactsServiceClient : NSObject

@property (retain) NSXPCConnection *connection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)authenticateRestrictionsPasscode:(id)a0 completionHandler:(id /* block */)a1;
- (void)isRestrictionsPasscodeSetWithCompletionHandler:(id /* block */)a0;
- (void)presentRemotePINControllerWithCompletionHandler:(id /* block */)a0;
- (void)restrictionsPasscodeEntryAttemptCountAndTimeoutDateWithCompletionHandler:(id /* block */)a0;

@end
