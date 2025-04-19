@class NSXPCConnection, NSXPCInterface, NSHashTable, NSUUID, NSSet, NSMutableDictionary, NSUserActivity, NSArray, NSMutableSet, NSObject, NSPredicate, SMSystem_Client;
@protocol OS_dispatch_queue, SMDPScannerProtocol;

@interface SMSystemScanner_Client : NSObject <MigratableEventsListener>

@property (retain) NSMutableSet *observedSystems;
@property (retain) NSMutableDictionary *systemDict;
@property (retain) NSObject<OS_dispatch_queue> *systemDictQueue;
@property (retain) NSXPCInterface *daemonInterface;
@property (retain) NSXPCInterface *exportedInterface;
@property (retain) NSXPCConnection *daemonConnection;
@property (retain) SMSystem_Client *currentSystem;
@property unsigned long long scannerState;
@property (retain) NSHashTable *scannerClients;
@property (retain) NSHashTable *systemEventListeners;
@property BOOL hostingWirelessAP;
@property BOOL attemptingWirelessNetworkSwitch;
@property (retain) NSUserActivity *handoffActivity;
@property (retain) NSUUID *handoffPasscode;
@property BOOL currentlyLostConnectedSourceSystem;
@property (readonly) unsigned long long actualScannerState;
@property (readonly) NSSet *allSystems;
@property (readonly, weak) NSArray *displaySystems;
@property (retain) NSArray *systemSortDescriptors;
@property (retain) NSPredicate *displaySystemsFilter;
@property BOOL automaticallyAdvertiseHandoff;
@property (retain) id<SMDPScannerProtocol> daemonProxy;

+ (id)keyPathsForValuesAffectingAllSystems;
+ (id)keyPathsForValuesAffectingDisplaySystems;
+ (id)migratableEventsListenerInterface;
+ (id)nonWindowsSystemsOnlyPredicate;
+ (id)sharedScannerClient;
+ (id)windowsSystemsOnlyPredicate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)connectToDaemon;
- (void)notifyListenersOfRemovedSystem:(id)a0;
- (void)systemAppeared:(id)a0;
- (void)addNewSystem:(id)a0;
- (void)addNewSystemChangesListener:(id)a0;
- (void)addNonBonjourRemoteShare:(id)a0;
- (void)addScannerClient:(id)a0;
- (void)connectionErrorOccurred:(id)a0;
- (id)findSystemByIdentifier:(id)a0;
- (void)mount:(id)a0;
- (void)mount:(id)a0 withPassword:(id)a1;
- (void)notifyListenersOfChangedKey:(id)a0 onSystem:(id)a1;
- (void)notifyListenersOfLostCurrentSourceDiskStatus:(BOOL)a0;
- (void)notifyListenersOfNewSystem:(id)a0;
- (void)notifyListenersOfPromptForUnlockingCurrentLostSource:(id)a0;
- (id)prettyPrintAllSystems;
- (id)primaryIDForNewSystemCreatedWithMountPoint:(id)a0 daDiskID:(id)a1 remoteDiskID:(id)a2 volumeURL:(id)a3;
- (void)removeScannerClient:(id)a0;
- (void)removeSystemChangesListener:(id)a0;
- (void)requestUIFocusOnSystem:(id)a0;
- (void)setFinalSelectionForSystemWithPrimaryIdentifier:(id)a0;
- (void)startAdvertisingHandoffTargetWithIdentifier:(id)a0;
- (void)startObservingSystem:(id)a0;
- (void)stopAdvertisingHandoff;
- (void)stopObservingSystem:(id)a0;
- (void)systemChanged:(id)a0;
- (void)systemDisappeared:(id)a0;
- (void)unmount:(id)a0;
- (void)updateAllChildReferences;
- (void)updateScannerState;
- (id)xpcDictFromSystem:(id)a0 includeOneTimeData:(BOOL)a1;

@end
