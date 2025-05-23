@class NSMutableOrderedSet, NSString, HMFActivity, CBCentralManager, HAPAccessoryServerBrowserWiProxBTLE, NSMutableArray, NSObject, NSMapTable, CBConnectionsObserver;
@protocol OS_dispatch_queue, HAPAccessoryServerBrowserBTLEDelegate, OS_dispatch_source;

@interface HAPAccessoryServerBrowserBTLE : HAPAccessoryServerBrowser <CBCentralManagerDelegate, HAPAccessoryServerBrowserWiProxBTLEDelegate, HMFLogging> {
    NSMutableOrderedSet *_peripheralsWithConnectionRequests;
    NSMutableOrderedSet *_peripheralsPendingConnection;
}

@property (nonatomic) unsigned long long qosLimits;
@property (weak, nonatomic) id<HAPAccessoryServerBrowserBTLEDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) CBCentralManager *centralManager;
@property (retain, nonatomic) CBConnectionsObserver *connectionsObserver;
@property (retain, nonatomic) HAPAccessoryServerBrowserWiProxBTLE *hapWiProxBLEBrowser;
@property (retain, nonatomic) NSMapTable *discoveredPeripheralsWithAccessories;
@property (retain, nonatomic) NSMapTable *recentlySeenPairedPeripherals;
@property (retain, nonatomic) NSMutableArray *powerOnCentralManagerCompletions;
@property (copy, nonatomic) id /* block */ reachabilityCompletion;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *targetedScanTimer;
@property (retain, nonatomic) HMFActivity *targetedScanActivity;
@property (retain, nonatomic) NSMutableArray *targetedScanAccessoryIdentifiers;
@property (retain, nonatomic) NSMapTable *identifiersWithReachabilityScanTuples;
@property long long peripheralDisconnectionTimeout;
@property (retain) NSMapTable *peripheralDisconnectionMonitorMap;
@property (nonatomic) long long scanState;
@property (readonly, nonatomic, getter=isPerformingGeneralScan) BOOL performingGeneralScan;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (void)centralManager:(id)a0 didConnectPeripheral:(id)a1;
- (void)centralManager:(id)a0 didDisconnectPeripheral:(id)a1 error:(id)a2;
- (void)centralManager:(id)a0 didDiscoverPeripheral:(id)a1 advertisementData:(id)a2 RSSI:(id)a3;
- (void)centralManager:(id)a0 didFailToConnectPeripheral:(id)a1 error:(id)a2;
- (void)centralManagerDidUpdateState:(id)a0;
- (long long)linkType;
- (void)pauseScans;
- (id)logIdentifier;
- (void)configureAccessoryWithIdentifier:(id)a0 trackState:(BOOL)a1 connectionPriority:(unsigned long long)a2;
- (id)hapCharacteristicsForEncryptedPayload:(id)a0 identifier:(id)a1 shouldConnect:(BOOL *)a2;
- (void)stopDiscoveringAccessoryServers;
- (void)_addToActiveConnections:(id)a0;
- (void)_addToPendingConnections:(id)a0;
- (id)_bleAccessoryServerTupleForIdentifier:(id)a0;
- (id)_blePeripheralForAccessoryServerIdentifier:(id)a0;
- (id)_blePeripheralForCBPeripheral:(id)a0;
- (id)_cachedCharacteristicForInstanceID:(id)a0 identifier:(id)a1;
- (void)_callPowerOnCompletionsWithError:(id)a0;
- (BOOL)_canStartScan;
- (id)_cbPeripheralForHAPBLEPeripheral:(id)a0 routeMode:(unsigned char *)a1;
- (id)_cbPeripheralForPeripheralUUID:(id)a0 stableIdentifier:(id)a1 routeMode:(unsigned char *)a2;
- (void)_connectHAPPeripheralWhenAllowed:(id)a0;
- (void)_connectPendingConnections;
- (void)_createHAPAccessoryAndNotifyDelegateWithPeripheral:(id)a0 name:(id)a1 pairingUsername:(id)a2 statusFlags:(id)a3 stateNumber:(id)a4 stateChanged:(BOOL)a5 connectReason:(unsigned char)a6 configNumber:(id)a7 category:(id)a8 connectionIdleTime:(unsigned char)a9 format:(unsigned long long)a10 setupHash:(id)a11 encryptedPayload:(id)a12 whbStableIdentifier:(id)a13;
- (BOOL)_delegateRespondsToSelector:(SEL)a0;
- (void)_didDiscoverPeripheral:(id)a0 accessoryName:(id)a1 pairingIdentifier:(id)a2 format:(unsigned long long)a3 statusFlags:(id)a4 stateNumber:(id)a5 category:(id)a6 configNumber:(id)a7 setupHash:(id)a8 encryptedPayload:(id)a9 whbStableIdentifier:(id)a10;
- (void)_disconnectFromHAPBLEPeripheral:(id)a0 cbPeripheral:(id)a1;
- (void)_discoverAccessoryServerWithIdentifier:(id)a0;
- (id)_discoveredAccessoryServerTupleForBLEPeripheral:(id)a0 shouldMerge:(BOOL)a1;
- (void)_forgetPairedAccessoryWithIdentifier:(id)a0;
- (void)_handleTargetedScanTimeout;
- (BOOL)_hasPairedAccessoriesOfType:(unsigned long long)a0;
- (BOOL)_hasRecentlySeenAccessoriesWithIdentifiers:(id)a0;
- (void)_invalidTargetedScanActivity;
- (void)_matchAccessoryServerWithSetupID:(id)a0 serverIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)_monitorDisconnectionOfHAPPeripheral:(id)a0 peripheral:(id)a1;
- (void)_notifyDelegatesOfRemovedAccessoryServer:(id)a0 error:(id)a1;
- (unsigned long long)_parseAdvertisementData:(id)a0 forPeripheral:(id)a1 name:(id *)a2 pairingUsername:(id *)a3 statusFlags:(id *)a4 stateNumber:(id *)a5 category:(id *)a6 configNumber:(id *)a7 setupHash:(id *)a8;
- (void)_performTargetedScanForAccessoryWithIdentifier:(id)a0;
- (void)_performTimedConnectionRequestForIdentifier:(id)a0;
- (void)_performTimedScanForIdentifiers:(id)a0 forceScan:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)_powerOnCentralManagerWithCompletion:(id /* block */)a0;
- (void)_probeReachabilityForAccessoryServersWithIdentifiers:(id)a0 forceScan:(BOOL)a1 withCompletion:(id /* block */)a2;
- (id)_recentlySeenPairedPeripheralTupleWithPeripheral:(id)a0;
- (void)_removeDiscoveredPeripheralsWithIdentifier:(id)a0;
- (void)_removeFromActiveConnections:(id)a0;
- (void)_removeFromPendingConnections:(id)a0;
- (void)_removeIdentifiersForReachabilityScan;
- (void)_reportReachabilityForAccessoryWithIdentifier:(id)a0;
- (BOOL)_shouldCreateHAPAccessoryServerWithIdentifier:(id)a0 statusFlags:(id)a1 stateNumber:(id)a2 category:(id)a3 configNumber:(id)a4 name:(id)a5 forPeripheral:(id)a6 advertisementFormat:(unsigned long long)a7 setupHash:(id)a8 stateChanged:(BOOL *)a9 connectReason:(unsigned char *)a10;
- (void)_startBrowsingForLegacyHAPBTLE100Accessories;
- (void)_startDiscoveringAccessoryServers;
- (void)_startScanningForReachability:(id)a0;
- (void)_stopActiveScanWithForce:(BOOL)a0;
- (void)_stopMonitorDisconnectionOfCBPeripheral:(id)a0;
- (void)_updateTargetedScanTimer;
- (void)accessoryServerBrowserBTLE:(id)a0 didDiscoverHAPPeripheral:(id)a1;
- (id)cachedAccessoryForIdentifier:(id)a0;
- (void)configureBTLEQoSLimits:(unsigned long long)a0;
- (void)connectToBTLEAccessoryServer:(id)a0;
- (void)connectedHAPPeripheral:(id)a0;
- (void)deRegisterAccessoryWithIdentifier:(id)a0;
- (void)disconnectFromBTLEAccessoryServer:(id)a0;
- (void)disconnectedHAPPeripheral:(id)a0 error:(id)a1;
- (void)discoverAccessoryServerWithIdentifier:(id)a0;
- (void)failedToConnectHAPPeripheral:(id)a0 error:(id)a1;
- (void)markNotifyingCharacteristicUpdatedForIdentifier:(id)a0;
- (void)matchAccessoryServerWithSetupID:(id)a0 serverIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (id)peripheralsPendingConnection;
- (id)peripheralsWithConnectionRequests;
- (void)probeReachabilityForAccessoryServersWithIdentifiers:(id)a0 forceScan:(BOOL)a1 withCompletion:(id /* block */)a2;
- (BOOL)remoteBrowsingAndScanEnabled;
- (BOOL)remoteBrowsingEnabled;
- (void)removeCachedAccessoryWithIdentifier:(id)a0;
- (void)resetLastSeenForAccessoryServersWithIdentifiers:(id)a0;
- (void)resetPairedAccessories;
- (id)retrieveCBPeripheralWithUUID:(id)a0 blePeripheral:(id)a1;
- (void)retrieveCurrentStateForIdentifier:(id)a0 stateNumber:(id *)a1 isReachable:(BOOL *)a2 linkQuality:(unsigned long long *)a3 lastSeen:(id *)a4;
- (void)saveCacheToDisk:(id)a0;
- (void)setConnectionLatency:(long long)a0 forPeripheral:(id)a1;
- (void)setPerformingGeneralScan:(BOOL)a0;
- (void)setReachabilityCompletionHandler:(id /* block */)a0;
- (void)startDiscoveringAccessoryServers;
- (void)stopTrackingBTLEAccessoriesWithIdentifiers:(id)a0;
- (void)updateBroadcastKeyForIdentifier:(id)a0 key:(id)a1 keyUpdatedStateNumber:(id)a2 keyUpdatedTime:(double)a3;
- (void)updateCachedStateForIdentifier:(id)a0 stateNumber:(id)a1;
- (void)updateRemoteBrowsing:(BOOL)a0 shouldScan:(BOOL)a1;
- (void)updateScanInBackground:(BOOL)a0;
- (void)updateStateForIdentifier:(id)a0 stateNumber:(id)a1;

@end
