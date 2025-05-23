@class NSHashTable, HMFTimer, HMDMediaBrowser, HMDHAP2Storage, NSMutableArray, NSMutableSet, HMDHomeManager, NSString, NSArray, HMDAuthServer, HMMTRAccessoryServerBrowser, HMFMessageDispatcher, HMDUnassociatedMediaAccessory, HMDUnassociatedWACAccessory, NSObject, NSData, HMDWACBrowser, NSUUID, HAPAccessoryServerBrowserBTLE, HAPAccessoryServerBrowser, HAPAccessoryServerBrowserIP;
@protocol HMDAccessoryBrowserManagerDelegate, HMDAccessoryBrowserUnpairedAccessoryManagerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface HMDAccessoryBrowser : HMFObject <HAPAccessoryServerBrowserDelegate, HAPAccessoryServerDelegate, HMMTRHAPAccessoryServerPairingDelegate, HMMTRHAPAccessoryServerBrowserPairingDelegate, HMFMessageReceiver, HMFTimerDelegate, HMDMediaBrowserDelegate, HMDWACBrowserDelegate, HMDWACAccessoryConfigurationDelegate, HMDWatchSystemStateDelegate, HMDAuthServerDelegate, HMFLogging, HMDAccessoryBrowserProtocol, HMDAccessoryBrowserHapProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableSet *_unpairedHAPAccessories;
    NSMutableSet *_unassociatedMediaAccessories;
    NSMutableSet *_deviceSetupMediaAccessories;
    NSMutableSet *_unassociatedWACAccessories;
    HMDUnassociatedMediaAccessory *_unassociatedCurrentAccessory;
    NSMutableSet *_browsingConnections;
    NSHashTable *_activeAssertions;
}

@property BOOL internalDiscoveryRequest;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic) unsigned long long generationCounter;
@property (weak, nonatomic) HMDHomeManager *homeManager;
@property (weak, nonatomic) id<HMDAccessoryBrowserManagerDelegate> managerDelegate;
@property (weak, nonatomic) id<HMDAccessoryBrowserUnpairedAccessoryManagerDelegate> unpairedAccessoryManagerDelegate;
@property (retain, nonatomic) NSMutableArray *accessoryServerBrowsers;
@property (retain, nonatomic) NSHashTable *discoveringAccessoryServerBrowsers;
@property (retain, nonatomic) HAPAccessoryServerBrowserIP *ipAccessoryServerBrowser;
@property (retain, nonatomic) HAPAccessoryServerBrowserBTLE *btleAccessoryServerBrowser;
@property (retain, nonatomic) HAPAccessoryServerBrowser *hap2AccessoryServerBrowser;
@property (retain, nonatomic) HMDHAP2Storage *hap2Storage;
@property (retain, nonatomic) HMDMediaBrowser *mediaBrowser;
@property (retain, nonatomic) HMDWACBrowser *wacBrowser;
@property (retain, nonatomic, getter=getActiveWACSession, setter=setActiveWACSession:) HMDUnassociatedWACAccessory *accessoryPerformingWAC;
@property (retain, nonatomic) HMDAuthServer *authServer;
@property (readonly, nonatomic) HMFTimer *stopReprovisioningTimer;
@property (readonly, nonatomic) HMFTimer *stopBrowsingAccessoriesNeedingReprovisioningTimer;
@property (retain, nonatomic) NSString *identifierOfAccessoryBeingReprovisioned;
@property (retain, nonatomic) NSData *wiFiPSKForAccessoryReprovisioning;
@property (retain, nonatomic) NSString *countrycodeForAccessoryReprovisioning;
@property (nonatomic) BOOL active;
@property (retain, nonatomic) NSMutableArray *pairedAccessories;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *reachabilityTimerForBTLE;
@property (readonly, nonatomic) NSArray *unpairedHAPAccessories;
@property (readonly, nonatomic) NSArray *unassociatedMediaAccessories;
@property (readonly, nonatomic) NSArray *deviceSetupMediaAccessories;
@property (retain, nonatomic) NSMutableArray *currentlyPairingAccessories;
@property (retain, nonatomic) NSMutableArray *currentlyPairingProgressHandlers;
@property (readonly, nonatomic) NSHashTable *tombstonedHAPAccessoryServers;
@property (readonly, nonatomic) NSHashTable *discoveringBLEAccessoryServerIdentifiers;
@property (retain, nonatomic) NSMutableSet *discoveredAccessoryServerIdentifiers;
@property (retain, nonatomic) NSArray *browseableLinkTypes;
@property (nonatomic) BOOL hasActiveWACPairing;
@property (nonatomic) BOOL btlePowerState;
@property (nonatomic) BOOL unitTestEnableWHB;
@property (nonatomic) unsigned long long unitTestBTLEReachabilityInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSArray *unassociatedAccessories;
@property (readonly) HMMTRAccessoryServerBrowser *chipAccessoryServerBrowser;

+ (id)logCategory;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_registerForNotifications;
- (void)activate:(BOOL)a0;
- (void)resetConfiguration;
- (void)endActiveAssertion:(id)a0;
- (void)timerDidFire:(id)a0;
- (id)messageDestination;
- (void)accessoryServer:(id)a0 didReceiveBadPasswordThrottleAttemptsWithDelay:(long long)a1;
- (void)accessoryServer:(id)a0 authenticateUUID:(id)a1 token:(id)a2;
- (void)accessoryServer:(id)a0 confirmUUID:(id)a1 token:(id)a2;
- (void)accessoryServer:(id)a0 didDisconnectWithError:(id)a1;
- (void)accessoryServer:(id)a0 didDiscoverAccessories:(id)a1 transaction:(id)a2 error:(id)a3;
- (void)accessoryServer:(id)a0 didFinishAuth:(id)a1;
- (void)accessoryServer:(id)a0 didStopPairingWithError:(id)a1;
- (void)accessoryServer:(id)a0 didUpdateCategory:(id)a1;
- (void)accessoryServer:(id)a0 didUpdateConnectionState:(BOOL)a1 linkLayerType:(long long)a2 bookkeeping:(id)a3 withError:(id)a4;
- (void)accessoryServer:(id)a0 didUpdateConnectionState:(BOOL)a1 linkLayerType:(long long)a2 withError:(id)a3;
- (void)accessoryServer:(id)a0 didUpdateConnectionState:(BOOL)a1 sessionInfo:(id)a2 linkLayerType:(long long)a3 withError:(id)a4;
- (void)accessoryServer:(id)a0 didUpdateHasPairings:(BOOL)a1;
- (void)accessoryServer:(id)a0 didUpdateName:(id)a1;
- (void)accessoryServer:(id)a0 didUpdateValuesForCharacteristics:(id)a1 stateNumber:(id)a2 broadcast:(BOOL)a3;
- (void)accessoryServer:(id)a0 didUpdateWakeNumber:(id)a1;
- (void)accessoryServer:(id)a0 promptUserForPasswordWithType:(unsigned long long)a1;
- (void)accessoryServer:(id)a0 requestUserPermission:(long long)a1 accessoryInfo:(id)a2 error:(id)a3;
- (void)accessoryServer:(id)a0 updatePairingProgress:(long long)a1;
- (void)accessoryServer:(id)a0 validateCert:(id)a1 model:(id)a2;
- (void)accessoryServer:(id)a0 validateUUID:(id)a1 token:(id)a2 model:(id)a3;
- (void)accessoryServerBrowser:(id)a0 accessoryServer:(id)a1 didUpdateValuesForCharacteristics:(id)a2 stateNumber:(id)a3 broadcast:(BOOL)a4;
- (void)accessoryServerBrowser:(id)a0 didChangeReachability:(BOOL)a1 forAccessoryServerWithIdentifier:(id)a2;
- (void)accessoryServerBrowser:(id)a0 didFailToDiscoverAccessoryServerWithIdentifier:(id)a1;
- (void)accessoryServerBrowser:(id)a0 didFindAccessoryServer:(id)a1 stateChanged:(BOOL)a2 stateNumber:(id)a3;
- (void)accessoryServerBrowser:(id)a0 didRemoveAccessoryServer:(id)a1 error:(id)a2;
- (void)accessoryServerBrowser:(id)a0 didStartDiscoveringWithError:(id)a1;
- (void)accessoryServerBrowser:(id)a0 didStopDiscoveringWithError:(id)a1;
- (void)accessoryServerBrowser:(id)a0 getCacheForAccessoryWithIdentifier:(id)a1 withCompletion:(id /* block */)a2;
- (void)accessoryServerBrowser:(id)a0 removeCacheForAccessoryWithIdentifier:(id)a1;
- (void)accessoryServerBrowser:(id)a0 saveCache:(id)a1 serverIdentifier:(id)a2;
- (void)accessoryServerDidUpdateStateNumber:(id)a0;
- (void)accessoryServerNeedsOwnershipToken:(id)a0;
- (id)discoveredAccessoryServers;
- (void)handleConnectionUpdateWithBonjourDeviceInfo:(id)a0 socketInfo:(id)a1;
- (BOOL)isServerLinkTypeBrowseable:(long long)a0;
- (void)resetPairedAccessories;
- (void)retrieveCurrentStateForIdentifier:(id)a0 stateNumber:(id *)a1 isReachable:(BOOL *)a2 linkQuality:(unsigned long long *)a3 lastSeen:(id *)a4;
- (void)stopTrackingBTLEAccessoriesWithIdentifiers:(id)a0;
- (void)updateBroadcastKeyForIdentifier:(id)a0 key:(id)a1 keyUpdatedStateNumber:(id)a2 keyUpdatedTime:(double)a3;
- (void)updateStateForIdentifier:(id)a0 stateNumber:(id)a1;
- (void)_startPairingInterruptionTimer:(id)a0;
- (void)_stopReprovisioningTimerHandler;
- (void)accessoryServerBrowser:(id)a0 didFindAccessoryServerForReprovisioning:(id)a1;
- (id)beginActiveAssertionWithReason:(id)a0;
- (id)dumpRegisteredPairedAccessories;
- (void)evaluateAccessoryDiscoveryState;
- (void)handleXPCConnectionInvalidated:(id)a0;
- (void)removeUnassociatedWACAccessory:(id)a0;
- (void)restartBrowsers;
- (void)updateUnassociatedWACAccessory:(id)a0;
- (void)__removeBrowsingObserver:(id)a0 error:(id)a1;
- (void)_addUnpairedAccessoryForServer:(id)a0;
- (void)_notifyDelegateOfReachabilityChange:(BOOL)a0 forAccessoryWithIdentifier:(id)a1;
- (void)homeLocationChangeNotification:(id)a0;
- (void)setQOS:(long long)a0;
- (void)stopDiscoveringMediaAccessories;
- (void)__activate;
- (void)__addBrowsingConnection:(id)a0;
- (void)__handleProcessStateChange:(id)a0;
- (id)__identifiersOfPairedAccessoriesWithTransports:(unsigned long long)a0;
- (void)__inactivate;
- (BOOL)__isAccessoryBrowsingRequested;
- (BOOL)__isMediaAccessoryBrowsingRequested;
- (void)__resetBrowsingConnections;
- (void)_accessoryServer:(id)a0 didStopPairingWithError:(id)a1 matterPairingEndContext:(id)a2;
- (void)_accessoryServerBrowser:(id)a0 didRemoveAccessoryServer:(id)a1 error:(id)a2 matterPairingEndContext:(id)a3;
- (void)_addDiscoveredAccessoryServerIdentifier:(id)a0;
- (void)_addReconfirmTimer:(id)a0 accessoryServer:(id)a1;
- (void)_associate:(BOOL)a0 hapAccessoryWithAdvertisement:(id)a1;
- (void)_associateMediaAccessoryForServer:(id)a0;
- (void)_btleAccessoryReachabilityProbeTimer:(BOOL)a0;
- (void)_callProgressOrErrorOut:(id)a0 pairingInfo:(id)a1 accessoryInfo:(id)a2 unpairedAccessory:(id)a3 progress:(long long)a4 certStatus:(unsigned long long)a5;
- (void)_cancelCurrentlyPairingAccessories:(long long)a0 linkType:(id)a1;
- (void)_cancelPairingWithAccessory:(id)a0 error:(id)a1 context:(id)a2;
- (void)_cancelPairingWithAccessoryDescription:(id)a0 error:(id)a1 context:(id)a2;
- (void)_checkIfPairingWithPairedAccessoryServer:(id)a0 errorCode:(long long)a1;
- (void)_continueAfterPPIDValidation:(BOOL)a0 server:(id)a1;
- (void)_discoverAccessories:(id)a0;
- (void)_discoverAccessoryServer:(id)a0 linkType:(long long)a1 errorHandler:(id /* block */)a2;
- (id)_getHAPMetadataFromHMMetadata:(id)a0;
- (void)_handleAddedAccessory:(id)a0;
- (void)_handleAddedAccessoryAdvertisements:(id)a0;
- (void)_handleCurrentWiFiNetworkChangedNotification:(id)a0;
- (void)_handlePairingInterruptedTimeout:(id)a0 error:(id)a1;
- (void)_handleRemovedAccessory:(id)a0;
- (void)_handleRemovedAccessoryAdvertisements:(id)a0;
- (void)_handleRemovedUnpairedHAPAccessory:(id)a0;
- (void)_handleRequestFetchNewAccessories:(id)a0;
- (void)_handleRequestSearchForNewAccessories:(id)a0;
- (void)_handleSetupCodeAvailable:(id)a0;
- (void)_handleWACAccessoryFound;
- (BOOL)_isAccessoryServerTombstoned:(id)a0;
- (BOOL)_isHomeHubAvailableWithConfiguration:(id)a0;
- (BOOL)_isHomeHubMatterSharedAdminPairingCapableWithConfiguration:(id)a0;
- (BOOL)_isOwnerPairingAccessoryWithConfiguration:(id)a0;
- (BOOL)_isPrimaryResidentReachableWithConfiguration:(id)a0;
- (void)_notifyDelegateOfAccessoryServer:(id)a0 didDiscoverAccessories:(id)a1 transaction:(id)a2 error:(id)a3;
- (void)_notifyDelegateOfAccessoryServer:(id)a0 didStopPairingWithError:(id)a1;
- (void)_notifyDelegateOfAccessoryServer:(id)a0 didUpdateCategory:(id)a1;
- (void)_notifyDelegateOfAccessoryServer:(id)a0 didUpdateHasPairings:(BOOL)a1;
- (void)_notifyDelegateOfAccessoryServer:(id)a0 didUpdateValuesForCharacteristics:(id)a1 stateNumber:(id)a2 broadcast:(BOOL)a3;
- (void)_notifyDelegateOfAccessoryServerNeedingReprovisioning:(id)a0 error:(id)a1;
- (void)_notifyDelegateOfDiscoveryFailure:(id)a0 accessoryServer:(id)a1 linkType:(long long)a2;
- (void)_notifyDelegateOfNewPairedAccessoryServer:(id)a0 stateChanged:(BOOL)a1 stateNumber:(id)a2;
- (void)_notifyDelegateOfReachabilityChangeChange:(BOOL)a0 forBTLEAccessories:(id)a1;
- (void)_notifyDelegateOfRemovedAccessoryServer:(id)a0 error:(id)a1;
- (void)_notifyDelegateOfTombstonedAccessoryServer:(id)a0;
- (void)_notifyDelegateOfWACCompletionForAccessoryServerWithIdentifier:(id)a0 error:(id)a1;
- (void)_notifyManagerOfNewAccessory;
- (void)_pairAccessory:(id)a0 configuration:(id)a1 completionHandler:(id /* block */)a2;
- (void)_pairAccessoryWithDescription:(id)a0 configuration:(id)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)_pairingInformationForAccessoryIdentifier:(id)a0;
- (id)_pairingInformationForUnpairedAccessory:(id)a0;
- (id)_progressHandlerForUnpairedAccessory:(id)a0;
- (void)_promptForPairingPasswordForServer:(id)a0 reason:(id)a1;
- (void)_registerForMessages;
- (void)_removeBrowsingConnection:(id)a0 error:(id)a1;
- (void)_removeDiscoveredAccessoryServerIdentifier:(id)a0;
- (void)_removePairingInformation:(id)a0 error:(id)a1 context:(id)a2;
- (void)_removePairingInformationForUnpairedAccessory:(id)a0;
- (void)_reprovisionAccessoryWithIdentifier:(id)a0 wiFiPSK:(id)a1 countryCode:(id)a2 withCompletion:(id /* block */)a3;
- (id)_requiredCharacteristicsTypesToReadFromBTLEServer:(id)a0;
- (void)_restartBrowsers;
- (void)_resurrectAccessoryServer:(id)a0;
- (void)_sendNewAccessoryData:(id)a0 messageName:(id)a1;
- (void)_sendPairingCompletionStatusForServer:(id)a0 error:(id)a1 matterPairingEndContext:(id)a2 completionHandler:(id /* block */)a3;
- (void)_setBTLEPowerChangeCompletionHandler;
- (id)_setPairingTargetFabricUUIDWithServer:(id)a0 homeUUID:(id)a1;
- (void)_setupHMMTRAccessoryServer:(id)a0 pairingInfo:(id)a1;
- (BOOL)_shouldAccessoryServerBeTombstoned:(id)a0;
- (void)_startDiscoveringAccessoriesNeedingReprovisioning;
- (void)_startDiscoveringAccessoriesWithLinkType:(id)a0;
- (void)_startDiscoveringMediaAccessories;
- (void)_startDiscoveringPairedAccessories:(id)a0;
- (void)_startDiscoveryForAccessoryServerBrowser:(id)a0;
- (void)_startOrStopAccessoryDiscovery;
- (void)_stopBtleAccessoryReachabilityProbeTimer;
- (void)_stopDiscoveringAccessoriesWithError:(id)a0;
- (void)_stopDiscoveringAccessoriesWithLinkType:(id)a0 force:(BOOL)a1 error:(id)a2;
- (void)_stopDiscoveringMediaAccessories;
- (void)_stopDiscoveryForAccessoryServerBrowser:(id)a0;
- (void)_stopReconfirmTimer:(id)a0;
- (void)_tombstoneAccessoryServer:(id)a0 forceNotify:(BOOL)a1;
- (id)_tombstonedAccessoryServerWithServerIdentifier:(id)a0;
- (id)_unassociatedMediaAccessoryWithIdentifier:(id)a0;
- (id)_unpairedAccessoryMatchingPairingInfo:(id)a0;
- (void)_updateHasActiveWACPairing:(long long)a0;
- (void)_updatePairingRetryTimerForAccessory:(id)a0 delay:(long long)a1;
- (id)accessoryBrowserHapProtocol;
- (void)accessoryServer:(id)a0 didStopPairingWithError:(id)a1 matterPairingEndContext:(id)a2;
- (void)accessoryServer:(id)a0 didUpdateMatterDeviceTypeID:(id)a1;
- (void)accessoryServer:(id)a0 promtDialog:(id)a1 forNotCertifiedAccessory:(id)a2 completion:(id /* block */)a3;
- (void)accessoryServerBrowser:(id)a0 didFindAccessoryServerNeedingReprovisioning:(id)a1 error:(id)a2;
- (void)accessoryServerBrowser:(id)a0 didFinishPairingForAccessoryServer:(id)a1;
- (void)accessoryServerBrowser:(id)a0 didFinishWACForAccessoryWithIdentifier:(id)a1 error:(id)a2;
- (void)accessoryServerBrowser:(id)a0 didRemoveAccessoryServer:(id)a1 error:(id)a2 matterPairingEndContext:(id)a3;
- (void)accessoryServerBrowser:(id)a0 getCommissioningCertificatesForNodeID:(id)a1 fabricID:(id)a2 publicKey:(id)a3 completion:(id /* block */)a4;
- (void)accessoryServerBrowser:(id)a0 getLockedState:(BOOL *)a1;
- (void)accessoryServerBrowser:(id)a0 getThreadNetworkCredentialsForAccessoryWithIdentifier:(id)a1 withCompletion:(id /* block */)a2;
- (void)addPairedAccessory:(id)a0;
- (void)addUnassociatedAccessory:(id)a0 forDeviceSetup:(BOOL)a1;
- (void)addUnassociatedMediaAccessory:(id)a0 forDeviceSetup:(BOOL)a1;
- (void)addUnassociatedWACAccessory:(id)a0;
- (void)addUnpairedAccessoryServer:(id)a0 identifier:(id)a1;
- (void)addUnpairedHAPAccessory:(id)a0;
- (BOOL)areThereAnyAssociatedAirPlayAccessories;
- (BOOL)areThereAnyPairedAccessories;
- (BOOL)areThereAnyPairedBTLEAccessories;
- (BOOL)areThereAnyPairedUnknownLinkTypeAccessories;
- (void)browser:(id)a0 didAddAdvertisements:(id)a1;
- (void)browser:(id)a0 didFindAssociatedMediaAccessory:(id)a1;
- (void)browser:(id)a0 didLoseAssociatedMediaAccessory:(id)a1 error:(id)a2;
- (void)browser:(id)a0 didRemoveAdvertisements:(id)a1;
- (void)browser:(id)a0 didRemoveSessions:(id)a1;
- (void)browser:(id)a0 didUpdateEndpoints:(id)a1;
- (id)browsingConnections;
- (void)btleAccessoryReachabilityProbeTimer:(BOOL)a0;
- (void)cancelPairingWithAccessory:(id)a0 error:(id)a1 context:(id)a2;
- (void)cancelPairingWithAccessoryDescription:(id)a0 error:(id)a1;
- (void)cancelPairingWithAccessoryDescription:(id)a0 error:(id)a1 context:(id)a2;
- (void)configureAccessory:(id)a0 trackState:(BOOL)a1 connectionPriority:(BOOL)a2;
- (void)configureWithHomeManager:(id)a0;
- (void)configureWithHomeManager:(id)a0 mediaBrowserFactory:(id /* block */)a1;
- (void)continueAddingAccessoryToHomeAfterUserConfirmation:(id)a0 withError:(id)a1;
- (id)currentControllerPairingIdentity;
- (void)currentlyFoundHAPAccessoryServerWithIdentifier:(id)a0 linkType:(long long)a1 completion:(id /* block */)a2;
- (id)demoAccessoryServerBrowser;
- (void)deregisterPairedAccessory:(id)a0;
- (void)didFinishActivation:(id)a0 context:(id)a1;
- (void)didReceiveUserConsentResponseForSetupAccessoryDetail:(id)a0 consent:(BOOL)a1;
- (void)discoverAccessories:(id)a0;
- (void)discoverAccessoryServer:(id)a0 linkType:(long long)a1 errorHandler:(id /* block */)a2;
- (id)dumpBrowsingConnections;
- (id)dumpUnassociatedAccessories;
- (void)fetchAccessoryCacheForIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)findAccessoryServerForAccessoryDescription:(id)a0;
- (void)handleActivationResponse:(id)a0 context:(id)a1;
- (void)handleAddedAccessory:(id)a0;
- (void)handleConnectionDeactivation:(id)a0;
- (void)handleNewlyPairedAccessory:(id)a0 linkType:(long long)a1;
- (void)handlePPIDInfoResponse:(id)a0 context:(id)a1 error:(id)a2;
- (void)handleRemovedAccessory:(id)a0;
- (void)handleSetupCodeAvailable:(id)a0;
- (id)identifiersOfAssociatedMediaAccessories;
- (id)identifiersOfPairedBTLEAccessories;
- (id)identifiersOfPairedUnknownLinkTypeAccessories;
- (id)initWithMessageDispatcher:(id)a0;
- (id)initWithMessageDispatcher:(id)a0 injectedSettings:(id)a1;
- (BOOL)isBrowsingAllowed;
- (BOOL)isDiscoveringAccessoriesWithLinkType:(long long)a0;
- (void)notifyMTRMetrics:(id)a0;
- (void)notifyMatterAccessoryPairingStep:(unsigned long long)a0;
- (unsigned long long)numPairedIPAccessories;
- (void)pairAccessory:(id)a0 configuration:(id)a1 completionHandler:(id /* block */)a2;
- (void)pairAccessoryWithDescription:(id)a0 configuration:(id)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)pairedAccessoryInformationWithIdentifier:(id)a0;
- (id)pairedAccessoryInformationWithSetupID:(id)a0;
- (id)pairedHMDHAPAccessoryWithAccessoryServer:(id)a0;
- (id)pairedHMDHAPAccessoryWithAccessoryServerIdentifier:(id)a0;
- (void)populateUnassociatedCurrentAccessory;
- (void)probeReachabilityForBTLEAccessoryServersWithIdentifiers:(id)a0 forceScan:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)registerPairedAccessory:(id)a0 transports:(unsigned long long)a1 setupHash:(id)a2 delegate:(id)a3;
- (void)registerProgressHandler:(id /* block */)a0 unpairedAccessoryUUID:(id)a1;
- (void)removeAccessoryCacheForIdentifier:(id)a0;
- (void)removePairedAccessory:(id)a0;
- (void)removePairedAccessoryInfoWithIdentifier:(id)a0;
- (void)removePairingInformationForAccessoryServer:(id)a0;
- (void)removeUnassociatedAccessory:(id)a0;
- (void)removeUnassociatedAccessoryWithIdentifier:(id)a0;
- (void)removeUnassociatedMediaAccessory:(id)a0;
- (void)removeUnpairedHAPAccessory:(id)a0;
- (void)reprovisionAccessoryWithIdentifier:(id)a0 wiFiPSK:(id)a1 countryCode:(id)a2 withCompletion:(id /* block */)a3;
- (void)requestPermissionToAssociateWACAccessory:(id)a0 completionHandler:(id /* block */)a1;
- (void)resetUnassociatedCurrentAccessory;
- (void)resurrectAccessoryServer:(id)a0;
- (void)saveAccessoryCache:(id)a0 forIdentifier:(id)a1;
- (void)startDiscoveringAccessories;
- (void)startDiscoveringAccessoriesNeedingReprovisioning;
- (void)startDiscoveringAccessoriesWithLinkType:(long long)a0;
- (void)startDiscoveringMediaAccessories;
- (void)startDiscoveringPairedAccessories;
- (void)startDiscoveringPairedAccessoriesWithLinkType:(long long)a0;
- (void)stopDiscoveringAccessories;
- (void)stopDiscoveringAccessoriesWithLinkType:(long long)a0;
- (void)stopDiscoveringForUnpairedAccessoriesWithLinkType:(long long)a0;
- (BOOL)supportsCommissioningCertificateRetrievalForCurrentlyPairingAccessory;
- (BOOL)supportsCommissioningCertificateRetrievalForHomeUUID:(id)a0;
- (BOOL)supportsRemoteBrowsing;
- (void)tombstoneAccessoryServer:(id)a0;
- (id)unassociatedAccessoriesForClientRequest:(id)a0;
- (void)unassociatedWACAccessoryDidFinishAssociation:(id)a0 withError:(id)a1;
- (void)unassociatedWACAccessoryDidStartAssociation:(id)a0;
- (id)unpairedAccessoryForServer:(id)a0;
- (id)unpairedAccessoryWithServerIdentifier:(id)a0;
- (id)unpairedAccessoryWithUUID:(id)a0;
- (id)unpairedHAPAccessoryWithAccessoryDescription:(id)a0;
- (void)updateAlreadyPairingProgressForAccessoryServerIdentifier:(id)a0 progressHandler:(id /* block */)a1;
- (void)updatePairingWithProgress:(long long)a0 accessoryServer:(id)a1;
- (void)updateProgressForMappedErrors:(id)a0 accessoryServer:(id)a1 progressHandler:(id /* block */)a2;
- (void)updateRemoteAccessoryBrowsing:(BOOL)a0 whbScan:(BOOL)a1;
- (void)validateLinkTypes:(id)a0;
- (void)vendorModel:(id *)a0 vendorManufacturer:(id *)a1 accessoryInfo:(id)a2;

@end
