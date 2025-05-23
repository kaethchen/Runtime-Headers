@class NSString, NSMutableDictionary, NSXPCConnection;
@protocol ProximitySetupConnectionHandler, MBAppConnectionProtocol;

@interface MBSAConnection : NSObject <MBSAProtocol, MBAppConnectionProtocol>

@property (retain) NSXPCConnection *connection;
@property (retain) NSMutableDictionary *progressBlocks;
@property (weak) id<MBAppConnectionProtocol> hostingApp;
@property (weak) id<ProximitySetupConnectionHandler> proximityHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedConnection;

- (id)init;
- (void).cxx_destruct;
- (void)establishConnection:(id /* block */)a0;
- (id)connectionWithErrorHandler:(id /* block */)a0;
- (void)readInitialSwitchedServerState:(id /* block */)a0;
- (void)activateProximityServerWithCompletion:(id /* block */)a0;
- (void)buddyUserIsLoggedIn:(id /* block */)a0;
- (void)captureSysdiagnoseOnSide:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)clearForceDeferredMandatoryUpdateDebugFlag;
- (void)createIAUserWithInfo:(id)a0 completionBlock:(id /* block */)a1;
- (void)createTeslaUsersWithInfo:(id)a0 prepareFirstAdminForResume:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void)createUserWithInfo:(id)a0 completionBlock:(id /* block */)a1;
- (void)enrollInBetaProgram:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)establishMacBuddyUserWithPrimaryType:(unsigned long long)a0 secondaryType:(unsigned long long)a1 additionalInfo:(id)a2 fromUID:(unsigned int)a3 withCompletionBlock:(id /* block */)a4;
- (void)exitBuddyApp:(id /* block */)a0;
- (void)facelessConfigureFromInstallerCookie:(id /* block */)a0;
- (void)fixUpSeedingSettingsPostMigration:(id /* block */)a0;
- (void)fmmIsEnabled:(id /* block */)a0;
- (void)getBuddyPassword:(id /* block */)a0;
- (void)getBuddyUser:(id /* block */)a0;
- (void)getBuddyWindowRepresentation:(id /* block */)a0;
- (void)getBuddyWindowRepresentationFromApp:(id /* block */)a0;
- (void)getFacelessConfigurationDictionary:(id /* block */)a0;
- (void)getMAAdminCredentials:(id /* block */)a0;
- (void)getProgressPercentForInProgressSysdiagnoseCapture:(id /* block */)a0;
- (void)getResumeBuddyCookieAccentColor:(id /* block */)a0;
- (void)getResumeBuddyCookieReason:(id /* block */)a0;
- (void)invalidateProximitySessionWithCompletion:(id /* block */)a0;
- (void)overrideSASInformation:(id)a0;
- (void)passwordPolicyWithCompletion:(id /* block */)a0;
- (void)postMacBuddyTasks:(id /* block */)a0;
- (void)preMacBuddyTasks:(id /* block */)a0;
- (void)prepareForAppleAccountSignInWithCompletion:(id /* block */)a0;
- (void)preserveAnalyticsData:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)progressUpdate:(float)a0 status:(id)a1 forUUID:(id)a2;
- (void)proximityDisplayCode:(id)a0;
- (void)proximityPINCodeTypeChanged:(int)a0;
- (void)proximitySessionLost;
- (void)proximitySessionReady:(id)a0;
- (void)removeBuddyUserHome:(id /* block */)a0;
- (void)removeHardwareWarrantyCookie:(id /* block */)a0;
- (void)removeIncompatibleApplicationDataFileAtRoot:(id)a0 reply:(id /* block */)a1;
- (void)removeInstallUserAndPlist;
- (void)removeLanguageChooserCookie:(id /* block */)a0;
- (void)removeMigrationCookie:(id /* block */)a0;
- (void)removeNeedsPostMigrationAppStoreCookie:(id /* block */)a0;
- (void)removeResumeBuddyCookie:(id /* block */)a0;
- (void)removeTOSRequiredCookie:(id /* block */)a0;
- (void)restart:(id /* block */)a0;
- (void)retrieveAnalyticsDataWithCompletionBlock:(id /* block */)a0;
- (void)retrieveMessageSessionWithCompletion:(id /* block */)a0;
- (void)saveDocumentationData:(id)a0 withLocalizedName:(id)a1 forLocale:(id)a2 toFileNamed:(id)a3 completionBlock:(id /* block */)a4;
- (void)setAutoTimeZoneEnabled:(id /* block */)a0;
- (void)setDekotaComputerName;
- (void)setDiagnosticsCookie:(id /* block */)a0;
- (void)setDidRunFLOCookie:(id /* block */)a0;
- (void)setHardwareWarrantyCookie:(id /* block */)a0;
- (void)setMacBuddyDoneCookie:(id /* block */)a0;
- (void)setMigrationCookie:(id /* block */)a0;
- (void)setNeedsPostMigrationAppStoreCookie:(id /* block */)a0;
- (void)setOSVersioniCloudCreatedForUser:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)setPasswordPolicy:(long long)a0 withCompletion:(id /* block */)a1;
- (void)setPasswordPolicyDictionary:(id)a0 withCompletion:(id /* block */)a1;
- (void)setResumeBuddyAccentColor:(long long)a0 withCompletionBlock:(id /* block */)a1;
- (void)setResumeBuddyCookieForReason:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)setSendDiagnosticsToApple:(BOOL)a0 sendThirdPartyDiagnostics:(BOOL)a1 withCompletionBlock:(id /* block */)a2;
- (void)setTOSRequiredCookie:(id /* block */)a0;
- (void)setTestingModeEnablement:(BOOL)a0;
- (void)setTimeServer:(id /* block */)a0;
- (void)setupiCloudPasswordResetWithCompletion:(id /* block */)a0;
- (void)shutdown:(id /* block */)a0;
- (void)switchServerOfType:(id)a0 toEnvironment:(id)a1 withCompletionBlock:(id /* block */)a2;
- (void)switchToBuddySession:(id /* block */)a0;
- (void)tellBuddyAppToQuit:(id /* block */)a0;
- (void)terminateBuddySessionTransitioningToUID:(unsigned int)a0 withCompletionBlock:(id /* block */)a1;
- (void)writeMachineDefaults:(id)a0 toApplicationID:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)writePreviousSystemCleanupService:(id /* block */)a0;

@end
