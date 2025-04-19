@class STCommunicationServiceClient, NSXPCConnection;

@interface STCommunicationClient : NSObject

@property (readonly) NSXPCConnection *connection;
@property (retain, nonatomic) STCommunicationServiceClient *communicationServiceClient;

+ (id)_newConnection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)currentConfigurationWithError:(id *)a0;
- (void)authenticateForCommunicationConfigurationOverrideWithCompletionHandler:(id /* block */)a0;

@end
