@interface FileProviderDaemon.PeriodicFPCK : _TtCs12_SwiftObject <FPCKUpdateReceiving> {
    void /* unknown type, empty encoding */ providerDomainID;
    void /* unknown type, empty encoding */ domainUserInfo;
    void /* unknown type, empty encoding */ usingFPFS;
    void /* unknown type, empty encoding */ captureDB;
    void /* unknown type, empty encoding */ personaIdentfier;
    void /* unknown type, empty encoding */ reason;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ runnable;
    void /* unknown type, empty encoding */ launchMode;
    void /* unknown type, empty encoding */ shouldPause;
    void /* unknown type, empty encoding */ saveCheckpoint;
    void /* unknown type, empty encoding */ diagnosticsManager;
}

- (void)saveCheckpointWithReport:(id)a0;
- (void)sendDiagnosticsForItemIDs:(id)a0;
- (void)shouldPauseWithCompletion:(id /* block */)a0;

@end
