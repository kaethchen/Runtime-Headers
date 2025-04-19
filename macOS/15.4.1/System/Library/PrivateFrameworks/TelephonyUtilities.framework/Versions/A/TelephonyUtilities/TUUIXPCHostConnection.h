@class NSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_queue, TUUIXPCHostConnectionDelegate, TUUIXPCHostDelegate;

@interface TUUIXPCHostConnection : NSObject <TUUIXPCHost>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (weak, nonatomic) id<TUUIXPCHostConnectionDelegate> connectionDelegate;
@property (weak, nonatomic) id<TUUIXPCHostDelegate> hostDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)remoteObjectProxy;
- (void)ping;
- (void)fetchInCallUIState:(id /* block */)a0;
- (void)fetchRemoteControlStatus:(id /* block */)a0;
- (void)handleRedialCommandWhileScreening:(id)a0;
- (id)initWithConnection:(id)a0 hostDelegate:(id)a1 connectionDelegate:(id)a2 queue:(id)a3;
- (void)shouldHostHandleMRCommand:(unsigned int)a0 completion:(id /* block */)a1;
- (void)shouldHostHandleMRCommand:(unsigned int)a0 sourceIdentifier:(id)a1 completion:(id /* block */)a2;

@end
