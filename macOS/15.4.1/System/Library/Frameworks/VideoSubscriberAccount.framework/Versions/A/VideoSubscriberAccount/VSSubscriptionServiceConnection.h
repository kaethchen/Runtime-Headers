@class NSXPCConnection;

@interface VSSubscriptionServiceConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)serviceWithErrorHandler:(id /* block */)a0;

@end
