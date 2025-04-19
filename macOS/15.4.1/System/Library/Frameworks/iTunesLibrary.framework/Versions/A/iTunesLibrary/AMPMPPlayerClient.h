@class NSString, NSObject, NSXPCConnection;
@protocol AMPMPPlayerClientProtocol, AMPMPPlayerClientEventsProtocol, OS_dispatch_queue;

@interface AMPMPPlayerClient : NSObject <AMPMPPlayerClientProtocol>

@property (weak, nonatomic) id<AMPMPPlayerClientProtocol> reconnectionDelegate;
@property (weak, nonatomic) id<AMPMPPlayerClientEventsProtocol> eventsDelegate;
@property (retain, nonatomic) NSXPCConnection *connectionToService;
@property (nonatomic) BOOL lostConnection;
@property (readonly, nonatomic) NSString *clientName;
@property (readonly, nonatomic) BOOL registered;
@property (readonly, nonatomic) unsigned int clientID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)connect;
- (void)serverItemDidEnd;
- (void)serverPlaybackModeDidChangeAffectingQueue:(BOOL)a0;
- (void)serverQueueDidEnd;
- (void)setServerNowPlaying:(id)a0;
- (void)setServerQueueDescriptor:(id)a0;
- (void)setServerTimeSnapshot:(id)a0;
- (void)cleanupConnectionToService;
- (void)clientIDRegistered:(unsigned int)a0;
- (id)ensureConnectedToService;
- (BOOL)isRegistered:(id *)a0;
- (void)onConnectionLost:(BOOL)a0;
- (id)remoteRegisteredObjectProxyWithErrorHandler:(id /* block */)a0;
- (BOOL)handleReconnectionToClient:(id)a0;
- (BOOL)handleRegisterClient:(unsigned int)a0 withConnection:(id)a1 error:(id *)a2;
- (id)initWithClientInfo:(id)a0 withClientID:(unsigned int)a1 withEventsDelegate:(id)a2 withQueue:(id)a3 error:(id *)a4;

@end
