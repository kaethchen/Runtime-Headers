@protocol MTLegacyDownloadManagerProtocol;

@interface MTSubscriptionChangeHandler : NSObject

@property (nonatomic) id<MTLegacyDownloadManagerProtocol> downloadManager;

- (void)_applyEffectsOffMoC:(id)a0 channel:(id)a1 taskID:(id)a2;
- (void)_unsafeApplyDownloadEffects:(id)a0 channel:(id)a1 taskID:(id)a2;
- (void)_unsafeSendNotificationsForNewlyEntitledEpisodes:(id)a0 latestEpisodeUUID:(id)a1 newlyEntitledEpisodeUUIDs:(id)a2 taskID:(id)a3;
- (void)_unsafeUpdateEntitlementStateAndCheckForNewEntitlement:(id)a0 newlyEntitledEpisodeUUIDs:(id)a1 latestEpisodeDate:(double *)a2 latestEpisodeUUID:(id)a3;
- (void)_unsafeUpdatePriceTypeAndSendNotificationsIfNeededFor:(id)a0 subscriptionActive:(BOOL)a1 episodeEffects:(id)a2 taskID:(id)a3;
- (unsigned long long)_updateEntitledAttributes:(id)a0 subscriptionActive:(BOOL)a1 taskID:(id)a2;
- (id)episodesWithEffect:(unsigned long long)a0 fromEpisodeEffects:(id)a1;
- (void)unsafeHandleSubscriptionChangeForChannel:(id)a0 subscriptionBecameActive:(BOOL)a1 subscriptionEnabledDate:(double)a2;

@end
