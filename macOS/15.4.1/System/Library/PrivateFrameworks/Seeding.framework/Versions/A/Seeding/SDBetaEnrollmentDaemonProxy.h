@class NSString, NSXPCConnection;

@interface SDBetaEnrollmentDaemonProxy : NSObject <NSXPCListenerDelegate>

@property (retain) NSXPCConnection *daemonConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)remoteObjectProxy;
- (id)synchronousRemoteObjectProxy;
- (void)connectToDaemon;
- (void)saveMDMConfiguration:(id)a0 withError:(id *)a1;
- (void)addFBAHelpMenu:(id /* block */)a0;
- (BOOL)isPreReleaseInstallationAllowed;
- (void)addFBASymlink:(id /* block */)a0;
- (void)configureWithOfferProgramTokens:(id)a0 requireProgramToken:(id)a1 enrollmentPolicy:(long long)a2 error:(id *)a3;
- (id)fetchBetaEnrollmentTokensWithError:(id *)a0;
- (id)loadMDMConfigurationWithError:(id *)a0;
- (id)remoteObjectProxyWithCompletion:(id /* block */)a0;
- (void)removeBetaEnrollmentData;
- (void)removeFBAHelpMenu:(id /* block */)a0;
- (void)removeSeedEnrollmentCookie:(id /* block */)a0;
- (void)setupAssistant_enrollInProgramWithBetaEnrollmentToken:(id)a0 completion:(id /* block */)a1;
- (id)synchronousDaemonRemoteObjectProxyWithError:(id *)a0;

@end
