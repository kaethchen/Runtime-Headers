@class NSString, _RWITCPConnection;

@interface RWIServiceTCPConnection : RWIServiceConnection <_RWITCPConnectionDelegate> {
    _RWITCPConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)sendMessage:(id)a0;
- (BOOL)isConnected;
- (id)_initWithSimulator:(id)a0 tcpConnection:(id)a1 delegate:(id)a2;
- (void)closeInternal;
- (id)initWithSimulator:(id)a0 socketPath:(id)a1 delegate:(id)a2;
- (void)tcpConnection:(id)a0 didReceiveMessage:(id)a1;
- (void)tcpConnectionDidClose:(id)a0;

@end
