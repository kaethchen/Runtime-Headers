@class GKConnection;
@protocol GKTransportMatchDataDelegate, GKTransportClientDelegate, GKMultiplayerDaemonProxy;

@interface GKViceroyRelay : NSObject

@property (weak, nonatomic) id<GKTransportClientDelegate> clientDelegate;
@property (retain, nonatomic) GKConnection *connection;
@property (weak, nonatomic) id<GKTransportMatchDataDelegate> matchDataDelegate;
@property (retain, nonatomic) id<GKMultiplayerDaemonProxy> daemonProxy;

- (void).cxx_destruct;
- (void)disconnect;
- (id)dataFromBase64String:(id)a0;
- (void)initiateRelayResponse:(id)a0 playerID:(id)a1;
- (void)acceptRelayResponse:(id)a0 playerID:(id)a1;
- (void)didReceiveRelayPushData:(id)a0;
- (void)didReceiveRelayPushNotification:(id)a0;
- (void)handleRelayPushData:(id)a0 onlyIfPreemptive:(BOOL)a1;
- (id)initWithClientDelegate:(id)a0 connection:(id)a1 matchDataDelegate:(id)a2 daemonProxy:(id)a3;
- (void)initiateRelayConnectionForPlayerID:(id)a0 connectionContext:(id)a1;
- (id)initiateRelayInfoFromPush:(id)a0 forPlayerID:(id)a1;
- (id)initiateRelayInfoFromServerResponse:(id)a0 forPlayerID:(id)a1;
- (void)preemptRelay:(id)a0;
- (void)relayDidInitiateConnection:(id)a0 forPlayerID:(id)a1;
- (void)relayDidUpdateConnection:(id)a0 forPlayerID:(id)a1;
- (void)requestRelayInitiateForPlayerID:(id)a0 connectionContext:(id)a1;
- (void)requestRelayUpdateForPlayerID:(id)a0 connectionContext:(id)a1;
- (void)sessionDidInitiateOrUpdateRelay:(id)a0 playerID:(id)a1;
- (BOOL)shouldStartRelayForPlayerID:(id)a0;
- (void)updateRelayConnectionForPlayerID:(id)a0 connectionContext:(id)a1;
- (id)updateRelayInfoFromPush:(id)a0 forPlayerID:(id)a1;

@end
