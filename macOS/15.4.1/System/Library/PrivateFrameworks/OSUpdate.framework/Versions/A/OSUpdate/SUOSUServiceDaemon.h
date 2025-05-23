@class NSMutableDictionary, SUOSUServiceClientManager, SUOSUNotificationManagerController, SUOSUAuthenticationManager, NSDictionary, NSObject, SUOSUInstallTonightManager, SUOSUScheduler, SUOSUManagedServiceDaemon, NSString, NSXPCListener, NSArray, SUMacControllerOverrides, SUOSUMobileSoftwareUpdateController, SUOSULoginCredentialPolicyManager;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SUOSUServiceDaemon : NSObject <SUOSULaterDelegate, SUOSUServiceProtocol, SUOSUServiceClientProtocol, NSXPCListenerDelegate>

@property (retain) SUOSUScheduler *scheduler;
@property (retain) NSXPCListener *listener;
@property (retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain) NSObject<OS_dispatch_queue> *serviceQueue;
@property (retain) NSObject<OS_dispatch_queue> *nonBlockingStateQueue;
@property (retain) SUOSUNotificationManagerController *notificationManagerController;
@property (retain) SUOSUMobileSoftwareUpdateController *mobileSoftwareUpdateController;
@property (retain) NSArray *availableMobileSoftwareUpdates;
@property (retain) NSMutableDictionary *availableMDMMobileSoftwareDescriptorsMapping;
@property (retain) NSArray *descriptorsToApplyAtPostlogout;
@property (retain) SUMacControllerOverrides *overridesToApplyAtPostlogout;
@property (retain) SUOSUInstallTonightManager *installTonightManager;
@property (retain) NSArray *availableExternalUpdateInfos;
@property (retain) NSArray *externalUpdateKeysToApplyAtPostlogout;
@property (retain) SUOSULoginCredentialPolicyManager *loginCredentialPolicyManager;
@property (retain) SUOSUAuthenticationManager *authenticationManager;
@property (retain) SUOSUServiceClientManager *clientManager;
@property (retain) NSDictionary *mdmInstallOptions;
@property BOOL clientCanPerformExternalUpdate;
@property BOOL finishedPerformingExternalUpdatePostlogoutActions;
@property (readonly, nonatomic) NSMutableDictionary *mdmUpdateStatus;
@property (retain) NSObject<OS_dispatch_source> *appCloseNotificationTimerSource;
@property (retain) NSObject<OS_dispatch_source> *updatesAvailableNotificationTimerSource;
@property (retain) SUOSUManagedServiceDaemon *ddmServiceDaemon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)setLastNotifiedProgramInitiatedSplatRollbackVersion:(id)a0;
- (void)startListeningForConnections;
- (long long)_mobileKeyBagStashStateForUser:(unsigned int)a0;
- (void)invalidAndRemoveOldDeclarations;
- (void)startInstallingDoItLaterUpdates;
- (void)_currentMSUStateWithCompletion:(id /* block */)a0;
- (id)_updateFilteredAvailableMobileSoftwareDescriptors:(id)a0 mdmInitiated:(BOOL)a1;
- (void)initializeState;
- (void)removeGlobalSettingsDeclaration;
- (id)_activeNotificationManagerClient;
- (void)_addRecommendedUpdatesToPreferences;
- (void)_applyMobileSoftwareUpdateDescriptor:(id)a0 overrides:(id)a1 completion:(id /* block */)a2;
- (void)_cancelScheduledAppCloseNotification;
- (void)_downloadAndPrepareInProgressForUpdate:(id)a0 withCompletion:(id /* block */)a1;
- (void)_downloadAndPrepareInProgressForUpdate:(id)a0 withCompletionIncludingPriority:(id /* block */)a1;
- (void)_downloadAndPrepareMDMUpdateWithOptions:(id)a0;
- (void)_handleBackgroundSplatApply:(id)a0;
- (void)_laterDidNotOccur;
- (id)_mdmUserDeferralStatus;
- (BOOL)_nowExceedslastMDMUpdateLaterNotificationTimeInterval;
- (void)_postAppCloseNotificationIfAppropriate;
- (void)_queue_disarmLaterObserver;
- (BOOL)_recommendedMSUUpdatesChangedSinceLastScan;
- (void)_setMobileSoftwareUpdateDescriptorToInstallLater:(id)a0 withReason:(unsigned long long)a1 stashState:(long long)a2;
- (void)_simulatedLaterDidNotOccur;
- (id)_statusStringForProgress:(id)a0;
- (id)_updateFilteredAvailableMobileSoftwareDescriptors:(id)a0;
- (void)_wakeUpAndWaitForNotificationManagerClient;
- (void)activeNotificationManagerClientWithCompletion:(id /* block */)a0;
- (void)addDeclaration:(id)a0 completion:(id /* block */)a1;
- (void)allAvailableMDMMobileSoftwareUpdateDescriptorsWithCompletion:(id /* block */)a0;
- (void)allDeclarationsRemovingInvalidDeclarations:(BOOL)a0 completion:(id /* block */)a1;
- (void)appQuitCompleteForObserver:(id)a0;
- (void)appendTelemetryOverridesWithMetrics:(id)a0;
- (void)applyMobileSoftwareUpdate:(id)a0 completion:(id /* block */)a1;
- (void)applyMobileSoftwareUpdateWithCompletion:(id /* block */)a0;
- (void)armAppQuitObserverWithBundleIdentifiers:(id)a0;
- (void)armClientsWithMode:(unsigned long long)a0;
- (void)armLogoutObserverWithContext:(id)a0;
- (void)armObserverWithMode:(unsigned long long)a0;
- (void)armObserverWithMode:(unsigned long long)a0 options:(id)a1;
- (void)attemptToReclaimSpaceUsingCacheDeleteWithSpaceRequired:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)availableExternalUpdateInfos:(id /* block */)a0;
- (void)availableMobileSoftwareUpdateDescriptors:(id /* block */)a0;
- (void)baseOSDocumentationWithCompletion:(id /* block */)a0;
- (void)cacheDeletePurgeableSpaceWithCompletionHandler:(id /* block */)a0;
- (void)cancelDeclarationWithKey:(id)a0 completion:(id /* block */)a1;
- (void)cancelInstallTonight;
- (void)cancelMobileSoftwareUpdatesWithCompletion:(id /* block */)a0;
- (void)cancelPeriodicMDMUpdateActions;
- (void)checkInWithUUID:(id)a0;
- (void)clientExternalizedLocalAuthenticationContextwithCompletion:(id /* block */)a0;
- (void)commitStashForDescriptor:(id)a0 withCompletion:(id /* block */)a1;
- (void)commitStashOnlyForDescriptor:(id)a0 withCompletion:(id /* block */)a1;
- (void)createAndPersistStashForDescriptor:(id)a0 withCompletion:(id /* block */)a1;
- (void)ddmConflictsWithMDMCommandWithCompletion:(id /* block */)a0;
- (void)ddmDeclarationWithCompletion:(id /* block */)a0;
- (void)ddmDescriptorToUpdateWithCompletion:(id /* block */)a0;
- (void)ddmPastDuePaddedEnforcementDateWithCompletion:(id /* block */)a0;
- (void)disarmAppQuitObserver;
- (void)disarmDeclarationActivitySchedulerWithCompletion:(id /* block */)a0;
- (void)disarmLaterObserver;
- (void)disarmLogoutObserver;
- (void)doBackgroundActionsWithCompletion:(id /* block */)a0;
- (void)doPeriodicActions;
- (void)doPeriodicMDMActions;
- (void)downloadAndPrepareInProgressForUpdate:(id)a0 withCompletion:(id /* block */)a1;
- (void)downloadAndPrepareMobileSoftwareUpdateWithDescriptors:(id)a0 inBackground:(BOOL)a1 mdmInitiated:(BOOL)a2 completion:(id /* block */)a3;
- (void)estimateBytesReclaimedBySuspendingMobileAssetWithAdditionalBytesRequired:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)evaluateAndPostInstallTonightAppCloseNotification;
- (void)externalUpdateKeysToApplyAtLogoutWithCompletion:(id /* block */)a0;
- (void)finishedExternalUpdatePostlogoutActionsWithCompletion:(id /* block */)a0;
- (void)getCurrentLoginCredentialPolicyWithCompletion:(id /* block */)a0;
- (void)getDDMStatusWithKeys:(id)a0 completion:(id /* block */)a1;
- (void)getLaterStateWithCompletion:(id /* block */)a0;
- (void)getUpdateStatusWithCompletion:(id /* block */)a0;
- (void)globalSettingsDeclarationWithCompletion:(id /* block */)a0;
- (void)invokeNowIsLaterWithReply:(id /* block */)a0;
- (void)laterDidNotOccurForObserver:(id)a0;
- (void)mdmUpdateStatusWithCompletion:(id /* block */)a0;
- (void)mdmUserDeferralStatusWithCompletion:(id /* block */)a0;
- (void)mobileKeyBagStashStateForUser:(unsigned int)a0 completion:(id /* block */)a1;
- (void)mobileSoftwareUpdateAppliedForUpdate:(id)a0 withCompletion:(id /* block */)a1;
- (void)mobileSoftwareUpdateDescriptorsToApplyAfterLogoutWithCompletion:(id /* block */)a0;
- (void)mobileSoftwareUpdateDownloadStateForUpdate:(id)a0 withCompletion:(id /* block */)a1;
- (void)mobileSoftwareUpdateDownloadedAndPreparedForUpdate:(id)a0 withCompletion:(id /* block */)a1;
- (void)mobileSoftwareUpdateDownloadedAndPreparedForUpdateWithoutQueue:(id)a0 withCompletion:(id /* block */)a1;
- (void)mobileSoftwareUpdateToInstallLaterWithCompletion:(id /* block */)a0;
- (void)nowIsLaterForObserver:(id)a0 replyBlock:(id /* block */)a1;
- (void)performExternalUpdateWithProductKeys:(id)a0 withOptions:(id)a1 withProgressCompletion:(id /* block */)a2;
- (void)performMSUUpdateForProductKeys:(id)a0 orProductMarketingVersion:(id)a1 withOptions:(id)a2;
- (void)performSemiSplatForDescriptor:(id)a0 withCompletion:(id /* block */)a1;
- (void)performingSemiSplatWithCompletion:(id /* block */)a0;
- (void)postAndProceedWithAutoUpdateNotification:(id /* block */)a0;
- (void)postDDMNotificationForScheduledUpdate:(id)a0 updateVersion:(id)a1 ignoreDoNotDisturb:(BOOL)a2 companyName:(id)a3 options:(id)a4 withCompletion:(id /* block */)a5;
- (void)postDDMNotificationIfNecessary;
- (void)postDDMNotificationIfNecessaryWithCriteria:(id)a0;
- (void)postDDMNotificationToAllUsersForScheduledUpdate:(id)a0 updateVersion:(id)a1 ignoreDoNoDisturb:(BOOL)a2 companyName:(id)a3 options:(id)a4 completion:(id /* block */)a5;
- (void)postDoItLaterInsufficientPowerNotificationWithError:(id)a0;
- (void)postDoItLaterOtherUsersLoggedInNotification;
- (void)postDoItLaterUpdatesFailedNotificationRestartRequired:(BOOL)a0 offerLater:(BOOL)a1;
- (void)postMDMRequestedInstallLaterNotificationToAllLoggedInUsersWithOptions:(id)a0;
- (void)postMDMRequestedInstallLaterNotificationWithOptions:(id)a0;
- (void)postMDMRequestedInstallNowNotificationToAllLoggedInUsersWithOptions:(id)a0;
- (void)postMDMRequestedInstallNowNotificationWithOptions:(id)a0;
- (void)postRestartRequiredNotificationToAllLoggedInUsersWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)postRestartRequiredNotificationToAllLoggedInUsersWithOptions:(id)a0 withCompletion:(id /* block */)a1;
- (void)postSimulatedDoItLaterFailedNotification;
- (void)postSplatReadyNotificationToAllUsersWithOptions:(id)a0;
- (void)postSplatReadyNotificationWithOptions:(id)a0;
- (void)prepareRosettaUpdate;
- (void)queueAllUpdatesForAutoInstallTonightWithReason:(unsigned long long)a0;
- (void)queueExternalUpdateKeysToApplyAtLogout:(id)a0;
- (void)queueMobileSoftwareUpdateDescriptorToApplyAtLogout:(id)a0;
- (void)queueMobileSoftwareUpdateOverridesToApplyAtLogout:(id)a0;
- (void)quitApplicationsForAllUsers:(id)a0 withCompletion:(id /* block */)a1;
- (void)readyToPerformExternalUpdateWithCompletion:(id /* block */)a0;
- (void)refreshCachedLoginCredentialHarvestingMode;
- (void)relaunchAnyQuitApps;
- (void)relaunchQuitApplications;
- (void)removeAllUpdateNotifications;
- (void)reportExternalProgress:(id)a0;
- (void)requestMDMInstallWithProductKeys:(id)a0 options:(id)a1 withCompletion:(id /* block */)a2;
- (void)requestMDMInstallWithProductMarketingVersion:(id)a0 options:(id)a1 withCompletion:(id /* block */)a2;
- (void)requestMDMMajorOSDownloadAndUpdateWithBundleID:(id)a0 orVersion:(id)a1 withCompletion:(id /* block */)a2;
- (void)rescheduleDDMEnforcedDateTimeUpdate;
- (void)restartCountdownDownloadFinishedWithError:(id)a0;
- (void)restartCountdownDownloadProgress:(float)a0 status:(id)a1;
- (void)restrictMobileSoftwareUpdateToFullReplacements:(BOOL)a0;
- (void)rollbackSplatWithCompletion:(id /* block */)a0;
- (void)scanForMobileSoftwareUpdateDescriptorsWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)scheduleDDMNotifications;
- (void)scheduleEnforcedManagedUpdateWithVersion:(id)a0 forDate:(id)a1 withOptions:(id)a2;
- (void)schedulePeriodicMDMUpdateActions;
- (void)schedulePeriodicUpdateActions;
- (void)scheduleUpdatesAvailableBSDNotification;
- (void)setAvailableExternalUpdates:(id)a0;
- (void)setClientExternalizedLocalAuthenticationContext:(id)a0 userId:(id)a1 forPolicyMode:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)setContextUserID:(id)a0;
- (void)setExternalUpdateKeysToApplyAtLogout:(id)a0;
- (void)setExternalizedLocalAuthenticationContext:(id)a0;
- (void)setFinishedExternalUpdatePostlogoutActions:(BOOL)a0;
- (void)setGlobalSettings:(id)a0 withCompletion:(id /* block */)a1;
- (void)setIsReadyToPerformExternalUpdate:(BOOL)a0;
- (void)setMDMBootstrapTokenString:(id)a0;
- (void)setMobileSoftwareUpdateDescriptorToInstallLater:(id)a0 withReason:(unsigned long long)a1 userId:(unsigned int)a2;
- (BOOL)shouldDoPeriodicMDMActions;
- (void)silentlyQuitApps:(id)a0 completionHandler:(id /* block */)a1;
- (void)splatDocumentationWithCompletion:(id /* block */)a0;
- (void)startInstallingExternalUpdateWithProductKeys:(id)a0 withOptions:(id)a1;
- (void)startInstallingMDMMajorOSUpdateWithBundleId:(id)a0 orVersion:(id)a1;
- (void)startInstallingUpdateForProductMarketingVersion:(id)a0 withOptions:(id)a1;
- (void)startInstallingUpdatesForKeys:(id)a0 withOptions:(id)a1;
- (void)startPostLogoutActionsForExternalUpdateWithProductKeys:(id)a0 withOptions:(id)a1;
- (void)stashLoginCredentialsWithFLO:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)suspendMobileAssetToReclaimDiskSpaceWithAdditionalBytesRequired:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)triggerSplatRevokedNotificationWithVersion:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)triggerSplatRevokedNotificationWithVersion:(id)a0 options:(id)a1 withCompletion:(id /* block */)a2;
- (void)updateTelemetryOverridesWithMetrics:(id)a0;

@end
