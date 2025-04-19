@class NSLock, NSMutableArray, NSXPCConnection;
@protocol SUOSUExternalUpdateProviderDelegate;

@interface SUOSUExternalUpdateProvider : NSObject <SUOSUServiceClientProtocol>

@property (retain) NSXPCConnection *serviceConnection;
@property (retain, nonatomic) NSLock *serviceConnectionLock;
@property (retain) NSMutableArray *progressHandlers;
@property (weak) id<SUOSUExternalUpdateProviderDelegate> delegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)proxy;
- (id)_serviceConnection;
- (id)synchronousProxy;
- (void)startInstallingDoItLaterUpdates;
- (id)_filteredProductKeysFromProductKeys:(id)a0;
- (id)availableUpdatesFromDaemon;
- (void)mdmUpdateStatusWithCompletion:(id /* block */)a0;
- (void)performActionsDuringPostLogoutWithProductKeys:(id)a0 withOptions:(id)a1 withProgressBlock:(id /* block */)a2;
- (void)performExternalUpdateWithProductKeys:(id)a0 withOptions:(id)a1 withProgressCompletion:(id /* block */)a2;
- (void)postAndProceedWithAutoUpdateNotification:(id /* block */)a0;
- (void)postDDMNotificationForScheduledUpdate:(id)a0 updateVersion:(id)a1 ignoreDoNotDisturb:(BOOL)a2 companyName:(id)a3 options:(id)a4 withCompletion:(id /* block */)a5;
- (void)postDoItLaterInsufficientPowerNotificationWithError:(id)a0;
- (void)postDoItLaterOtherUsersLoggedInNotification;
- (void)postDoItLaterUpdatesFailedNotificationRestartRequired:(BOOL)a0 offerLater:(BOOL)a1;
- (void)postMDMRequestedInstallLaterNotificationWithOptions:(id)a0;
- (void)postMDMRequestedInstallNowNotificationWithOptions:(id)a0;
- (void)postRestartRequiredNotificationToAllLoggedInUsersWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)postSimulatedDoItLaterFailedNotification;
- (void)postSplatReadyNotificationWithOptions:(id)a0;
- (void)queueAllUpdatesForAutoInstallTonightWithReason:(unsigned long long)a0;
- (void)relaunchAnyQuitApps;
- (void)removeAllUpdateNotifications;
- (void)restartCountdownDownloadFinishedWithError:(id)a0;
- (void)restartCountdownDownloadProgress:(float)a0 status:(id)a1;
- (void)sendAvailableUpdates;
- (void)sendAvailableUpdates:(id)a0;
- (void)sendReadyToPerformUpdateNotification;
- (void)silentlyQuitApps:(id)a0 completionHandler:(id /* block */)a1;
- (void)startInstallingMDMMajorOSUpdateWithBundleId:(id)a0 orVersion:(id)a1;
- (void)startInstallingUpdateForProductMarketingVersion:(id)a0 withOptions:(id)a1;
- (void)startInstallingUpdatesForKeys:(id)a0 withOptions:(id)a1;
- (void)triggerSplatRevokedNotificationWithVersion:(id)a0 options:(id)a1 completion:(id /* block */)a2;

@end
