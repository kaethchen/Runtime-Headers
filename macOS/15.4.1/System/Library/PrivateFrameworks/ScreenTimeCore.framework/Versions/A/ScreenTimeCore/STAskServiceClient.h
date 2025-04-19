@class NSXPCConnection;

@interface STAskServiceClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)approveExceptionForRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchLastResponseForRequestedResourceIdentifier:(id)a0 usageType:(long long)a1 withCompletionHandler:(id /* block */)a2;
- (void)handleAnswer:(long long)a0 requestIdentifier:(id)a1 timeApproved:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithAlternateMachService;
- (BOOL)respondToAskForTimeRequestWithIdentifier:(id)a0 answer:(long long)a1 error:(id *)a2;
- (void)sendAskForTimeRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
