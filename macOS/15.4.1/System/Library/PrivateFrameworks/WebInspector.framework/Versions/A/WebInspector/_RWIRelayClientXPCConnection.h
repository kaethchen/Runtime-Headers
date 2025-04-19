@class NSObject;
@protocol OS_xpc_object;

@interface _RWIRelayClientXPCConnection : _RWIRelayClientConnection

@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;
@property (readonly, nonatomic) int remotePID;

+ (id)connectionFromXPCConnection:(id)a0 delegate:(id)a1;

- (void).cxx_destruct;
- (void)sendMessage:(id)a0;
- (void)startListening;
- (void)_handleXPCEvent:(id)a0;
- (id)initWithXPCConnection:(id)a0 delegate:(id)a1;
- (void)closeInternal;

@end
