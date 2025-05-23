@class NSHashTable, NSString, SMSystem_Daemon, NSSet, NSMutableDictionary, NSMutableSet, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SMSystemScanner : NSObject <SKManagerListener>

@property (retain) NSMutableDictionary *localSystems;
@property (retain) NSObject<OS_dispatch_queue> *localSystemsListQueue;
@property (retain) NSMutableArray *discoveryPlugins;
@property (retain) NSHashTable *systemEventListeners;
@property (retain) SMSystem_Daemon *currentSystem;
@property (retain) NSMutableDictionary *lastKnownFinalSelectedSourceDiskDetails;
@property BOOL mustRemovelastKnownFinalTMSelectedSourceDisk;
@property unsigned long long scannerState;
@property (retain) NSHashTable *scannerClients;
@property (retain) NSObject<OS_dispatch_queue> *scannerQueue;
@property (retain) NSObject<OS_dispatch_queue> *scanningDisk;
@property (retain) NSMutableDictionary *availabilityNotifications;
@property (retain) NSMutableSet *observedSystems;
@property (readonly) NSSet *allSystems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedScanner;
+ (id)keyPathsForValuesAffectingAllSystems;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)startScanning;
- (void)stopScanning;
- (void)disksAppeared:(id)a0;
- (void)disksChanged:(id)a0;
- (void)disksDisappeared:(id)a0;
- (id)findSystemByLongTermIdentifier:(id)a0;
- (void)notifyListenersOfRemovedSystem:(id)a0;
- (void)systemAppeared:(id)a0;
- (void)addArchiveAndInstallSystems:(id)a0;
- (void)addNewSystem:(id)a0;
- (BOOL)addNewSystem:(id)a0 replaceIfKnown:(BOOL)a1;
- (void)addNewSystemChangesListener:(id)a0;
- (void)addScannerClient:(id)a0;
- (void)askListenersToSelectSystem:(id)a0;
- (void)changeScanningStateFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (id)findSystemByIdentifier:(id)a0;
- (id)findSystemByURL:(id)a0;
- (id)getLostGrandParentClassName;
- (id)getLostGrandParentLTID;
- (id)getLostGreatGrandParentLTID;
- (id)getLostSourceClassName;
- (id)getLostSourceLTID;
- (id)getLostSourceParentClassName;
- (id)getLostSourceParentExLTID;
- (id)getLostSourceParentLTID;
- (id)getLostSourceParentMountPoint;
- (BOOL)isDiskInSameVolumeGroupAsCurrentSystem:(id)a0;
- (BOOL)isLostSourceLTIDSameAs:(id)a0;
- (BOOL)isLostSourceParentATMSparseBundleThatMatches:(id)a0;
- (BOOL)isLostSourceParentExSameAs:(id)a0;
- (BOOL)isLostSourceParentSameAs:(id)a0;
- (BOOL)isLostSourceSameAs:(id)a0;
- (BOOL)isLostSystemGrandParentSameAs:(id)a0;
- (BOOL)isLostSystemGreatGrandParentSameAs:(id)a0;
- (BOOL)isLostSystemParentSameAs:(id)a0;
- (BOOL)isSourceLost;
- (id)listAndQueueForSystem:(id)a0;
- (void)markLostForLastKnownFinalSelectedSourceDiskDetails:(BOOL)a0 forSystem:(id)a1 wasRegained:(BOOL)a2;
- (id)matchSMSystem:(id)a0;
- (BOOL)mountDiskIfNeeded:(id)a0;
- (void)notifyListenersOfChange:(id)a0 onSystem:(id)a1;
- (void)notifyListenersOfImmediateRemovals:(id)a0;
- (void)notifyListenersOfNewSystem:(id)a0;
- (void)notifyWhenSystemIsAvailable:(id)a0 callbackBlock:(id /* block */)a1;
- (void)performFinalCleanup;
- (BOOL)registerAlreadyMountedBackups:(id)a0;
- (void)registerDiscoveryPlugin:(id)a0;
- (id)registeredPluginOfType:(Class)a0;
- (void)removeAllSystems;
- (void)removeAllSystemsFromList:(id)a0 onQueue:(id)a1;
- (void)removeScannerClient:(id)a0;
- (void)removeSystem:(id)a0;
- (void)removeSystem:(id)a0 lockQueue:(BOOL)a1;
- (void)removeSystemChangesListener:(id)a0;
- (void)removeSystemWithPrimaryIdentifier:(id)a0 withSystemList:(id)a1;
- (void)scanDisk:(id)a0;
- (void)setFinalSelectionForSystemWithPrimaryIdentifier:(id)a0;
- (void)startObservingSystem:(id)a0;
- (void)startScannersFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (void)stopObservingSystem:(id)a0;
- (void)stopScannersFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (id)systemListsAndQueues;
- (void)updateLostSourceParentDetails:(id)a0;
- (void)updateScannerState;

@end
