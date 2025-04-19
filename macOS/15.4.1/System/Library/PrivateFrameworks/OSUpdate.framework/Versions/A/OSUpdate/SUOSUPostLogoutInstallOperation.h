@class SUPowerAssertionManager, NSArray, BridgeOSSoftwareUpdateController, NSString, IASUnifiedProgressClient, NSObject;
@protocol OS_dispatch_source;

@interface SUOSUPostLogoutInstallOperation : NSObject

@property (readonly) BridgeOSSoftwareUpdateController *bridgeController;
@property (retain) NSArray *productKeys;
@property (retain) NSArray *externalProductKeys;
@property BOOL hasCriticalUpdates;
@property BOOL enableFirstLoginOptimization;
@property BOOL enableCreatingPreUpdateAPFSSnapshot;
@property (retain) SUPowerAssertionManager *powerAssertionManager;
@property BOOL shouldApplyMobileSoftwareUpdates;
@property BOOL shouldInstallLegacySoftwareUpdates;
@property (retain) IASUnifiedProgressClient *progressClient;
@property (retain) NSObject<OS_dispatch_source> *progressTimer;
@property BOOL installInProgress;
@property (retain) NSString *customStatusString;
@property BOOL enableBatteryPowerCheck;
@property BOOL enableStashing;
@property BOOL shouldShutDownWhenComplete;
@property BOOL cancelled;
@property (readonly) BOOL hasProductsToInstall;
@property BOOL opportunistic;
@property BOOL launchedDirectly;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_run;
- (id)_productKeysFromProducts:(id)a0;
- (BOOL)_install;
- (BOOL)_applyMobileSoftwareUpdates;
- (id)_asynchronousUpdateService;
- (id)_availableLegacyProducts;
- (BOOL)_bridgeOSUpdateIsPending;
- (BOOL)_bridgeOSUpdateIsPrepared;
- (int)_bridgeOSUpdateState;
- (void)_commitStashAndRebootAfterSuccessfulPreparation:(BOOL)a0;
- (BOOL)_configure;
- (void)_configureAndShowProgress;
- (void)_createPreUpdateAPFSSnapshot;
- (id)_externalUpdateKeysToApplyAtPostlogout;
- (id)_filteredUpdatesForLegacyProducts;
- (BOOL)_hasSufficientBatteryPower;
- (BOOL)_hasSufficientDiskSpace;
- (BOOL)_performExternalUpdatePostlogoutActions;
- (id)_productKeysToInstallAfterLogout;
- (void)_reportStarted;
- (BOOL)_shouldApplyMobileSoftwareUpdatesAtLogout;
- (id)_statusForProducts:(id)a0;
- (id)_synchronousUpdateService;
- (BOOL)_waitForClientToRespondToExternalUpdate;
- (BOOL)_waitForExternalClientToFinishPostlogoutActions;
- (BOOL)runAndRebootWhenFinished;
- (void)setLegacyPostLogoutPropertiesWithUpdates:(id)a0;

@end
