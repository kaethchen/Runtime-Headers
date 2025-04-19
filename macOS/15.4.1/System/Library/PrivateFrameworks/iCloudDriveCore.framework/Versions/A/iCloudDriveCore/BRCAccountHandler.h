@class BRCBarrier, NSString, BRCAccountSession, NSMutableDictionary, NSError, NSObject, BRDSIDString;
@protocol OS_dispatch_queue, OS_dispatch_workloop;

@interface BRCAccountHandler : NSObject {
    BOOL _startedLoading;
    NSString *_ubiquityTokenSalt;
    BRCAccountSession *_loadingSession;
    BRDSIDString *_dbAccountDSID;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_migrationStatusSetterQueue;
    BOOL _hasSetMigrationComplete;
    NSMutableDictionary *_syncPolicyByFolderType;
    BRCBarrier *_accountLoadingBarrier;
}

@property (readonly, nonatomic) BOOL finishedLoading;
@property (nonatomic) BOOL doesNotHaveEnoughDiskSpaceToBeFunctional;
@property (readonly, nonatomic) NSString *acAccountID;
@property (readonly, nonatomic) BRCAccountSession *session;
@property (readonly, nonatomic) NSString *accountPath;
@property (readonly, nonatomic) NSObject<OS_dispatch_workloop> *pushWorkloop;
@property (retain, nonatomic) NSError *loggedOutError;

+ (void)_migrateAccountIfNecessaryForAccountDSID:(id)a0;
+ (id)currentiCloudAccount;
+ (id)currentiCloudAccountID;

- (void)dealloc;
- (void).cxx_destruct;
- (void)__destroySession;
- (BOOL)_cleanupAPFSSnapshotWhenNoSessionExists;
- (void)_cleanupPushAndActivitiesStatesWhenNoSessionExists;
- (BOOL)_createCurrentAccountSessionWithID:(id)a0 error:(id *)a1;
- (void)_destroyCurrentSessionSynchronously;
- (void)_handleAccountDidChange;
- (void)_handleAccountWillChange;
- (unsigned char)_handleOpenError:(id)a0;
- (BOOL)_loadOnDiskAccountSessionSecondTry:(id)a0 prevError:(id)a1;
- (BOOL)_loadOnDiskAccountSessionWithError:(id *)a0;
- (BOOL)_shouldResetLocalData:(id)a0;
- (BOOL)_shouldRetryOpenSession:(unsigned char)a0;
- (unsigned char)_tryToOpenSession:(id)a0 error:(id *)a1;
- (void)_updateAccountToDSID:(id)a0;
- (BOOL)_waitForSessionLoadingWhenNowStarting:(BOOL)a0;
- (BOOL)checkEnoughDiskSpaceToBeFunctional;
- (BOOL)createAccountSessionWithDSID:(id)a0 error:(id *)a1;
- (BOOL)destroyCurrentAccountSynchronously;
- (BOOL)destroySessionSynchronously;
- (void)handleiCloudDesktopSettingsChangeWithAttributes:(id)a0 completion:(id /* block */)a1;
- (id)initWithACAccountID:(id)a0;
- (void)jetsamCloudDocsApps;
- (void)markMigrationCompletedForDSID:(id)a0;
- (void)reloadSyncedFolderPolicies;
- (void)reloadSyncedFolderPoliciesDisableiCloudDesktop:(BOOL)a0;
- (BOOL)setDBAccountDSID:(id)a0;
- (void)setMigrationStatus:(char)a0 forDSID:(id)a1 shouldUpdateAccount:(BOOL)a2 completion:(id /* block */)a3;
- (void)setMigrationStatus:(char)a0 forDSID:(id)a1 shouldUpdateAccount:(BOOL)a2 shouldPostAccountChangedNotification:(BOOL)a3 completion:(id /* block */)a4;
- (void)setSyncPolicy:(long long)a0 forSyncedFolderType:(unsigned long long)a1;
- (void)startAndLoadAccountSynchronously:(id)a0;
- (long long)syncPolicyforSyncedFolderType:(unsigned long long)a0;
- (id)ubiquityTokenSalt;
- (id)waitForSessionDBLoadingBarrier;
- (BOOL)waitForSessionLoading;

@end
