@class MSASDaemonModel, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, MSAlbumSharingDaemonDelegate;

@interface MSAlbumSharingDaemon : MSDaemon

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mapQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSMutableDictionary *personIDToStateMachineMap;
@property (retain, nonatomic) NSMutableDictionary *personIDToDelegateMap;
@property (retain, nonatomic) MSASDaemonModel *daemonModel;
@property (nonatomic) int busyCount;
@property (nonatomic) BOOL isRetryingOutstandingActivities;
@property (retain, nonatomic) NSMutableDictionary *nextUpdateDateByPersonID;
@property (weak, nonatomic) id<MSAlbumSharingDaemonDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (id)nextActivityDate;
- (void)deleteCommentWithGUID:(id)a0 personID:(id)a1;
- (void)markAlbumGUIDAsViewed:(id)a0 personID:(id)a1;
- (void)refreshResetSync:(BOOL)a0 personID:(id)a1 info:(id)a2;
- (void)acceptInvitationWithGUID:(id)a0 personID:(id)a1;
- (void)acceptInvitationWithGUID:(id)a0 personID:(id)a1 info:(id)a2;
- (void)acceptInvitationWithToken:(id)a0 personID:(id)a1 completionBlock:(id /* block */)a2;
- (void)acceptInvitationWithToken:(id)a0 personID:(id)a1 info:(id)a2 completionBlock:(id /* block */)a3;
- (void)addAccessControlEntries:(id)a0 toAlbumWithGUID:(id)a1 personID:(id)a2;
- (void)addAccessControlEntries:(id)a0 toAlbumWithGUID:(id)a1 personID:(id)a2 info:(id)a3;
- (void)addAlbum:(id)a0 personID:(id)a1;
- (void)addAlbum:(id)a0 personID:(id)a1 info:(id)a2;
- (void)addAssetCollections:(id)a0 toAlbumWithGUID:(id)a1 personID:(id)a2;
- (void)addAssetCollections:(id)a0 toAlbumWithGUID:(id)a1 personID:(id)a2 info:(id)a3;
- (void)addComments:(id)a0 toAssetCollectionWithGUID:(id)a1 personID:(id)a2;
- (void)addComments:(id)a0 toAssetCollectionWithGUID:(id)a1 personID:(id)a2 info:(id)a3;
- (void)cancelActivitiesForPersonID:(id)a0;
- (void)deleteAlbumWithGUID:(id)a0 personID:(id)a1;
- (void)deleteAlbumWithGUID:(id)a0 personID:(id)a1 info:(id)a2;
- (void)deleteAssetCollectionWithGUID:(id)a0 personID:(id)a1;
- (void)deleteAssetCollectionWithGUID:(id)a0 personID:(id)a1 info:(id)a2;
- (void)deleteAssetCollectionsWithGUIDs:(id)a0 personID:(id)a1;
- (void)deleteCommentWithGUID:(id)a0 personID:(id)a1 info:(id)a2;
- (void)forgetEverythingAboutPersonID:(id)a0;
- (BOOL)isWaitingForAuth;
- (void)markAlbumGUIDAsViewed:(id)a0 personID:(id)a1 info:(id)a2;
- (void)markAlbumGUIDAsViewed:(id)a0 personID:(id)a1 moveLastViewedAssetCollectionMarker:(BOOL)a2 info:(id)a3;
- (void)markCommentsForAssetCollectionWithGUID:(id)a0 asViewedWithLastViewedDate:(id)a1 personID:(id)a2;
- (void)markCommentsForAssetCollectionWithGUID:(id)a0 asViewedWithLastViewedDate:(id)a1 personID:(id)a2 info:(id)a3;
- (void)modifyAlbumMetadata:(id)a0 personID:(id)a1;
- (void)modifyAlbumMetadata:(id)a0 personID:(id)a1 info:(id)a2;
- (void)pollForSubscriptionUpdatesTriggeredByPushNotificationForPersonID:(id)a0;
- (void)refreshCommentsForAssetCollectionWithGUID:(id)a0 resetSync:(BOOL)a1 personID:(id)a2;
- (void)refreshCommentsForAssetCollectionWithGUID:(id)a0 resetSync:(BOOL)a1 personID:(id)a2 info:(id)a3;
- (void)refreshContentOfAlbumWithGUID:(id)a0 resetSync:(BOOL)a1 personID:(id)a2;
- (void)refreshContentOfAlbumWithGUID:(id)a0 resetSync:(BOOL)a1 personID:(id)a2 info:(id)a3;
- (void)refreshResetSync:(BOOL)a0 personID:(id)a1;
- (void)refreshServerSideConfigurationForPersonID:(id)a0;
- (void)rejectInvitationWithGUID:(id)a0 personID:(id)a1;
- (void)rejectInvitationWithGUID:(id)a0 personID:(id)a1 info:(id)a2;
- (void)removeAccessControlEntryWithGUID:(id)a0 personID:(id)a1;
- (void)removeAccessControlEntryWithGUID:(id)a0 personID:(id)a1 info:(id)a2;
- (void)retrieveAssets:(id)a0 inAlbumWithGUID:(id)a1 personID:(id)a2;
- (void)retryOutstandingActivities;
- (void)retryOutstandingActivitiesForPersonID:(id)a0;
- (id)serverSideConfigurationForPersonID:(id)a0;
- (void)setClientOrgKey:(id)a0 forAlbumWithGUID:(id)a1 personID:(id)a2;
- (void)setClientOrgKey:(id)a0 forAlbumWithGUID:(id)a1 personID:(id)a2 info:(id)a3;
- (void)setFocusAlbumGUID:(id)a0 forPersonID:(id)a1;
- (void)setFocusAssetCollectionGUID:(id)a0 forPersonID:(id)a1;
- (void)setMigrationMarker:(id)a0 personID:(id)a1;
- (void)setMultipleContributorsEnabled:(BOOL)a0 forAlbumWithGUID:(id)a1 personID:(id)a2 completionBlock:(id /* block */)a3;
- (void)setMultipleContributorsEnabled:(BOOL)a0 forAlbumWithGUID:(id)a1 personID:(id)a2 info:(id)a3 completionBlock:(id /* block */)a4;
- (void)setPublicAccessEnabled:(BOOL)a0 forAlbumWithGUID:(id)a1 personID:(id)a2 completionBlock:(id /* block */)a3;
- (void)setPublicAccessEnabled:(BOOL)a0 forAlbumWithGUID:(id)a1 personID:(id)a2 info:(id)a3 completionBlock:(id /* block */)a4;
- (void)shutDown;
- (void)shutDownCompletionBlock:(id /* block */)a0;
- (void)subscribeToAlbumWithGUID:(id)a0 personID:(id)a1;
- (void)subscribeToAlbumWithGUID:(id)a0 personID:(id)a1 info:(id)a2;
- (void)unsubscribeFromAlbumWithGUID:(id)a0 personID:(id)a1;
- (void)unsubscribeFromAlbumWithGUID:(id)a0 personID:(id)a1 info:(id)a2;
- (void)didIdle;
- (id)_delegateForPersonID:(id)a0;
- (void)_postModelShutdownForPersonID:(id)a0 completionBlock:(id /* block */)a1;
- (void)addAlbum:(id)a0;
- (id)boundStateMachineForPersonID:(id)a0;
- (id)clientOrgKeyForRecordID:(id)a0 zoneName:(id)a1 ownerUserID:(id)a2 personID:(id)a3;
- (void)deleteAlbumWithGUID:(id)a0 inviterAddress:(id)a1;
- (void)didCreateStateMachineForPersonID:(id)a0;
- (void)didDestroyStateMachineForPersonID:(id)a0;
- (void)didReceiveAuthFailureForPersonID:(id)a0;
- (void)didReceiveAuthSuccessForPersonID:(id)a0;
- (void)didReceiveCommentTooLongError:(id)a0 forAssetCollection:(id)a1 inAlbum:(id)a2 personID:(id)a3;
- (void)didReceiveGlobalResetSyncForPersonID:(id)a0;
- (void)didReceivePushNotificationForPersonID:(id)a0;
- (void)didReceiveTooManyAlbumsError:(id)a0 personID:(id)a1;
- (void)didReceiveTooManyCommentsError:(id)a0 forAssetCollection:(id)a1 inAlbum:(id)a2 personID:(id)a3;
- (void)didReceiveTooManyPhotosError:(id)a0 forAlbum:(id)a1 personID:(id)a2;
- (void)didReceiveTooManySubscriptionsError:(id)a0 personID:(id)a1;
- (void)didUnidle;
- (id)existingModelForPersonID:(id)a0;
- (id)existingStateMachineForPersonID:(id)a0;
- (void)forgetEverythingAboutPersonID:(id)a0 completionBlock:(id /* block */)a1;
- (void)forgetEverythingCompletionBlock:(id /* block */)a0;
- (BOOL)hasCommandsInGroupedCommandQueue;
- (BOOL)isInRetryState;
- (void)mapQueueShutDownStateMachineInMap:(id)a0 personIDs:(id)a1 index:(unsigned long long)a2 forDestruction:(BOOL)a3 completionBlock:(id /* block */)a4;
- (void)markAsSpamAlbumWithGUID:(id)a0 personID:(id)a1;
- (void)markAsSpamInvitationWithGUID:(id)a0 personID:(id)a1;
- (void)markAsSpamInvitationWithToken:(id)a0 personID:(id)a1;
- (id)modelForPersonID:(id)a0;
- (id)persistentObjectForKey:(id)a0 personID:(id)a1;
- (id)personIDListeningToPushNotification;
- (void)refreshAccessControlListOfAlbumWithGUID:(id)a0 personID:(id)a1;
- (void)refreshAccessControlListOfAlbumWithGUID:(id)a0 personID:(id)a1 info:(id)a2;
- (void)retrieveAssetsInAssetCollectionsWithGUIDs:(id)a0 assetTypeFlags:(int)a1 personID:(id)a2;
- (void)sendServerSideConfigurationDidChangeNotificationForPersonID:(id)a0;
- (void)setNextActivityDate:(id)a0 forPersonID:(id)a1;
- (void)setPersistentObject:(id)a0 forKey:(id)a1 personID:(id)a2;
- (void)shutDownStateMachine:(id)a0 forDestruction:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void)stopAssetDownloadsForPersonID:(id)a0;
- (void)updateOwnerReputationScoreForAlbum:(id)a0;
- (void)willDestroyStateMachineForPersonID:(id)a0;
- (void)workQueueForgetEverythingAboutPersonID:(id)a0 completionBlock:(id /* block */)a1;
- (void)workQueueForgetEverythingAboutPersonIDs:(id)a0 index:(unsigned long long)a1 completionBlock:(id /* block */)a2;

@end
