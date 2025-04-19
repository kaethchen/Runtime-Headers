@class HMFTimer, NSUUID, HMMTRAccessoryServerBrowser, HMMTRAccessoryServer, NSString, NSObject;
@protocol OS_dispatch_queue, HMMTRThreadRadioControllerDelegate;

@interface HMMTRThreadRadioManager : HMFObject <HMFLogging, HMFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSUUID *fabricUUIDOfActiveThreadNetwork;
@property (nonatomic) BOOL threadNetworkActivatedForSystemCommissionerFabric;
@property (weak, nonatomic) HMMTRAccessoryServerBrowser *browser;
@property (weak, nonatomic) HMMTRAccessoryServer *pairingAccessoryServer;
@property (nonatomic) BOOL preventDisconnect;
@property (nonatomic, getter=isPairingActive) BOOL pairingActive;
@property (nonatomic, getter=isFirmwareUpdateActive) BOOL firmwareUpdateActive;
@property (nonatomic) BOOL pendingThreadStart;
@property (retain, nonatomic) NSString *eMACAddressOfFWUpdatesAccessory;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMFTimer *disconnectTimer;
@property BOOL deviceIsLockedAndPendingStopThread;
@property (copy, nonatomic) id /* block */ retryCompletionHandler;
@property (copy) id /* block */ pendingStartPairingBlock;
@property (retain, nonatomic) NSUUID *fabricUUIDOfPendingStartPairingBlock;
@property (nonatomic) long long lastKnownThreadNetworkConnectionState;
@property (nonatomic) BOOL isWEDConnectionRetryActive;
@property (retain, nonatomic) NSString *eMACAddressOfWEDAccessory;
@property (weak) id<HMMTRThreadRadioControllerDelegate> delegate;
@property (nonatomic) BOOL deviceSupportsThreadService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithBrowser:(id)a0;
- (void)dispatchAfter:(unsigned long long)a0 block:(id /* block */)a1;
- (void)timerDidFire:(id)a0;
- (void)postNotification:(id)a0 userInfo:(id)a1;
- (void)dispatchBlock:(id /* block */)a0;
- (BOOL)hasMatterThreadAccessoryInHomeWithFabricUUID:(id)a0;
- (void)notifyPeripheralDeviceNodeTypeChanged:(long long)a0;
- (void)notifyThreadRadioStateChanged:(long long)a0 nodeType:(long long)a1 fabricUUID:(id)a2;
- (void)notifyWakeOnDeviceConnectionChanged:(long long)a0 eMACAddress:(id)a1;
- (void)overrideLocationCheckForPairingForFabricUUID:(id)a0;
- (void)startThreadRadioForHomeWithFabricUUID:(id)a0;
- (void)stopThreadRadioForHomeWithFabricUUID:(id)a0;
- (void)allowDisconnect;
- (BOOL)isReadyToEstablishWEDConnection;
- (void)__startAccessoryPairingWithExtendedMACAddress:(id)a0 isWedDevice:(BOOL)a1 accessoryServer:(id)a2 completion:(id /* block */)a3;
- (void)_allowDisconnect;
- (double)_computeRetryDelayForError:(id)a0;
- (id)_connectionStateValueToString:(long long)a0;
- (id)_nodeTypeValueToString:(long long)a0;
- (void)_notifyThreadRadioStateChanged:(long long)a0 nodeType:(long long)a1 fabricUUID:(id)a2;
- (void)_notifyWakeOnDeviceConnectionChanged:(long long)a0 eMACAddress:(id)a1;
- (void)_retryWEDConnectionToAccessoryWithDelayInMs:(double)a0;
- (BOOL)_shouldRetryWEDConnectionToAccessory;
- (void)_startAccessoryFirmwareUpdateWithExtendedMACAddress:(id)a0 isWedDevice:(BOOL)a1 completion:(id /* block */)a2;
- (void)_startAccessoryPairingWithExtendedMACAddress:(id)a0 isWedDevice:(BOOL)a1 accessoryServer:(id)a2 completion:(id /* block */)a3;
- (void)_startThreadRadioForSystemCommissionerFabricUUID:(id)a0;
- (void)_startThreadRadioForTargetFabricUUID:(id)a0 preventDisconnect:(BOOL)a1;
- (void)_stopAccessoryFirmwareUpdateWithCompletion:(id /* block */)a0;
- (void)_stopAccessoryPairingWithCompletion:(id /* block */)a0;
- (void)_stopThreadRadioForSystemCommissionerFabricUUID:(id)a0;
- (void)_stopThreadRadioForTargetFabricUUID:(id)a0;
- (void)_updateFabricUUIDOfActiveThreadNetwork:(id)a0 isFabricUUIDOfSystemCommissioner:(BOOL)a1;
- (void)connectToAccessoryWithExtendedMACAddress:(id)a0 completion:(id /* block */)a1;
- (void)connectToAccessoryWithExtendedMACAddress:(id)a0 forRetry:(BOOL)a1 completion:(id /* block */)a2;
- (void)handleDeviceLockStateChange:(BOOL)a0;
- (BOOL)isReadyToTransitionToFullRouterModeForFirmwareUpdate;
- (BOOL)isThreadNetworkConnected;
- (void)startAccessoryFirmwareUpdateWithExtendedMACAddress:(id)a0 isWedDevice:(BOOL)a1 completion:(id /* block */)a2;
- (void)startAccessoryPairingWithExtendedMACAddress:(id)a0 isWedDevice:(BOOL)a1 accessoryServer:(id)a2 completion:(id /* block */)a3;
- (void)startThreadRadioForHomeWithFabricUUID:(id)a0 preventDisconnect:(BOOL)a1;
- (void)startThreadRadioForSystemCommissionerFabricUUID:(id)a0;
- (void)stopAccessoryFirmwareUpdateWithCompletion:(id /* block */)a0;
- (void)stopAccessoryPairingWithCompletion:(id /* block */)a0;
- (void)stopThreadOnDeviceLockTimeout;
- (void)stopThreadOnUserLogout;
- (void)stopThreadRadioForSystemCommissionerFabricUUID:(id)a0;

@end
