@class NSXPCListener, NSMutableDictionary, NSString, NSNumber;

@interface SDBetaEnrollmentService : NSObject <NSXPCListenerDelegate, SDBetaEnrollmentServiceInterface>

@property (retain) NSXPCListener *listener;
@property (retain) NSMutableDictionary *appConnections;
@property (retain) NSNumber *userIdentifier;
@property (nonatomic) int profileToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)start;
- (void)checkIn;
- (void)_stopListeningForProfileChanges;
- (id)_connectionForPid:(id)a0;
- (void)_releaseAppConnectionWithPid:(int)a0;
- (void)_startListeningForProfileChanges;
- (void)_storeAppConnection:(id)a0;
- (void)_verifyCurrentDevice;
- (void)canDeviceEnrollInBetaUpdates:(id)a0 completion:(id /* block */)a1;
- (void)canFileFeedbackOnDevice:(id)a0 completion:(id /* block */)a1;
- (void)configureWithOfferProgramTokens:(id)a0 requireProgramToken:(id)a1 enrollmentPolicy:(long long)a2 completion:(id /* block */)a3;
- (void)deleteSeedingAppleAccountForDevice:(id)a0 completion:(id /* block */)a1;
- (void)enrollDevice:(id)a0 inProgram:(id)a1 completion:(id /* block */)a2;
- (void)enrollInProgramWithToken:(id)a0 completion:(id /* block */)a1;
- (void)enrolledBetaProgramForDevice:(id)a0 completion:(id /* block */)a1;
- (void)getCurrentDevice:(id /* block */)a0;
- (void)getCurrentPrimaryAppleIDForDevice:(id)a0 completion:(id /* block */)a1;
- (void)getCurrentSeedingAppleIDForDevice:(id)a0 completion:(id /* block */)a1;
- (void)getDevicesForPlatforms:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)invalidateDaemonCacheWithCompletion:(id /* block */)a0;
- (void)isDeviceEnrolledInBetaProgram:(id)a0 completion:(id /* block */)a1;
- (void)isDeviceUsingSeedingAppleID:(id)a0 completion:(id /* block */)a1;
- (void)loadMDMConfigurationWithCompletion:(id /* block */)a0;
- (void)queryProgramsForSystemAccountsWithPlatforms:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)remoteObjectProxyForPID:(id)a0;
- (void)setAppleAccountIdentifierFromAlternateDSID:(id)a0 forDevice:(id)a1 completion:(id /* block */)a2;
- (void)unenrollDevice:(id)a0 completion:(id /* block */)a1;

@end
