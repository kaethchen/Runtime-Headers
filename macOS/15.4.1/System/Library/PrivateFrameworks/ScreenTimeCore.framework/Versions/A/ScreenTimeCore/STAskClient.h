@class STAskServiceClient, NSXPCConnection;

@interface STAskClient : NSObject

@property (readonly) NSXPCConnection *connection;
@property (retain, nonatomic) STAskServiceClient *askServiceClient;

+ (id)_newConnection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)respondToAskForTimeRequestWithIdentifier:(id)a0 answer:(long long)a1 error:(id *)a2;

@end
