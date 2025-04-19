@class NSString, NSXPCConnection;

@interface SDBetaEnrollmentServiceProxy : NSObject <SDBetaEnrollmentClientInterface>

@property (retain) NSXPCConnection *daemonConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_SDErrorForDaemonClientErrorType;
- (void)betaEnrollmentProxyObjectWithCompletion:(id /* block */)a0;
- (BOOL)canCurrentDeviceEnrollInBetaProgram;
- (void)canFileFeedbackOnDevice:(id)a0 completion:(id /* block */)a1;
- (void)configureWithOfferProgramTokens:(id)a0 requireProgramToken:(id)a1 enrollmentPolicy:(long long)a2 error:(id *)a3;
- (void)deleteSeedingAppleAccountWithCompletion:(id /* block */)a0;
- (id)deviceAppleIDUsernameForCurrentDevice;
- (void)enrollDevice:(id)a0 inProgram:(id)a1 completion:(id /* block */)a2;
- (void)enrollInProgramWithToken:(id)a0 completion:(id /* block */)a1;
- (void)enrolledBetaProgramForDevice:(id)a0 completion:(id /* block */)a1;
- (void)getCurrentDevice:(id /* block */)a0;
- (id)getCurrentDeviceEnrolledBetaProgramSynchronously;
- (id)getCurrentDeviceSynchronously;
- (void)getDevicesForPlatforms:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)initializeDaemonConnection;
- (void)invalidateCacheWithCompletion:(id /* block */)a0;
- (BOOL)isCurrentDeviceUsingSeedingAppleID;
- (void)isDeviceEnrolledInBetaProgram:(id)a0 completion:(id /* block */)a1;
- (id)loadMDMConfigurationWithError:(id *)a0;
- (void)queryProgramsForSystemAccountsWithPlatforms:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)seedingAppleIDUsernameForCurrentDevice;
- (void)seedingAppleIDUsernameForCurrentDevice:(id /* block */)a0;
- (void)setAppleAccountIdentifierWithAlternateDSIDForCurrentDevice:(id)a0 completion:(id /* block */)a1;
- (id)synchronousDaemonRemoteObjectProxy;
- (id)synchronousDaemonRemoteObjectProxyWithError:(id *)a0;
- (void)unenrollDevice:(id)a0 completion:(id /* block */)a1;

@end
