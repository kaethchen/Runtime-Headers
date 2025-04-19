@interface FinanceDaemon.WalletDeletionObserver : NSObject <LSApplicationWorkspaceObserverProtocol> {
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ applicationWorkspace;
    void /* unknown type, empty encoding */ deviceInfo;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)applicationsDidInstall:(id)a0;
- (void)applicationsDidUninstall:(id)a0;

@end
