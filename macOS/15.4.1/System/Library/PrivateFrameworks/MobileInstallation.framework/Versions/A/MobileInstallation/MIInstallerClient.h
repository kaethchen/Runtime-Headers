@class NSObject, NSError, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface MIInstallerClient : NSObject <MobileInstallerDelegateProtocol> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _delegatesCompleteCondMutex;
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } _delegatesCompleteCond;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ appDictionaryEnumBlock;
@property (copy, nonatomic) id /* block */ releaseTerminationAssertBlock;
@property (nonatomic) BOOL delegatesComplete;
@property (retain, nonatomic) NSError *delegatesCompleteError;

+ (id)installerWithAppDictionaryEnumerator:(id /* block */)a0;
+ (id)installerWithProgressBlock:(id /* block */)a0;
+ (id)installerWithProgressBlock:(id /* block */)a0 releaseTerminationAssertionBlock:(id /* block */)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)setTestMode:(id *)a0;
- (void)_invalidateObject;
- (void)reportProgress:(id)a0;
- (id)_waitForPendingDelegateMessages;
- (void)allStagedUpdatesWithCompletion:(id /* block */)a0;
- (void)cancelUpdateForStagedIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)checkCapabilities:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (BOOL)clearTestFlags:(unsigned long long)a0 withError:(id *)a1;
- (void)clearUninstalledIdentifiers:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (void)delegateMessageDeliveryCompleteWithError:(id)a0;
- (void)dieForTesting;
- (BOOL)endTestMode:(id *)a0;
- (void)enumerateAppDictionary:(id)a0 error:(id)a1;
- (void)enumerateInstalledAppsWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)fetchInfoForAppWithBundleID:(id)a0 wrapperURL:(id)a1 completion:(id /* block */)a2;
- (void)fetchInfoForContainerizedAppWithBundleID:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)fetchInfoForFrameworkAtURL:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)finalizeStagedInstallForIdentifier:(id)a0 returningResultInfo:(BOOL)a1 completion:(id /* block */)a2;
- (void)getAppMetadataForApp:(id)a0 completion:(id /* block */)a1;
- (BOOL)getTestModeEnabled:(BOOL *)a0 outError:(id *)a1;
- (void)installParallelPlaceholderForStagedIdentifier:(id)a0 returningResultInfo:(BOOL)a1 completion:(id /* block */)a2;
- (void)installURL:(id)a0 identity:(id)a1 targetingDomain:(unsigned long long)a2 withOptions:(id)a3 returningResultInfo:(BOOL)a4 completion:(id /* block */)a5;
- (void)lookupUninstalledWithOptions:(id)a0 completion:(id /* block */)a1;
- (int)pidForTesting;
- (id)raiseException;
- (void)releaseTerminationAssertion;
- (BOOL)setEligibilityTestOverrides:(id)a0 withError:(id *)a1;
- (BOOL)setTestFlags:(unsigned long long)a0 withError:(id *)a1;
- (void)stageInstallURL:(id)a0 identity:(id)a1 targetingDomain:(unsigned long long)a2 withOptions:(id)a3 completion:(id /* block */)a4;
- (void)uninstallIdentifiers:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (void)uninstallIdentity:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (void)updatePlaceholderMetadataForApp:(id)a0 installType:(unsigned long long)a1 failureReason:(unsigned long long)a2 underlyingError:(id)a3 failureSource:(unsigned long long)a4 completion:(id /* block */)a5;
- (void)updateSinfForIXWithIdentifier:(id)a0 wrapperURL:(id)a1 sinfData:(id)a2 completion:(id /* block */)a3;
- (void)updateiTunesMetadataForIXWithIdentifier:(id)a0 wrapperURL:(id)a1 metadata:(id)a2 completion:(id /* block */)a3;

@end
