@interface FileProviderDaemon.FPFSSQLBackupEngine : NSObject {
    void /* unknown type, empty encoding */ userURL;
    void /* unknown type, empty encoding */ outputUserURL;
    void /* unknown type, empty encoding */ destinationDirectoryURL;
    void /* unknown type, empty encoding */ backupManifestURL;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithUserURL:(id)a0 outputUserURL:(id)a1;
- (void)backUpWithCompletionHandler:(id /* block */)a0;

@end
