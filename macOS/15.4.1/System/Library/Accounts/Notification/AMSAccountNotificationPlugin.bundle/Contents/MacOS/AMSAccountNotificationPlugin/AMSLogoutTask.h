@class ICCloudServiceStatusMonitor, ACAccount;

@interface AMSLogoutTask : AMSTask

@property (retain) ICCloudServiceStatusMonitor *iCloudServiceMonitor;
@property (readonly) ACAccount *account;

+ (void)_performDaemonSignOutTasksForAccountWithID:(id)a0;
+ (void)_resetServerDataCacheForAccountWithDSID:(id)a0;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (id)logout;
- (BOOL)_disableAutomaticDownloadKindsWithError:(id *)a0;
- (BOOL)_disableBookkeeperWithBag:(id)a0 error:(id *)a1;
- (BOOL)_revokeMusicKitUserTokensWithError:(id *)a0;
- (BOOL)_sendLogoutRequestWithBag:(id)a0 error:(id *)a1;

@end
