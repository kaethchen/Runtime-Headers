@class C2MultipeerDiscovery, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, C2MultipeerChunkDelegate;

@interface C2Multipeer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) C2MultipeerDiscovery *listener;
@property (retain, nonatomic) NSMutableDictionary *clientConnectionByPeer;
@property (retain, nonatomic) NSMutableDictionary *serverConnectionByPeer;
@property (retain, nonatomic) NSMutableDictionary *clientContextByRequestUUID;
@property (retain, nonatomic) id<C2MultipeerChunkDelegate> chunkDelegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *chunkDelegateQueue;

- (void).cxx_destruct;
- (void)addClientConnection:(id)a0 peerID:(id)a1;
- (void)addServerConnection:(id)a0 peerID:(id)a1;
- (void)discoverChunkSignature:(id)a0 forContainerIdentifier:(id)a1 chunkDataCallback:(id /* block */)a2;
- (id)initWithChunkDelegate:(id)a0;
- (id)initWithChunkDelegate:(id)a0 createListener:(BOOL)a1;

@end
