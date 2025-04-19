@interface SMDProgress_XPCClientConnection : SMDXPCClientConnection <SMDProgressProtocol, MigrationProgressEventsListener>

+ (id)daemonProtocolInterface;
+ (id)daemonProtocolInterfaceInstance;

- (void)dealloc;
- (id)init;
- (void)start;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)cancelCurrentRequest;
- (void)acknowledgeCompletedRequest;
- (void)associatedWithWirelessNetwork:(BOOL)a0;
- (void)attemptingWirelessNetworkSwitch:(BOOL)a0 manual:(BOOL)a1;
- (void)cleanupAnyZombieTimeMachineDirectories;
- (void)copiedUsers:(id /* block */)a0;
- (void)currentIncompatibleApps:(id /* block */)a0;
- (void)currentMigrationState:(id /* block */)a0;
- (void)engineDidBecomeCancellable;
- (void)engineMinutesRemaining:(id)a0 transferRate:(id)a1;
- (void)enginePercentDone:(id)a0;
- (void)engineProcessingText:(id)a0;
- (void)engineProgressUpdate:(id)a0;
- (void)engineStartedWithRequestUUID:(id)a0 migrationType:(unsigned long long)a1;
- (void)engineStatus:(id)a0 arguments:(id)a1;
- (void)engineWillBecomeNonCancellable;
- (void)getAllEstablishedConnections:(id /* block */)a0;
- (void)getAllPossibleConnections:(id /* block */)a0;
- (void)isCombinedSoftwareUpdateAndMigration:(id /* block */)a0;
- (void)isEngineDoneWithRequestReplyBlock:(id /* block */)a0;
- (void)migrationRequestCompletedState:(unsigned long long)a0 advancingTo:(unsigned long long)a1 withErrorsAndWarnings:(id)a2;
- (void)networkInterfacesAvailable:(id /* block */)a0;
- (void)sourceMacInterfaceTypeChanged:(id)a0 type:(unsigned long long)a1 appropriateIcon:(unsigned long long)a2;
- (void)sourceSystemForCurrentMigration:(id /* block */)a0;
- (void)userDeclinedSoftAP;
- (void)wirelessAccessPointCreated:(id)a0 password:(id)a1;
- (void)wirelessAccessPointDestroyed;

@end
