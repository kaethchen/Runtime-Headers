@class CKUpdateControllerClient, NSMutableDictionary;

@interface CKUpdateController : CKServiceInterface

@property BOOL shouldNotAttemptInstallationAfterFailureDialog;
@property (retain, nonatomic) NSMutableDictionary *availableUpdatesObservers;
@property (retain, nonatomic) NSMutableDictionary *updateScanObservers;
@property (retain, nonatomic) NSMutableDictionary *updateProgressObservers;
@property (retain, nonatomic) CKUpdateControllerClient *sharedObserver;
@property (copy) id /* block */ dialogHandler;

+ (id)sharedUpdateController;

- (id)init;
- (void).cxx_destruct;
- (void)connectionWasInterrupted;
- (id)availableUpdates;
- (id)initWithStoreClient:(id)a0;
- (void)removeAvailableUpdatesObserver:(id)a0;
- (void)_checkForBookUpdatesWithCompletionHandler:(id /* block */)a0;
- (BOOL)_otherUsersAreLoggedIn;
- (id)addAvailableUpdatesObserverWithBlock:(id /* block */)a0;
- (id)appUpdatesToBeInstalledLater;
- (id)availableUpdateWithItemIdentifier:(unsigned long long)a0;
- (unsigned long long)availableUpdatesBadgeCount;
- (void)checkForUpdatesWithUserHasSeenUpdates:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)incompatibleUpdates;
- (void)installAllAvailableUpdates;
- (BOOL)isAutoUpdatedEnabled;
- (id)observeOSUpdateProgressWithProgressHandler:(id /* block */)a0;
- (id)observeOSUpdateScansWithProgressHandler:(id /* block */)a0;
- (BOOL)osUpdateScanInProgress;
- (void)removeUpdateFromInstallLaterWithBundleID:(id)a0;
- (void)startAppUpdates:(id)a0 andOSUpdates:(id)a1 withDelegate:(id)a2 completionHandler:(id /* block */)a3;
- (void)stopObservingOSUpdateProgressWithCallback:(id)a0;
- (void)stopObservingOSUpdateScansWithCallback:(id)a0;

@end
