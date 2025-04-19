@class NSMutableDictionary, NSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_source, TVRCXPCRequestProtocol;

@interface TVRCXPCClient : NSObject <TVRCXPCRequestProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_source> *deviceQueryRetryTimer;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) id<TVRCXPCRequestProtocol> remoteObject;
@property (retain, nonatomic) NSMutableDictionary *eventObserversByID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_invalidateConnection;
- (void)_broadcastStateUpdateToDevices:(id)a0;
- (void)_cancelRetryTimer;
- (void)_disconnectAllDevices;
- (void)_postInvalidationNotification;
- (void)_setupConnectionIfNeeded;
- (void)_startDeviceQueryRetryTimerWithEventHander:(id /* block */)a0;
- (void)addEventObserver:(id)a0 forDeviceWithIdentifier:(id)a1;
- (void)addItemForDeviceWithIdentifier:(id)a0 mediaIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)beginDeviceQueryWithResponse:(id /* block */)a0;
- (void)cancelAuthChallengeForDeviceWithIdentifier:(id)a0;
- (void)closeConnectionToDeviceWithIdentifier:(id)a0 withType:(unsigned long long)a1;
- (void)deviceQueryUpdatedDiscoveredDevices:(id)a0;
- (void)deviceUpdatedState:(id)a0;
- (void)deviceWithState:(id)a0 encounteredAuthChallengeOfType:(long long)a1 attributes:(long long)a2 codeToEnterOnDevice:(id)a3 throttleSeconds:(long long)a4;
- (void)enableFindingSession:(BOOL)a0 forDeviceIdentifier:(id)a1;
- (void)enableTVRemoteOnLockscreen:(BOOL)a0 forDeviceIdentifier:(id)a1;
- (void)endDeviceQuery;
- (void)fetchActiveMREndpointUIDWithCompletion:(id /* block */)a0;
- (void)fetchLaunchableAppsForDeviceWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)fetchUpNextInfoForDeviceWithIdentifier:(id)a0 paginationToken:(id)a1 completion:(id /* block */)a2;
- (void)fulfillAuthChallengeForDeviceWithIdentifier:(id)a0 withLocallyEnteredCode:(id)a1;
- (void)getConnectionStatusToDeviceWithIdentifier:(id)a0 response:(id /* block */)a1;
- (void)getSuggestedDevicesWithResponse:(id /* block */)a0;
- (void)launchAppForDeviceWithIdentifier:(id)a0 bundleID:(id)a1 completion:(id /* block */)a2;
- (void)launchViewServiceForDeviceWithIdentifier:(id)a0;
- (void)markAsWatchedForDeviceWithIdentifier:(id)a0 mediaIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)openConnectionToDeviceWithIdentifier:(id)a0 connectionContext:(long long)a1;
- (void)playItem:(id)a0 deviceIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)removeEventObserver:(id)a0 forDeviceWithIdentifier:(id)a1;
- (void)removeItemForDeviceWithIdentifier:(id)a0 mediaIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)sendButtonEvent:(id)a0 toDeviceWithIdentifier:(id)a1;
- (void)sendEvent:(id)a0 toDeviceWithIdentifier:(id)a1 options:(id)a2 response:(id /* block */)a3;
- (void)sendGameControllerEvent:(id)a0 toDeviceWithIdentifier:(id)a1;
- (void)sendInputReturnKeyToDeviceWithIdentifier:(id)a0;
- (void)sendInputText:(id)a0 toDeviceWithIdentifier:(id)a1;
- (void)sendInputTextPayload:(id)a0 toDeviceWithIdentifier:(id)a1;
- (void)sendTouchEvent:(id)a0 toDeviceWithIdentifier:(id)a1;
- (void)suggestedDevices:(id)a0;

@end
