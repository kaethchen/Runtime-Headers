@class MPCModelRadioPlaybackContext, NSString, ICUserIdentityStore, MPAVItem, MPCModelRadioPersonalizationResponse, MPCPlaybackRequestEnvironment, MPCModelRadioPlaybackQueue, ICStoreRequestContext;
@protocol MPCQueueControllerBehaviorMusicDataSourceDelegate, MPMutableIdentifierListSection;

@interface MPCModelRadioQueueFeeder : MPQueueFeeder <MPRTCReportingItemSessionContaining, ICEnvironmentMonitorObserver, MPCPlaybackEngineInfoProvider, MPCQueueControllerBehaviorMusicDataSource> {
    id<MPMutableIdentifierListSection> _section;
    MPCModelRadioPlaybackQueue *_playbackQueue;
    MPCModelRadioPlaybackContext *_playbackContext;
    BOOL _needsSectionUpdate;
    unsigned long long _backgroundTaskIdentifier;
    unsigned long long _backgroundTasks;
    MPAVItem *_currentItem;
    BOOL _hasReachedTracklistEnd;
    BOOL _supportsLoadingAdditionalItems;
    NSString *_lastCleanPlayedIdentifier;
    NSString *_lastPlayedIdentifier;
    MPCModelRadioPersonalizationResponse *_lastResponse;
    BOOL _mayHaveRestrictedContent;
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;
    long long _queueGeneration;
    NSString *_siriAssetInfo;
    ICUserIdentityStore *_observedIdentityStore;
    ICStoreRequestContext *_storeRequestContext;
    BOOL _hasSignedOut;
}

@property (class, readonly, nonatomic) BOOL usesIdentifierRegistry;
@property (class, readonly, nonatomic) BOOL restoresIdentifierRegistry;

@property (readonly, copy, nonatomic) NSString *rtcReportingPlayQueueSourceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *playbackEngineID;
@property (readonly, nonatomic) BOOL containsLiveStream;
@property (readonly, nonatomic) BOOL containsRadioContent;
@property (weak, nonatomic) id<MPCQueueControllerBehaviorMusicDataSourceDelegate> delegate;

+ (id)sharedQueue;
+ (void)__CRASH_FOR_UNEXPECTED_TRACK_DELETE__;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (long long)itemCount;
- (void)environmentMonitorDidChangeNetworkType:(id)a0;
- (id)firstModelPlayEvent;
- (void)getRepresentativeMetadataForPlaybackContext:(id)a0 properties:(id)a1 completion:(id /* block */)a2;
- (void)reloadSection:(id)a0 completion:(id /* block */)a1;
- (long long)supplementalPlaybackContextBehavior;
- (id)supplementalPlaybackContextWithReason:(long long)a0;
- (void)_handleGetTracksResponse:(id)a0 getTracksError:(id)a1 fromRequest:(id)a2 completion:(id /* block */)a3;
- (void)_updateAdditionalLoadingSupport;
- (void)_detectSignOutForIdentityStore:(id)a0;
- (void)loadPlaybackContext:(id)a0 completion:(id /* block */)a1;
- (void)_allowCellularStreamingDidChangeNotification:(id)a0;
- (void)_beginBackgroundTaskAssertion;
- (void)_beginObservingIdentityStoreForSignOut;
- (id)_defaultGetTracksRequestWithContext:(id)a0 radioStation:(id)a1;
- (void)_detectSignOutForIdentityStoreChangeNotification:(id)a0;
- (void)_endBackgroundTaskAssertion;
- (void)_endObservingIdentityStoreForSignOut;
- (id)_errorForRequest:(id)a0 withError:(id)a1;
- (void)_handlePersonalizationResponse:(id)a0 personalizationError:(id)a1 fromRequest:(id)a2 completion:(id /* block */)a3;
- (BOOL)_isTransientLoadingError:(id)a0;
- (void)_loadTracksWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)_observePersonalizationResponse:(id)a0;
- (void)_removeAllTracks;
- (void)_removeRestrictedTracks;
- (void)_repersonalizeCurrentTracks;
- (void)_responseDidInvalidate;
- (void)_responseDidInvalidateNotification:(id)a0;
- (id)accountIDForItem:(id)a0 inSection:(id)a1;
- (BOOL)canJumpToItem:(id)a0 reason:(id *)a1;
- (BOOL)canSkipItem:(id)a0 reason:(id *)a1;
- (BOOL)containsTransportableContentWithReason:(id *)a0;
- (id)identifiersForItem:(id)a0 inSection:(id)a1;
- (BOOL)isExportableMediaTypeForItem:(id)a0 inSection:(id)a1;
- (unsigned long long)itemCountInSection:(id)a0;
- (void)itemDidBeginPlayback:(id)a0;
- (id)itemForItem:(id)a0 inSection:(id)a1;
- (void)loadAdditionalItemsWithCount:(long long)a0 forSection:(id)a1 completion:(id /* block */)a2;
- (id)modelPlayEventForItem:(id)a0 inSection:(id)a1;
- (id)placeholderItemForLoadingAdditionalItemsInSection:(id)a0;
- (long long)prefetchThresholdForSection:(id)a0;
- (BOOL)section:(id)a0 supportsShuffleType:(long long)a1;
- (BOOL)shouldRequestAdditionalItemsWhenReachingTailOfSection:(id)a0;
- (BOOL)supportsAutoPlayForItem:(id)a0 inSection:(id)a1;
- (id)updatedPlaybackContext;

@end
