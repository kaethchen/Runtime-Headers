@class NSXPCListenerEndpoint, NSString, NSXPCConnection, Protocol;
@protocol NRDUpdateBrainDelegateInterface;

@interface NRDUpdateBrainClientImpl : NSObject <NRDUpdateBrainInterface> {
    NSXPCConnection *_serverConnection;
    NSXPCListenerEndpoint *_serverEndpoint;
    BOOL _connected;
    id<NRDUpdateBrainDelegateInterface> _delegate;
    Protocol *_brainProtocol;
    unsigned int _brainProtocolVersion;
}

@property (readonly) NSString *brainVersion;
@property (readonly) NSString *brainTimeStamp;
@property (readonly) NSString *brainUUID;
@property (readonly) NSString *dylibUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)initWithEndpoint:(id)a0;
- (void)ping:(id /* block */)a0;
- (void)_invalidateConnection;
- (void)_connectToServerIfNecessary_nolock;
- (void)_invalidateConnection_nolock;
- (id)_remoteInterfaceWithErrorHandler:(id /* block */)a0;
- (void)calculateCurrentRequiredSpace:(id)a0 callback:(id /* block */)a1;
- (void)cancelNeRDUpdate:(BOOL)a0 callback:(id /* block */)a1;
- (void)connectToServerIfNecessary;
- (void)downloadNeRDUpdate:(id)a0 options:(id)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
- (void)finishNeRDUpdate:(id /* block */)a0;
- (void)getListenerEndpoint:(id /* block */)a0;
- (void)handleConnectionError:(id)a0 method:(const char *)a1 handler:(id /* block */)a2;
- (void)installNeRDUpdate:(id)a0 options:(id)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
- (void)noteConnectionDropped;
- (void)ping:(id)a0 reply:(id /* block */)a1;
- (void)purgeNeRDUpdate:(id /* block */)a0;
- (void)queryNeRDUpdate:(id)a0 build:(id)a1 options:(id)a2 callback:(id /* block */)a3;
- (void)run:(unsigned long long)a0 callback:(id /* block */)a1;
- (void)run:(unsigned long long)a0 options:(id)a1 callback:(id /* block */)a2;

@end
