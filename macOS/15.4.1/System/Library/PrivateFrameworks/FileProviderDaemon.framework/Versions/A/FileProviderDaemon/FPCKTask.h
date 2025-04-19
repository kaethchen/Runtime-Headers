@class NSObject;
@protocol OS_dispatch_queue;

@interface FPCKTask : NSObject {
    NSObject<OS_dispatch_queue> *workQueue;
}

+ (id)sharedManager;
+ (id)buildPauseResult:(BOOL)a0 semaphore:(id)a1;
+ (void)runFPCKForDomain:(id)a0 domainUserInfo:(id)a1 domainRootURL:(id)a2 databaseBackupPath:(id)a3 urls:(id)a4 volumeRole:(unsigned int)a5 options:(unsigned long long)a6 reason:(unsigned long long)a7 fpfs:(BOOL)a8 iCDPackageDetection:(BOOL)a9 shouldPause:(id /* block */)a10 sendDiagnostics:(id /* block */)a11 saveCheckpoint:(id /* block */)a12 isInvalidated:(id /* block */)a13 completionHandler:(id /* block */)a14;
+ (id)xpcServiceConnection;
+ (id)xpcServiceProxyWithConnection:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dumpDatabaseAt:(id)a0 fullDump:(BOOL)a1 writeTo:(id)a2 completionHandler:(id /* block */)a3;
- (void)_launchXPCServiceWithUpdateReceiver:(id)a0 proxy:(id)a1 completionHandler:(id /* block */)a2;
- (void)_prepareXPCService:(id)a0 domainUserInfo:(id)a1 domainRootURL:(id)a2 databaseBackupPath:(id)a3 urls:(id)a4 volumeRole:(unsigned int)a5 personaIdentifier:(id)a6 options:(unsigned long long)a7 reason:(unsigned long long)a8 fpfs:(BOOL)a9 iCDPackageDetection:(BOOL)a10 completionHandler:(id /* block */)a11;
- (unsigned long long)_resolveLaunchType:(unsigned long long)a0;
- (void)prepareFPCKRun:(id)a0 domainUserInfo:(id)a1 domainRootURL:(id)a2 databaseBackupPath:(id)a3 urls:(id)a4 volumeRole:(unsigned int)a5 personaIdentifier:(id)a6 options:(unsigned long long)a7 reason:(unsigned long long)a8 fpfs:(BOOL)a9 iCDPackageDetection:(BOOL)a10 launchType:(unsigned long long)a11 runOnWorkQueue:(BOOL)a12 completionHandler:(id /* block */)a13;
- (void)scheduleFPCKRun:(id)a0 domainUserInfo:(id)a1 domainRootURL:(id)a2 databaseBackupPath:(id)a3 urls:(id)a4 volumeRole:(unsigned int)a5 options:(unsigned long long)a6 reason:(unsigned long long)a7 fpfs:(BOOL)a8 iCDPackageDetection:(BOOL)a9 launchType:(unsigned long long)a10 updateReceiver:(id)a11 shouldPause:(id /* block */)a12 proxy:(id)a13 completionHandler:(id /* block */)a14;

@end
