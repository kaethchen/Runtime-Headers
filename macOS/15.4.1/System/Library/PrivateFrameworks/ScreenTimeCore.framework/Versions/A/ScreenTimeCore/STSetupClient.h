@class STSetupServiceClient, NSXPCConnection;

@interface STSetupClient : NSObject

@property (readonly) NSXPCConnection *connection;
@property (retain, nonatomic) STSetupServiceClient *setupServiceClient;

+ (id)_newConnection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)currentConfigurationForUser:(id)a0 error:(id *)a1;
- (BOOL)applyUpdatedConfiguration:(id)a0 error:(id *)a1;
- (void)collectPasscodeFromUserWithCompletionHandler:(id /* block */)a0;

@end
