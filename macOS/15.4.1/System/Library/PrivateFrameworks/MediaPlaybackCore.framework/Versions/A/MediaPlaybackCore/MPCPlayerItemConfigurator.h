@class MPPlaybackEQSetting, NSString, MPCModelGenericAVItem, MPCAudioAssetTypeSelector, MPCPlayerAudioRoute, NSObject, MPCPlaybackEngine, MPAVRoutingController;
@protocol MFQueueItemTranslator, MFQueueManagement, OS_dispatch_source, MFPlaybackStackController;

@interface MPCPlayerItemConfigurator : NSObject <MPAVRoutingControllerDelegate, MPCPlaybackEngineEventObserving>

@property (retain, nonatomic) MPPlaybackEQSetting *eqSetting;
@property (readonly, weak, nonatomic) id<MFQueueItemTranslator> translator;
@property (readonly, weak, nonatomic) id<MFPlaybackStackController, MFQueueManagement> stackController;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *userDefaultsDebouncer;
@property (readonly, nonatomic) MPAVRoutingController *routingController;
@property (readonly, nonatomic) MPCPlayerAudioRoute *currentAudioRoute;
@property (readonly, weak, nonatomic) MPCModelGenericAVItem *currentItem;
@property (readonly, nonatomic) MPCAudioAssetTypeSelector *audioAssetTypeSelector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)queuedItems;
- (void)_setupNotifications;
- (void)routingController:(id)a0 pickedRoutesDidChange:(id)a1;
- (void)_emitAudioFormatSelection:(id)a0 item:(id)a1;
- (id)_HLSMetadataForAsset:(id)a0 error:(id *)a1;
- (id)_audioFormatsDictionaryWithHLSMetadata:(id)a0;
- (id)_audioFormatsDictionaryWithHLSMetadataFromAsset:(id)a0 metadataWaitTime:(double *)a1 error:(id *)a2;
- (void)_highQualityMusicStreamingOnCellularDidChange:(id)a0;
- (id)_modeObjectForPlayerItem:(id)a0;
- (void)_playbackUserDefaultsEQPresetDidChangeNotification:(id)a0;
- (void)_preferredResolutionDidChange:(id)a0;
- (void)_resetBufferedAudio;
- (void)_setupPlayer;
- (BOOL)_setupQueueItemForEnhancedAudioHLSPlayback:(id)a0 playerItem:(id)a1 metadataWaitTime:(double *)a2 error:(id *)a3;
- (void)_setupQueueItemForHLSPlayback:(id)a0 playerItem:(id)a1;
- (void)_setupQueueItemForLossyAudioPlayback:(id)a0 playerItem:(id)a1;
- (void)_setupRoutingController;
- (BOOL)_shouldReloadEntireQueue;
- (void)_soundCheckEnabledChangedNotification:(id)a0;
- (void)_updatePreferredAudioFormatIfRequiredForItem:(id)a0 route:(id)a1;
- (void)_updateQueueItemsAndPlayerForFormatChangeIfRequired;
- (BOOL)configureQueueItem:(id)a0 playerItem:(id)a1 error:(id *)a2;
- (void)engineDidChangeVocalAttenuationLevel:(id)a0;
- (void)engineDidChangeVocalAttenuationState:(id)a0;
- (id)initWithPlaybackEngine:(id)a0 stackController:(id)a1 translator:(id)a2;
- (void)processAudioQualityChanges;
- (void)setupDefaultsDebouncer;
- (void)tearDownDefaultsDebouncer;
- (BOOL)updateCurrentAudioRouteWithPickedRouteIfNeeded:(id)a0;
- (void)updatePlayerConfiguration;

@end
