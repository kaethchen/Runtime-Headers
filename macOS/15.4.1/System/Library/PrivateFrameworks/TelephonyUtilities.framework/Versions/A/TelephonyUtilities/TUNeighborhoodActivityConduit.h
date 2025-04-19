@class NSString, TUNeighborhoodActivityConduitXPCClient, NSSet, NSDictionary, TUConversationManager, NSMutableSet, TUNearbySuggestion, NSMapTable, TUNearbyDeviceHandle;
@protocol TUConduitLifecycleController, TUNeighborhoodActivityConduitApprovalDelegate;

@interface TUNeighborhoodActivityConduit : NSObject <TUNeighborhoodActivityConduitXPCClientDelegate, TUConduitLifecycleControllerDelegate>

@property (class, readonly, nonatomic, getter=isConduitAvailable) BOOL conduitAvailable;

@property (retain, nonatomic) NSMapTable *delegates;
@property (readonly, nonatomic) NSMutableSet *nearbyTVs;
@property (retain, nonatomic) TUNearbyDeviceHandle *activeSplitSessionTV;
@property (nonatomic) BOOL isRingingFaceTimeCallsOnConnectedTVDevice;
@property (readonly, nonatomic) TUNeighborhoodActivityConduitXPCClient *xpcClient;
@property (readonly, nonatomic) TUConversationManager *conversationManager;
@property (nonatomic) unsigned long long stateHandle;
@property (retain, nonatomic) id<TUConduitLifecycleController> conduitLifecycleController;
@property (weak, nonatomic) id<TUNeighborhoodActivityConduitApprovalDelegate> approvalDelegate;
@property (readonly, nonatomic) NSDictionary *nearbyTVDevices;
@property (readonly, nonatomic) NSSet *nearbyTVDeviceHandles;
@property (readonly, nonatomic) TUNearbySuggestion *suggestion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (void)setSuggestion:(id)a0;
- (void)addDelegate:(id)a0 queue:(id)a1;
- (void)connectionEstablishedForClient:(id)a0;
- (id)_findConversationForUUID:(id)a0;
- (void)_forEachDelegate:(id /* block */)a0;
- (id)_osStateDictionary;
- (void)_requestInitialState;
- (BOOL)_shouldReconnect;
- (void)approveSplitSessionForConversation:(id)a0 device:(id)a1 pullContext:(long long)a2 completion:(id /* block */)a3;
- (BOOL)canPullBackConversation:(id)a0;
- (void)cancelSplitSessionApproval;
- (void)connectionLostForClient:(id)a0;
- (void)continuityCameraDidConnect;
- (void)disconnectTVDevice:(id)a0 completion:(id /* block */)a1;
- (void)handoffConversation:(id)a0 toTVDevice:(id)a1 completion:(id /* block */)a2;
- (id)initWithConversationManager:(id)a0;
- (id)initWithConversationManager:(id)a0 xpcClient:(id)a1;
- (void)inviteTVDevice:(id)a0 toConversation:(id)a1 completion:(id /* block */)a2;
- (void)isRingingFaceTimeCallsOnConnectedTVDeviceChanged:(BOOL)a0;
- (void)pullConversation:(id)a0 fromTVDevice:(id)a1 completion:(id /* block */)a2;
- (void)respondToSuggestionWithResult:(id)a0 completion:(id /* block */)a1;
- (void)setSuggestedTVDeviceName:(id)a0 completion:(id /* block */)a1;
- (void)splitSessionUpdated;
- (void)splitSessionUpdated:(id)a0;
- (void)startConversationWith:(id)a0 on:(id)a1 completion:(id /* block */)a2;
- (void)suggestionUpdated:(id)a0;
- (void)tvDeviceAppeared:(id)a0;
- (void)tvDeviceDisappeared:(id)a0;

@end
