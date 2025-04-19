@class SMSystem_Client, NSString, NSXPCConnection, NSXPCInterface, NSImage, NSObject;
@protocol MigrationProgressEventsListener, SMDProgressProtocol;

@interface SMProgress_Client : NSObject <MigrationProgressEventsListener, SMSystemScannerClient, SMSystemScannerClientChangesProtocol>

@property (retain) NSXPCInterface *daemonInterface;
@property (retain) NSXPCInterface *exportedInterface;
@property (retain) NSXPCConnection *daemonConnection;
@property (retain) id<SMDProgressProtocol> daemonProxy;
@property (retain) SMSystem_Client *sourceSystem;
@property (retain) id sourceSystemID;
@property unsigned long long requestedClientScannerState;
@property BOOL toAnotherMac;
@property (retain) id observationContext;
@property BOOL hostingWirelessAP;
@property BOOL connectedToWirelessAP;
@property BOOL stoppedObserving;
@property (retain) NSString *currentSystemName;
@property (retain) NSImage *currentSystemDisplayIcon;
@property (weak) NSObject<MigrationProgressEventsListener> *delegate;
@property (readonly) NSString *fasterInterfaceRecommendation;
@property (readonly) unsigned long long effectiveConnectionMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)progressEventsListenerInterface;
+ (id)keyPathsForValuesAffectingEffectiveConnectionMethod;
+ (id)keyPathsForValuesAffectingFasterInterfaceRecommendation;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)stopObserving;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)tearDown;
- (void)connectToDaemon;
- (void)cancelCurrentRequest;
- (void)acknowledgeCompletedRequest;
- (void)associatedWithWirelessNetwork:(BOOL)a0;
- (void)attemptingWirelessNetworkSwitch:(BOOL)a0 manual:(BOOL)a1;
- (void)cleanupAnyZombieTimeMachineDirectories;
- (BOOL)copiedUsers;
- (void)currentEngineState:(unsigned long long *)a0 requestType:(unsigned long long *)a1 andRequestState:(unsigned long long *)a2;
- (id)currentIncompatibleApps;
- (void)engineDidBecomeCancellable;
- (void)engineMinutesRemaining:(id)a0 transferRate:(id)a1;
- (void)enginePercentDone:(id)a0;
- (void)engineProcessingText:(id)a0;
- (void)engineProgressUpdate:(id)a0;
- (void)engineSetToAnotherMac:(BOOL)a0;
- (void)engineStartedWithRequestUUID:(id)a0 migrationType:(unsigned long long)a1;
- (void)engineStateChanged:(unsigned long long)a0;
- (void)engineStatus:(id)a0 arguments:(id)a1;
- (void)engineWillBecomeNonCancellable;
- (void)getAllEstablishedConnections:(id *)a0;
- (void)getAllPossibleConnections:(id *)a0;
- (BOOL)hasIncompatibleApps;
- (BOOL)isCombinedSoftwareUpdateAndMigration;
- (BOOL)isEngineDoneWithRequestState:(unsigned long long *)a0 withErrorsAndWarnings:(id *)a1;
- (void)migrationRequestCompletedState:(unsigned long long)a0 advancingTo:(unsigned long long)a1 withErrorsAndWarnings:(id)a2;
- (void)networkInterfacesAvailable:(id *)a0 currentInterface:(unsigned long long *)a1;
- (void)sourceMacInterfaceTypeChanged:(id)a0 type:(unsigned long long)a1 appropriateIcon:(unsigned long long)a2;
- (void)systemScannerAddedSystem:(id)a0;
- (void)systemScannerRemovedSystem:(id)a0;
- (void)systemScannerSystemChanged:(id)a0 onSystem:(id)a1;
- (void)tryToObtainSourceSystem;
- (void)userDeclinedSoftAP;
- (void)wirelessAccessPointCreated:(id)a0 password:(id)a1;
- (void)wirelessAccessPointDestroyed;

@end
