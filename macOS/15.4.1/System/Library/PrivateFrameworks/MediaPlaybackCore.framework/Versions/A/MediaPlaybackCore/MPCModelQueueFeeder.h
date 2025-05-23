@class MPCModelGenericAVItemUserIdentityPropertySet, MPCModelPlaybackContext, MPCPlaybackRequestEnvironment, NSDictionary, NSObject, MPModelGenericObject, MPModelResponse, NSString, MPIdentifierSet, NSHashTable, MPPropertySet, MPModelRequest, NSLock, MPRequestResponseController;
@protocol MPCModelPlaybackRequest, MPMutableIdentifierListSection, MPCQueueControllerBehaviorMusicDataSourceDelegate, MPCModelPlaybackResponse, OS_dispatch_queue;

@interface MPCModelQueueFeeder : MPQueueFeeder <MPRTCReportingItemSessionContaining, MPRequestResponseControllerDelegate, MPCPlaybackEngineInfoProvider, MPCQueueControllerBehaviorMusicDataSource> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_diffQueue;
    NSLock *_diffLock;
    NSHashTable *_activeModelGenericAVItems;
    NSDictionary *_endTimeModifications;
    id /* block */ _loadingCompletionHandler;
    MPRequestResponseController *_requestController;
    MPModelRequest<MPCModelPlaybackRequest> *_request;
    NSString *_rtcReportingPlayQueueSourceIdentifier;
    BOOL _isSiriInitiated;
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;
    MPIdentifierSet *_startItemIdentifiers;
    NSDictionary *_startTimeModifications;
    id<MPMutableIdentifierListSection> _section;
    MPCModelGenericAVItemUserIdentityPropertySet *_identityPropertySet;
    MPCModelPlaybackContext *_playbackContext;
    MPPropertySet *_representativeMetadataPropertySet;
    unsigned long long _backgroundTaskIdentifier;
    unsigned long long _backgroundTasks;
}

@property (class, readonly, nonatomic) BOOL usesIdentifierRegistry;
@property (class, readonly, nonatomic) BOOL restoresIdentifierRegistry;

@property (copy, nonatomic) MPModelGenericObject *fallbackSectionRepresentation;
@property (readonly, nonatomic) MPModelResponse<MPCModelPlaybackResponse> *response;
@property (readonly, copy, nonatomic) NSString *rtcReportingPlayQueueSourceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *playbackEngineID;
@property (readonly, nonatomic) BOOL containsLiveStream;
@property (readonly, nonatomic) BOOL containsRadioContent;
@property (weak, nonatomic) id<MPCQueueControllerBehaviorMusicDataSourceDelegate> delegate;


- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (void)applyVolumeNormalizationForItem:(id)a0;
- (void)controller:(id)a0 defersResponseReplacement:(id /* block */)a1;
- (BOOL)controller:(id)a0 shouldRetryFailedRequestWithError:(id)a1;
- (void)didFinishLoadingRequestForController:(id)a0;
- (id)firstModelPlayEvent;
- (void)getRepresentativeMetadataForPlaybackContext:(id)a0 properties:(id)a1 completion:(id /* block */)a2;
- (void)reloadSection:(id)a0 completion:(id /* block */)a1;
- (BOOL)section:(id)a0 shouldShuffleExcludeItem:(id)a1;
- (long long)supplementalPlaybackContextBehavior;
- (id)supplementalPlaybackContextWithReason:(long long)a0;
- (void)willBeginLoadingRequestForController:(id)a0;
- (void)loadPlaybackContext:(id)a0 completion:(id /* block */)a1;
- (void)_beginBackgroundTaskAssertion;
- (void)_endBackgroundTaskAssertion;
- (id)_equivalencySourceAdamIDForIdentifierSet:(id)a0;
- (id)_sectionedModelObjectsRepresentationForSectionedCollection:(id)a0;
- (id)_staticRegistryRequest;
- (id)accountIDForItem:(id)a0 inSection:(id)a1;
- (BOOL)canJumpToItem:(id)a0 reason:(id *)a1;
- (BOOL)containsTransportableContentWithReason:(id *)a0;
- (id)firstItemIntersectingIdentifierSet:(id)a0;
- (id)identifiersForItem:(id)a0 inSection:(id)a1;
- (BOOL)isExportableMediaTypeForItem:(id)a0 inSection:(id)a1;
- (unsigned long long)itemCountInSection:(id)a0;
- (id)itemForItem:(id)a0 inSection:(id)a1;
- (id)modelPlayEventForItem:(id)a0 inSection:(id)a1;
- (id)playbackInfoForItem:(id)a0;
- (BOOL)section:(id)a0 supportsShuffleType:(long long)a1;
- (BOOL)shouldUsePlaceholderForItem:(id)a0 inSection:(id)a1;
- (BOOL)supportsAutoPlayForItem:(id)a0 inSection:(id)a1;
- (id)updatedPlaybackContext;

@end
