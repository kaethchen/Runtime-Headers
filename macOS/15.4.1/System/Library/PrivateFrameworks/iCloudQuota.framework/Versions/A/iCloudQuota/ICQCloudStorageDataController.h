@class ICQiCloudDetailsPageInfo, ACAccount;

@interface ICQCloudStorageDataController : NSObject {
    ACAccount *_account;
}

@property (nonatomic) BOOL shouldIgnoreCache;
@property (readonly, nonatomic) ICQiCloudDetailsPageInfo *cachediCloudDetailsPage;
@property (nonatomic) BOOL iCloudDetailsPageShown;

+ (id)_requestQueue;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (void)fetchStorageAppsWithCompletion:(id /* block */)a0;
- (void)sendTipState:(long long)a0 forTip:(id)a1 completion:(id /* block */)a2;
- (id)cachedStorageSummary;
- (void)fetchAppsSyncingToiCloudDriveWithCompletion:(id /* block */)a0;
- (void)fetchBackupinfoWithCompletion:(id /* block */)a0;
- (void)fetchStorageByApp:(id)a0 completion:(id /* block */)a1;
- (void)fetchStorageSummaryWithCompletion:(id /* block */)a0;

@end
