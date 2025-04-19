@interface FileProviderDaemon.FPFSSQLRestoreEngine : NSObject {
    void /* unknown type, empty encoding */ userURL;
    void /* unknown type, empty encoding */ fpDatabaseURLs;
    void /* unknown type, empty encoding */ backupBuild;
    void /* unknown type, empty encoding */ restoreType;
    void /* unknown type, empty encoding */ restoreTimestampFilePath;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithUserURL:(id)a0 backupBuild:(id)a1 restoreType:(id)a2;
- (void)restorePurgenciesAndResidencyReasonsWithCompletionHandler:(id /* block */)a0;
- (void)restoreWithCleanupOnSuccess:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
