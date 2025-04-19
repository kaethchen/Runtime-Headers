@class NSCountedSet;
@protocol MSMediaStreamDaemonDelegate;

@interface MSMediaStreamDaemon : MSDaemon {
    NSCountedSet *_retainedObjects;
}

@property (nonatomic) id<MSMediaStreamDaemonDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (id)nextActivityDate;
- (void)forgetPersonID:(id)a0;
- (void)abortAllActivityForPersonID:(id)a0;
- (BOOL)dequeueAssetCollectionWithGUIDs:(id)a0 personID:(id)a1 outError:(id *)a2;
- (void)pollForSubscriptionUpdatesForPersonID:(id)a0;
- (void)pollForSubscriptionUpdatesTriggeredByPushNotificationForPersonID:(id)a0;
- (void)refreshServerSideConfigurationForPersonID:(id)a0;
- (void)retryOutstandingActivities;
- (id)serverSideConfigurationForPersonID:(id)a0;
- (id)ownSubscribedStreamForPersonID:(id)a0;
- (void)resetSubscriberSyncForPersonID:(id)a0;
- (void)didIdle;
- (id)_boundDeleterForPersonID:(id)a0;
- (id)_boundPublisherForPersonID:(id)a0;
- (id)_boundServerSideConfigManagerForPersonID:(id)a0;
- (id)_boundSubscriberForPersonID:(id)a0;
- (void)computeHashForAsset:(id)a0 personID:(id)a1;
- (void)deleteAssetCollections:(id)a0 forPersonID:(id)a1;
- (void)didExceedPublishQuotaForPersonID:(id)a0 retryDate:(id)a1;
- (void)didReceiveAuthenticationFailureForPersonID:(id)a0;
- (void)didReceiveAuthenticationSuccessForPersonID:(id)a0;
- (void)didReceiveGlobalResetSyncForPersonID:(id)a0;
- (void)didReceiveNewServerSideConfigurationForPersonID:(id)a0;
- (void)didReceiveNewShareState:(id)a0 oldShareState:(id)a1 forPersonID:(id)a2;
- (void)didReceivePushNotificationForPersonID:(id)a0;
- (void)didReceiveServerSideConfigurationVersion:(id)a0 forPersonID:(id)a1;
- (void)didUnidle;
- (BOOL)enqueueAssetCollection:(id)a0 personID:(id)a1 outError:(id *)a2;
- (BOOL)hasOutstandingActivity;
- (BOOL)isInRetryState;
- (BOOL)mayDownloadPersonID:(id)a0;
- (BOOL)personIDHasOutstandingPublications:(id)a0;
- (void)reenqueueQuarantinedActivitiesWithReason:(id)a0;
- (void)showInvitationFailureAlertForPersonID:(id)a0 failures:(id)a1;
- (void)stopAllActivities;
- (id)subscribedStreamsForPersonID:(id)a0;

@end
