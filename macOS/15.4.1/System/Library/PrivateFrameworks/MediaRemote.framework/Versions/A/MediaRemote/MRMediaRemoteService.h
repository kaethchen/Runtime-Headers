@class NSObject, NSXPCListenerEndpoint, MRXPCConnection;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface MRMediaRemoteService : NSObject {
    const struct { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void *x8; } *clientModule;
    const struct { void *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; } *browsableContentEndpoint;
    const struct { void *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; } *voiceRecordingEndpoint;
    const struct { void *x0; id /* block */ x1; } *televisionEndpoint;
    const struct { void *x0; void /* function */ *x1; } *agentEndpoint;
}

@property (retain, nonatomic) MRXPCConnection *mrXPCConnection;
@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientCallbackQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientCallbackPriorityQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *browsableContentQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *voiceInputQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *televisionQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *agentQueue;
@property (nonatomic) BOOL isRunning;
@property (retain, nonatomic) NSXPCListenerEndpoint *uiServiceEndpoint;

- (void).cxx_destruct;
- (id)UIServerEndpoint;
- (id)UIServiceRelayEndpoint;
- (id)applicationUserIdentity;
- (void)beginMusicHandoffSessionWithSource:(id)a0 destination:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)closeApplicationConnection:(id)a0 error:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)createApplicationConnection:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (id)createTokenWithInvitationData:(id)a0 equivalentMediaIdentifier:(id)a1 version:(id)a2;
- (BOOL)deviceSupportsUISessions;
- (void)fetchParticipantsWithRequest:(id)a0 playerPath:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (id)getActiveSystemEndpointUIDForType:(long long)a0;
- (void)getDeviceInfoForPlayerPath:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (id)groupSessionServerEndpoint;
- (struct CGSize { double x0; double x1; })imageDimensionsForArtworkData:(id)a0;
- (void)joinGroupSessionWithToken:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)leaveGroupSessionWithIdentifier:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)presentProximityCardWithDeviceName:(id)a0 modelIdentifier:(id)a1 color:(id)a2 url:(id)a3 queue:(id)a4 completion:(id /* block */)a5;
- (void)requestGroupSessionWithCompletion:(id /* block */)a0;
- (void)resolvePlayerPath:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)sendApplicationConnectionMessage:(id)a0 forConnection:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)sendEvent:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)sendMusicHandoffEvent:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)setUIServiceRelayEndpoint:(id)a0;
- (void)suspendDisconnectionPauseForConfiguration:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)userIdentityForDSID:(id)a0 queue:(id)a1 completion:(id /* block */)a2;

@end
