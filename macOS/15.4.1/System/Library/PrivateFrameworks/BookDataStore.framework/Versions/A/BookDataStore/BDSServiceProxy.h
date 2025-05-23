@class NSString, NSXPCConnection, NSObject, BDSClientSideListener;
@protocol NSXPCProxyCreating, BDSServiceProtocol, OS_dispatch_queue, BDSServiceProxyConnectionDelegate;

@interface BDSServiceProxy : NSObject <NSXPCProxyCreating, BDSServiceProtocol> {
    NSObject<OS_dispatch_queue> *_notifyQueue;
    int _notifyToken;
}

@property (readonly, nonatomic) id<BDSServiceProtocol, NSXPCProxyCreating> remoteObjectProxy;
@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, weak, nonatomic) id<BDSServiceProxyConnectionDelegate> connectionDelegate;
@property (nonatomic) BOOL connectionHealthy;
@property (retain, nonatomic) BDSClientSideListener *clientSideListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)shutdown;
- (void)setCollectionMember:(id)a0 completion:(id /* block */)a1;
- (void)storeItemForStoreID:(id)a0 completion:(id /* block */)a1;
- (void)userDataValueForKey:(id)a0 completion:(id /* block */)a1;
- (void)scheduleRestart;
- (void)setCollectionDetail:(id)a0 completion:(id /* block */)a1;
- (void)addStoreItem:(id)a0 completion:(id /* block */)a1;
- (void)addStoreItems:(id)a0 completion:(id /* block */)a1;
- (void)assetDetailForAssetID:(id)a0 completion:(id /* block */)a1;
- (void)assetDetailsForAssetIDs:(id)a0 completion:(id /* block */)a1;
- (void)assetReviewForAssetReviewID:(id)a0 completion:(id /* block */)a1;
- (void)assetReviewsForAssetReviewIDs:(id)a0 completion:(id /* block */)a1;
- (void)clearSyncMetadata:(id /* block */)a0;
- (void)cloudSyncDiagnosticDetachWithCompletionHandler:(id /* block */)a0;
- (void)cloudSyncDiagnosticFindLocalIdDupesWithCompletionHandler:(id /* block */)a0;
- (void)cloudSyncDiagnosticInfoWithCompletionHandler:(id /* block */)a0;
- (void)collectionDetailForCollectionID:(id)a0 completion:(id /* block */)a1;
- (void)collectionDetailsForCollectionIDs:(id)a0 completion:(id /* block */)a1;
- (void)collectionMemberForCollectionMemberID:(id)a0 completion:(id /* block */)a1;
- (void)currentAssetDetailCloudSyncVersions:(id /* block */)a0;
- (void)currentCloudSyncVersions:(id /* block */)a0;
- (void)currentCollectionDetailCloudSyncVersions:(id /* block */)a0;
- (void)currentCollectionMemberCloudSyncVersions:(id /* block */)a0;
- (void)currentReadingNowDetailCloudSyncVersions:(id /* block */)a0;
- (void)deleteAssetDetailForAssetID:(id)a0 completion:(id /* block */)a1;
- (void)deleteAssetReviewForAssetReviewID:(id)a0 completion:(id /* block */)a1;
- (void)deleteAssetReviewForAssetReviewIDs:(id)a0 completion:(id /* block */)a1;
- (void)deleteCollectionDetailForCollectionID:(id)a0 completion:(id /* block */)a1;
- (void)deleteCollectionDetailForCollectionIDs:(id)a0 completion:(id /* block */)a1;
- (void)deleteCollectionMemberForCollectionMemberID:(id)a0 completion:(id /* block */)a1;
- (void)deleteCollectionMemberForCollectionMemberIDs:(id)a0 completion:(id /* block */)a1;
- (void)deleteEngagementDataForKey:(id)a0 completion:(id /* block */)a1;
- (void)deleteItemsWithStoreIDs:(id)a0 completion:(id /* block */)a1;
- (void)deleteReadingNowDetailForAssetID:(id)a0 completion:(id /* block */)a1;
- (void)deleteStoreItemWithStoreID:(id)a0 completion:(id /* block */)a1;
- (void)deleteStoreItemsWithStoreIDs:(id)a0 completion:(id /* block */)a1;
- (void)deleteUserDatumForKey:(id)a0 completion:(id /* block */)a1;
- (void)dissociateCloudDataFromSyncWithCompletion:(id /* block */)a0;
- (void)engagementDataForKey:(id)a0 completion:(id /* block */)a1;
- (void)engagementDataIncludingDeleted:(BOOL)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)fetchAllHiddenItemStoreIDsWithCompletion:(id /* block */)a0;
- (void)fetchAssetDetailsForUnsyncedTastes:(id /* block */)a0;
- (void)fetchAssetDetailsIncludingDeleted:(BOOL)a0 completion:(id /* block */)a1;
- (void)fetchAssetReviewsForUserID:(id)a0 includingDeleted:(BOOL)a1 completion:(id /* block */)a2;
- (void)fetchCollectionDetailsIncludingDeleted:(BOOL)a0 completion:(id /* block */)a1;
- (void)fetchCollectionMembersInCollectionID:(id)a0 completion:(id /* block */)a1;
- (void)fetchCollectionMembersIncludingDeleted:(BOOL)a0 completion:(id /* block */)a1;
- (void)fetchEngagementDatasIncludingDeleted:(BOOL)a0 completion:(id /* block */)a1;
- (void)fetchFinishedAssetCountByYearWithCompletion:(id /* block */)a0;
- (void)fetchFinishedDatesByAssetIDForYear:(long long)a0 completion:(id /* block */)a1;
- (void)fetchMaxSortOrderInCollectionID:(id)a0 completion:(id /* block */)a1;
- (void)fetchStoreItemsIncludingDeleted:(BOOL)a0 completion:(id /* block */)a1;
- (void)fetchUserDataIncludingDeleted:(BOOL)a0 completion:(id /* block */)a1;
- (void)forceFetchRemoteChanges:(id /* block */)a0;
- (void)formXPCConnection;
- (void)getAssetDetailChangesSince:(id)a0 completion:(id /* block */)a1;
- (void)getAssetReviewChangesSince:(id)a0 completion:(id /* block */)a1;
- (void)getCollectionDetailChangesSince:(id)a0 completion:(id /* block */)a1;
- (void)getCollectionMemberChangesSince:(id)a0 completion:(id /* block */)a1;
- (void)getEngagementDataChangesSince:(id)a0 completion:(id /* block */)a1;
- (void)getReadingNowDetailChangesSince:(id)a0 completion:(id /* block */)a1;
- (void)getStoreItemChangesSince:(id)a0 completion:(id /* block */)a1;
- (void)getUserDataChangesSince:(id)a0 completion:(id /* block */)a1;
- (void)hasSaltChangedWithCompletion:(id /* block */)a0;
- (void)hideItemsWithStoreIDs:(id)a0 completion:(id /* block */)a1;
- (id)initWithConnectionDelegate:(id)a0;
- (void)mergeMovedReadingHistoryDataWithCompletionHandler:(id /* block */)a0;
- (void)monitorServiceNotificationsWithChangeToken:(id)a0 completion:(id /* block */)a1;
- (void)needsReadingNowAssetTypePopulation:(id /* block */)a0;
- (void)priceTrackingCtlAddTrackedItems:(id)a0 completion:(id /* block */)a1;
- (void)priceTrackingCtlGetStateWithCompletion:(id /* block */)a0;
- (void)priceTrackingCtlOverrideReferencePrices:(id)a0 completion:(id /* block */)a1;
- (void)priceTrackingCtlRefreshTrackedPricesIgnoringSchedule:(BOOL)a0 completion:(id /* block */)a1;
- (void)priceTrackingSetConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)readingGoalsChangeBooksFinishedGoalTo:(long long)a0 withCompletion:(id /* block */)a1;
- (void)readingGoalsChangeDailyGoalTo:(double)a0 withCompletion:(id /* block */)a1;
- (void)readingGoalsClearDataWithCompletion:(id /* block */)a0;
- (void)readingGoalsClearLocalCachedDataWithCompletion:(id /* block */)a0;
- (void)readingGoalsStateInfoWithCompletion:(id /* block */)a0;
- (void)readingHistoryBackupWithName:(id)a0 completion:(id /* block */)a1;
- (void)readingHistoryClearDataWithCompletion:(id /* block */)a0;
- (void)readingHistoryClearDate:(id)a0 withCompletion:(id /* block */)a1;
- (void)readingHistoryClearDefaultsCachedDataWithCompletion:(id /* block */)a0;
- (void)readingHistoryClearTodayWithCompletion:(id /* block */)a0;
- (void)readingHistoryHandleSyncFileChangeWithSyncVersionInfo:(id)a0 updateInfo:(id)a1 completion:(id /* block */)a2;
- (void)readingHistoryIncrementWithDate:(id)a0 by:(long long)a1 withCompletion:(id /* block */)a2;
- (void)readingHistoryListBackupWithCompletion:(id /* block */)a0;
- (void)readingHistoryReadingHistoryStateInfoWithRangeStart:(id)a0 rangeEnd:(id)a1 currentTime:(id)a2 withCompletion:(id /* block */)a3;
- (void)readingHistoryRestoreWithName:(id)a0 completion:(id /* block */)a1;
- (void)readingHistoryServiceStatusInfoWithCompletion:(id /* block */)a0;
- (void)readingNowDetailsForAssetIDs:(id)a0 completion:(id /* block */)a1;
- (void)resetPurchasedTokenForStoreIDs:(id)a0 completion:(id /* block */)a1;
- (void)resetStaleJaliscoDatabaseWithCompletion:(id /* block */)a0;
- (void)resolvedAssetDetailForAssetID:(id)a0 completion:(id /* block */)a1;
- (void)resolvedUserDataValueForKey:(id)a0 completion:(id /* block */)a1;
- (void)setAssetDetail:(id)a0 completion:(id /* block */)a1;
- (void)setAssetDetails:(id)a0 completion:(id /* block */)a1;
- (void)setAssetReview:(id)a0 completion:(id /* block */)a1;
- (void)setAssetReviews:(id)a0 completion:(id /* block */)a1;
- (void)setCloudSyncPaused:(BOOL)a0;
- (void)setCollectionDetails:(id)a0 completion:(id /* block */)a1;
- (void)setCollectionMembers:(id)a0 completion:(id /* block */)a1;
- (void)setEnableCloudSync:(BOOL)a0 enableReadingNowSync:(BOOL)a1;
- (void)setEnableCollectionSync:(BOOL)a0;
- (void)setEnableSecureCloudSync:(BOOL)a0;
- (void)setEngagementData:(id)a0 completion:(id /* block */)a1;
- (void)setEngagementDatas:(id)a0 completion:(id /* block */)a1;
- (void)setItemHidden:(BOOL)a0 forStoreID:(id)a1 completion:(id /* block */)a2;
- (void)setReadingNowDetails:(id)a0 completion:(id /* block */)a1;
- (void)setUserData:(id)a0 completion:(id /* block */)a1;
- (void)setUserDataValue:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)setUserDatum:(id)a0 completion:(id /* block */)a1;
- (void)signalFetchChangesTransaction:(id)a0;
- (void)updateFamilyPolitely:(BOOL)a0 reason:(long long)a1 completion:(id /* block */)a2;
- (void)updateFamilyPolitely:(BOOL)a0 reason:(long long)a1 completionWithError:(id /* block */)a2;
- (void)updatePolitely:(BOOL)a0 reason:(long long)a1 completion:(id /* block */)a2;
- (void)updatePolitely:(BOOL)a0 reason:(long long)a1 completionWithError:(id /* block */)a2;
- (void)updatePolitely:(BOOL)a0 uiManager:(id)a1 reason:(long long)a2 completion:(id /* block */)a3;
- (void)updatePolitelyAfterSignIn:(BOOL)a0 reason:(long long)a1 completion:(id /* block */)a2;
- (void)updatePolitelyAfterSignOut:(BOOL)a0 reason:(long long)a1 completion:(id /* block */)a2;
- (void)userDatumForKey:(id)a0 completion:(id /* block */)a1;
- (void)userDatumIncludingDeleted:(BOOL)a0 forKey:(id)a1 completion:(id /* block */)a2;

@end
