@class SNConnectionInfo, SNConnectionInternal;
@protocol SNConnectionDelegate;

@interface SNConnection : NSObject <SNConnectionDelegateInternal, SNConnectionProtocol>

@property (retain, nonatomic) SNConnectionInfo *connectionInfo;
@property (retain, nonatomic) SNConnectionInternal *underlyingConnection;
@property (weak, nonatomic) id<SNConnectionDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (id)start;
- (void)sendData:(id)a0 completion:(id /* block */)a1;
- (void)barrier:(id /* block */)a0;
- (void)probeConnection;
- (void)setSendPings:(BOOL)a0;
- (void)cancelSynchronously:(BOOL)a0 isOnConnectionQueue:(BOOL)a1 completion:(id /* block */)a2;
- (void)didCloseConnection:(id)a0;
- (void)didEncounterError:(id)a0 error:(id)a1 analysisInfo:(id)a2;
- (void)didEncounterIntermediateError:(id)a0 error:(id)a1;
- (void)didOpenConnectionType:(id)a0 type:(id)a1 routeId:(id)a2 delay:(double)a3 method:(id)a4;
- (void)didReceiveAceObject:(id)a0 object:(id)a1;
- (void)didReceiveObject:(id)a0 object:(id)a1;
- (void)getSNConnectionAnalysisInfo:(id /* block */)a0;
- (void)getSNConnectionMetrics:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithConnectionInfo:(id)a0 connectionQueue:(id)a1;
- (void)sendCommand:(id)a0 completion:(id /* block */)a1;
- (void)sendCommands:(id)a0 completion:(id /* block */)a1;
- (void)willStartConnection:(id)a0 type:(id)a1;
- (void)willStartConnection:(id)a0 with:(id)a1;

@end
