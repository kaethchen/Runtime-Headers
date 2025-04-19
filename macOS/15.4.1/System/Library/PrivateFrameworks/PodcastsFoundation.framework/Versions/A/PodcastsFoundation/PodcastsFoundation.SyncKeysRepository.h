@class NSString, _TtC18PodcastsFoundation18SyncKeysRepository;

@interface PodcastsFoundation.SyncKeysRepository : NSObject {
    void /* unknown type, empty encoding */ syncKeysStore;
}

@property (class, nonatomic, readonly) BOOL shouldSyncInReadOnlyMode;
@property (class, nonatomic, readonly) _TtC18PodcastsFoundation18SyncKeysRepository *shared;

@property (nonatomic) BOOL isNonFollowedShowsSyncDirty;
@property (nonatomic) BOOL isInterestSyncDirty;
@property (nonatomic) BOOL isPlaylistSyncDirty;
@property (nonatomic, copy) NSString *nonFollowedShowsSyncVersion;
@property (nonatomic, copy) NSString *interestSyncVersion;
@property (nonatomic, copy) NSString *podcastsDomainVersion;
@property (nonatomic) BOOL isLibrarySyncEnabled;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isBookmarksSyncDirtyFor:(long long)a0;
- (BOOL)isSubscriptionSyncDirtyFor:(long long)a0;
- (void)markBookmarksSyncDirty:(BOOL)a0 for:(long long)a1;
- (void)markInterestSyncDirty:(BOOL)a0;
- (void)markSubscriptionSyncDirty:(BOOL)a0 for:(long long)a1;
- (void)resetSubscriptionsLastSyncTimestampFor:(long long)a0;
- (void)resetSubscriptionsSyncVersionFor:(long long)a0;
- (double)subscriptionsLastSyncTimestampFor:(long long)a0;
- (id)subscriptionsSyncVersionFor:(long long)a0;
- (void)updateSubscriptionsLastSyncTimestampFor:(long long)a0;
- (void)updateSubscriptionsSyncVersionFor:(long long)a0 newValue:(id)a1;

@end
