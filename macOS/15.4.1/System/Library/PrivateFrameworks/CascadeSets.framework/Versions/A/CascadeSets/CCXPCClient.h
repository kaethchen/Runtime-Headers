@class NSString, NSXPCConnection;

@interface CCXPCClient : NSObject <CCOnBehalfOfAccessClientProtocol>

@property (retain) NSXPCConnection *connection;
@property unsigned short failureCode;
@property (readonly, nonatomic) NSString *clientId;
@property (readonly, nonatomic) unsigned short interruptionCode;
@property (readonly, nonatomic) NSString *useCase;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)requestBiomeEndpointForAppScopedService:(unsigned long long)a0 user:(unsigned int)a1 reply:(id /* block */)a2;
- (id /* block */)_errorHandlerWithCompletion:(id /* block */)a0;
- (id /* block */)_failureHandlerWithResponse:(unsigned short)a0;
- (id)_remoteObjectProxy:(BOOL)a0 errorCompletion:(id /* block */)a1;
- (id)initWithRemoteObjectInterface:(id)a0 exportedInterface:(id)a1 connection:(id)a2 clientId:(id)a3 interruptionCode:(unsigned short)a4 invalidationCode:(unsigned short)a5 useCase:(id)a6;
- (id)initWithRemoteObjectInterface:(id)a0 exportedInterface:(id)a1 serviceName:(id)a2 clientId:(id)a3 interruptionCode:(unsigned short)a4 invalidationCode:(unsigned short)a5 useCase:(id)a6;
- (id)initWithRemoteObjectXPCInterface:(id)a0 exportedXPCInterface:(id)a1 connection:(id)a2 clientId:(id)a3 interruptionCode:(unsigned short)a4 invalidationCode:(unsigned short)a5 useCase:(id)a6;
- (void)serviceRequest:(BOOL)a0 completion:(id /* block */)a1 usingBlock:(id /* block */)a2;
- (void)serviceVersionRespondingRequest:(BOOL)a0 completion:(id /* block */)a1 usingBlock:(id /* block */)a2;

@end
