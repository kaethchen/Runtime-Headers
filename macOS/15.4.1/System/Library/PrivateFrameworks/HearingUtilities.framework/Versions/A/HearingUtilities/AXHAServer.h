@class NSArray, NSString, NSMutableDictionary;
@protocol AXHAServerDelegate;

@interface AXHAServer : HCServer <AXHARemoteUpdateProtocol> {
    NSMutableDictionary *_responseBlocks;
}

@property (copy, nonatomic) NSArray *availableHearingAids;
@property (retain, nonatomic) NSArray *availableControllers;
@property (nonatomic) BOOL hearingAidConnectedOrReachable;
@property (nonatomic) BOOL hearingAidReachableForAudioTransfer;
@property (retain, nonatomic) NSString *hearingDeviceName;
@property (retain, nonatomic) NSString *connectedDeviceName;
@property (retain, nonatomic) NSMutableDictionary *updates;
@property (retain, nonatomic) NSMutableDictionary *connectionStateBlocks;
@property (readonly, nonatomic) BOOL hearingAidReachable;
@property (weak, nonatomic) id<AXHAServerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)resetConnection;
- (void)handleMessageWithPayload:(id)a0 forIdentifier:(unsigned long long)a1;
- (void)registerResponseBlock:(id /* block */)a0 forUUID:(id)a1;
- (void)shouldRestartOnInterruption:(id /* block */)a0;
- (void)startServerWithDelegate:(id)a0;
- (void)_liveListenDidUpdate_boolValue:(id)a0;
- (void)startLiveListen;
- (void)_registerConnectionStateBlock:(id /* block */)a0 listenerHash:(id)a1;
- (void)_registerListener:(id)a0 forAvailableDeviceHandler:(id /* block */)a1 beginSearching:(BOOL)a2;
- (void)_registerUpdateBlock:(id)a0 forIdentifier:(unsigned long long)a1 listenerHash:(id)a2;
- (void)_unregisterUpdateListenerHash:(id)a0;
- (void)availableDevicesDidUpdate:(id)a0;
- (void)cancelHearingAidConnectionRequest;
- (void)comfortSoundsAssetsDidUpdate:(id)a0;
- (void)connectToControllerWithID:(id)a0;
- (void)controlMessageDidUpdate:(id)a0;
- (void)deviceDidUpdateProperty:(id)a0;
- (void)downloadComfortSoundAsset:(id)a0;
- (void)liveListenDidUpdate:(id)a0;
- (void)registerListener:(id)a0 forAvailableDeviceHandler:(id /* block */)a1;
- (void)registerListener:(id)a0 forComfortSoundsModelUpdatesHandler:(id /* block */)a1;
- (void)registerListener:(id)a0 forConnectionStateHandler:(id /* block */)a1;
- (void)registerListener:(id)a0 forConnectionStateHandler:(id /* block */)a1 listenerHash:(id)a2;
- (void)registerListener:(id)a0 forControlMessageHandler:(id /* block */)a1;
- (void)registerListener:(id)a0 forLiveListenLevelsHandler:(id /* block */)a1;
- (void)registerListener:(id)a0 forPropertyUpdateHandler:(id /* block */)a1;
- (void)registerPassiveListener:(id)a0 forAvailableDeviceHandler:(id /* block */)a1;
- (void)registerUpdateBlock:(id)a0 forIdentifier:(unsigned long long)a1 withListener:(id)a2;
- (void)registerUpdateBlock:(id)a0 forIdentifier:(unsigned long long)a1 withListener:(id)a2 listenerHash:(id)a3;
- (void)removeComfortSoundAsset:(id)a0;
- (void)requestHearingAidConnectionWithReason:(long long)a0;
- (void)requestHearingAidReachabilityStatus;
- (void)reregisterForComfortSoundsAssetsUpdatesIfNeeded;
- (void)sendMessagesPriorityDefault;
- (void)sendMessagesPriorityHigh;
- (void)setupListenerHelperForListener:(id)a0 withAddress:(id)a1;
- (void)stopLiveListen;
- (void)unregisterComfortSoundsModelUpdatesHandler:(id)a0;
- (void)unregisterControlMessageHandler:(id)a0;
- (void)unregisterLiveListenLevelListener:(id)a0;
- (void)unregisterUpdateListener:(id)a0;
- (void)unregisterUpdateListenerHash:(id)a0;
- (void)updateListenersWithConnectionStatus:(BOOL)a0;
- (void)updateProperty:(unsigned long long)a0 forDeviceID:(id)a1;
- (void)writeValue:(id)a0 forProperty:(unsigned long long)a1 andDeviceID:(id)a2;

@end
