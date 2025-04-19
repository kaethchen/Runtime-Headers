@class NSString, NSXPCConnection, NSXPCInterface, NSObject;
@protocol OS_dispatch_queue, TUNeighborhoodActivityConduitXPCClientDelegate;

@interface TUNeighborhoodActivityConduitXPCClient : NSObject <TUNeighborhoodActivityConduitXPCClient>

@property (class, readonly, nonatomic) NSXPCInterface *neighborhoodActivityClientXPCInterface;
@property (class, readonly, nonatomic) NSXPCInterface *neighborhoodActivityServerXPCInterface;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic) int token;
@property (weak, nonatomic) id<TUNeighborhoodActivityConduitXPCClientDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allowedXPCClasses;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)server;
- (void)ensureConnection;
- (void)activeSplitSessionTVDeviceWithCompletion:(id /* block */)a0;
- (void)approveSplitSessionForConversation:(id)a0 requestedFromDevice:(id)a1 pullContext:(long long)a2 completion:(id /* block */)a3;
- (void)cancelSplitSessionApproval;
- (void)disconnectTVDevice:(id)a0 completion:(id /* block */)a1;
- (void)handoffConversation:(id)a0 toTVDevice:(id)a1 completion:(id /* block */)a2;
- (void)inviteTVDevice:(id)a0 toConversationWithUUID:(id)a1 completion:(id /* block */)a2;
- (oneway void)isRingingFaceTimeCallsOnConnectedTVDeviceChanged:(BOOL)a0;
- (void)isRingingFaceTimeCallsOnConnectedTVDeviceWithCompletion:(id /* block */)a0;
- (void)nearbyTVDevicesWithCompletion:(id /* block */)a0;
- (void)pullConversation:(id)a0 fromTVDevice:(id)a1 completion:(id /* block */)a2;
- (void)registerApprovalClientEnabled:(BOOL)a0;
- (void)respondToSuggestionWithResult:(id)a0 completion:(id /* block */)a1;
- (id)serverWithErrorHandler:(id /* block */)a0;
- (void)setSuggestedTVDeviceName:(id)a0 completion:(id /* block */)a1;
- (oneway void)splitSessionUpdated;
- (void)startConversationWith:(id)a0 on:(id)a1 completion:(id /* block */)a2;
- (oneway void)suggestionUpdated:(id)a0;
- (void)suggestionWithCompletion:(id /* block */)a0;
- (oneway void)tvDeviceAppeared:(id)a0;
- (oneway void)tvDeviceDisappeared:(id)a0;

@end
