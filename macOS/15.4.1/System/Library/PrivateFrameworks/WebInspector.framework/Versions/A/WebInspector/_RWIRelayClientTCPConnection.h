@class NSString, _RWITCPConnection;

@interface _RWIRelayClientTCPConnection : _RWIRelayClientConnection <_RWITCPConnectionDelegate>

@property (retain, nonatomic) _RWITCPConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)connectionFromTCPConnection:(id)a0 delegate:(id)a1;

- (void).cxx_destruct;
- (void)sendMessage:(id)a0;
- (id)initWithTCPConnection:(id)a0 delegate:(id)a1;
- (void)closeInternal;
- (void)tcpConnection:(id)a0 didReceiveMessage:(id)a1;
- (void)tcpConnectionDidClose:(id)a0;

@end
