@class NSError, NSString, NSArray, AVPlayerPlaybackCoordinator, AVPlayerMediaSelectionCriteria, AVPlayerInternal, AVPlayerVideoOutput, NSNumber;
@protocol AVLoggingIdentifier;

@interface AVPlayer : NSObject {
    AVPlayerInternal *_player;
}

@property (nonatomic) BOOL preventsDisplaySleepDuringVideoPlayback;
@property (nonatomic) BOOL preventsAutomaticBackgroundingDuringVideoPlayback;
@property (copy, nonatomic, setter=_setDisplaysUsedForPlayback:) NSArray *_displaysUsedForPlayback;
@property (readonly, nonatomic) long long _externalProtectionStatus;
@property (readonly, nonatomic, getter=_isPIPModePossible) BOOL PIPModePossible;
@property (readonly, nonatomic, getter=isAudioPlaybackEnabledAtAllRates) BOOL audioPlaybackEnabledAtAllRates;
@property float minRateForAudioPlayback;
@property float maxRateForAudioPlayback;
@property BOOL allowsPixelBufferPoolSharing;
@property BOOL disallowsAMRAudio;
@property BOOL appliesMediaSelectionCriteriaAutomatically;
@property (copy) NSString *audioOutputDeviceUniqueID;
@property BOOL allowsOutOfBandTextTrackRendering;
@property (copy) NSString *multichannelAudioStrategy;
@property (copy, nonatomic) NSString *captionRenderingStrategy;
@property (copy, nonatomic) NSString *captionPipelineStrategy;
@property (nonatomic) unsigned long long preferredVideoDecoderGPURegistryID;
@property (retain, nonatomic) id<AVLoggingIdentifier> loggingIdentifier;
@property (nonatomic, getter=_disallowsAutoPauseOnRouteRemovalIfNoAudio, setter=_setDisallowsAutoPauseOnRouteRemovalIfNoAudio:) BOOL disallowsAutoPauseOnRouteRemovalIfNoAudio;
@property (retain, nonatomic, getter=_STSLabel, setter=_setSTSLabel:) NSString *STSLabel;
@property (nonatomic) BOOL prefersPlayingSilentlyWhenConflictingWithOtherPlayback;
@property (readonly, nonatomic) BOOL isSilencedDueToConflictWithOtherPlayback;
@property (nonatomic, getter=_silencesOtherPlaybackDuringPIP, setter=_setSilencesOtherPlaybackDuringPIP:) BOOL silencesOtherPlaybackDuringPIP;
@property (readonly, nonatomic) NSNumber *mxSessionID;
@property (copy, nonatomic) NSString *backgroundPIPAuthorizationToken;
@property (nonatomic) BOOL shouldWaitForVideoTarget;
@property (readonly, nonatomic) NSArray *videoTargets;
@property (readonly, nonatomic) NSArray *taggedBufferOutputs;
@property (nonatomic) AVPlayerVideoOutput *videoOutput;
@property (readonly) AVPlayerPlaybackCoordinator *playbackCoordinator;
@property (nonatomic) BOOL allowsLegibleFallbackForAllAudibleMediaSelections;
@property (retain, nonatomic) AVPlayerMediaSelectionCriteria *legibleFallbackMediaSelectionCriteria;
@property (nonatomic, getter=_supportsAdvanceTimeForOverlappedPlayback, setter=_setSupportsAdvanceTimeForOverlappedPlayback:) BOOL _supportsAdvanceTimeForOverlappedPlayback;
@property (nonatomic, getter=supportsSpeedRamps, setter=setSupportsSpeedRamps:) BOOL supportsSpeedRamps;
@property (readonly) long long status;
@property (readonly) NSError *error;

+ (void)initialize;
+ (id)playerWithURL:(id)a0;
+ (id)keyPathsForValuesAffectingMuted;
+ (id)preferredVideoRangeForDisplays:(id)a0;
+ (id)_makePlayerName;
+ (int)_createFigPlayerWithType:(long long)a0 options:(struct __CFDictionary { } *)a1 player:(struct OpaqueFigPlayer **)a2;
+ (BOOL)automaticallyNotifiesObserversOfAirPlayVideoActive;
+ (BOOL)automaticallyNotifiesObserversOfAutoSwitchStreamVariants;
+ (BOOL)automaticallyNotifiesObserversOfCurrentItem;
+ (BOOL)automaticallyNotifiesObserversOfExternalPlaybackActive;
+ (BOOL)automaticallyNotifiesObserversOfRate;
+ (BOOL)automaticallyNotifiesObserversOfUsesAirPlayVideoWhileAirPlayScreenIsActive;
+ (BOOL)automaticallyNotifiesObserversOfUsesAudioOnlyModeForExternalPlayback;
+ (BOOL)automaticallyNotifiesObserversOfUsesLegacyAutomaticWaitingBehavior;
+ (long long)availableHDRModes;
+ (void)checkForAvailableHDRModesChanges;
+ (BOOL)eligibleForHDRPlayback;
+ (void)fireAvailableHDRModesDidChangeNotification;
+ (void)fireEligibleForHDRPlaybackDidChangeNotification;
+ (id)keyPathsForValuesAffectingActionAtItemEnd;
+ (id)keyPathsForValuesAffectingClosedCaptionDisplayEnabled;
+ (id)keyPathsForValuesAffectingVolume;
+ (id)makePlayerLoggingIdentifier;
+ (id)playerWithFigPlayer:(struct OpaqueFigPlayer { } *)a0;
+ (id)playerWithPlayerItem:(id)a0;
+ (void)registerForScreenConnectionChanges;
+ (BOOL)worksAroundConcurrentKVOCrash;

- (void)dealloc;
- (id)init;
- (id)initWithURL:(id)a0;
- (id)dispatchQueue;
- (void)pause;
- (id)valueForUndefinedKey:(id)a0;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (BOOL)isMuted;
- (id)_items;
- (float)_rate;
- (id)currentItem;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentTime;
- (void)play;
- (float)rate;
- (void)setRate:(float)a0;
- (void)setVolume:(float)a0;
- (float)volume;
- (id)initWithDispatchQueue:(id)a0;
- (void)_removeAllItems;
- (void)setMuted:(BOOL)a0;
- (void)setMasterClock:(struct OpaqueCMClock { } *)a0;
- (struct OpaqueCMClock { } *)masterClock;
- (void)replaceCurrentItemWithPlayerItem:(id)a0;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 toleranceBefore:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 toleranceAfter:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 toleranceBefore:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 toleranceAfter:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 completionHandler:(id /* block */)a3;
- (void)setActionAtItemEnd:(long long)a0;
- (void)_addFPListeners;
- (id)_avPlayerLayers;
- (id)_nameForLogging;
- (void)_setNeroVideoGravityOnFigPlayer;
- (void)_setRateDidChangeNotificationIncludesExtendedDiagnosticPayload:(BOOL)a0;
- (void)addVideoTarget:(struct OpaqueFigVideoTarget { } *)a0;
- (void)setClosedCaptionDisplayEnabled:(BOOL)a0;
- (void)setDefaultRate:(float)a0;
- (void)_changeStatusToFailedWithError:(id)a0;
- (void)_setParticipatesInAudioSession:(BOOL)a0;
- (id)_subtitleLayers;
- (long long)actionAtItemEnd;
- (void)setRate:(float)a0 withVolumeRampDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)setSourceClock:(struct OpaqueCMClock { } *)a0;
- (void)_addItemToLinkedList_invokeOnIvarAccessQueue:(id)a0 afterItem:(id)a1;
- (void)_addLayer:(id)a0;
- (void)_addListenersToInterstitialCoordinator:(struct OpaqueFigPlayerInterstitialCoordinator { } *)a0;
- (void)_addPlayerCaptionLayer:(id)a0;
- (void)_advanceCurrentItemAccordingToFigPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a0;
- (void)_advanceToNextItem;
- (BOOL)_airPlayVideoActive;
- (id)_ancillaryPerformanceInformationForDisplay;
- (void)_applyLinkedListOfItemsToFigPlayerUsingBlock:(id /* block */)a0;
- (void)_applyPlayQueueChangesToFigPlayerWithCompletionHandler:(id /* block */)a0;
- (void)_attachClosedCaptionLayersToFigPlayer;
- (void)_attachFigPlayerToSubtitleLayers;
- (void)_attachVideoLayersToFigPlayer;
- (id)_cachedMediaSelectionCriteria;
- (BOOL)_cachedNonForcedSubtitleDisplayEnabledForCurrentItem;
- (struct CGSize { double x0; double x1; })_cachedPresentationSizeOfCurrentItem;
- (void)_canOverlapPlaybackConditionsChanged;
- (int)_cancelPendingPrerollAndRegisterPrerollCompletionHandler:(id /* block */)a0;
- (BOOL)_clientRequestedPlaybackCoordinator;
- (id)_closedCaptionLayers;
- (struct __CVBuffer { } *)_copyDisplayedPixelBuffer;
- (struct __CVBuffer { } *)_copyDisplayedPixelBuffer:(id)a0;
- (struct OpaqueFigPlayer { } *)_copyFigPlayer;
- (struct OpaqueFigPlayerInterstitialCoordinator { } *)_copyInterstitialCoordinator;
- (struct OpaqueFigPlayerInterstitialCoordinator { } *)_copyInterstitialCoordinatorIfCreated;
- (struct OpaqueFigPlayerInterstitialCoordinator { } *)_copyInterstitialEventCoordinatorEnsuringItIsRemote:(BOOL)a0;
- (id)_copyPerformanceDataForCurrentItem;
- (void)_createAndConfigureFigPlayerWithType:(long long)a0 completionHandler:(id /* block */)a1;
- (int)_createPrerollID;
- (void)_detachClosedCaptionLayersFromFigPlayer:(struct OpaqueFigPlayer { } *)a0;
- (void)_detachFigPlayerFromSubtitleLayers;
- (void)_detachVideoLayersFromFigPlayer:(struct OpaqueFigPlayer { } *)a0;
- (BOOL)_disallowsVideoLayerDisplayCompositing;
- (void)_enqueuePlayQueueModification_invokeOnIvarAccessQueue:(id)a0;
- (void)_ensureFigPlaybackCoordinatorIsConnected;
- (void)_enumerateItemsUsingBlock:(id /* block */)a0;
- (void)_evaluateDisplaySizeOfAllAttachedLayers;
- (BOOL)_externalPlaybackActive;
- (id)_externalPlaybackVideoGravity;
- (long long)_externalProtectionStatusCopiedFromFig;
- (long long)_extractFPExternalProtectionStatus:(id)a0;
- (id)_fpNotificationNames;
- (BOOL)_getDisplayVideoRange:(id *)a0 displaySize:(struct CGSize { double x0; double x1; } *)a1 refreshRate:(id *)a2;
- (BOOL)_handleSetRate:(float)a0 withVolumeRampDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 playImmediately:(BOOL)a2 rateChangeReason:(int)a3 affectsCoordinatedPlayback:(BOOL)a4;
- (BOOL)_hasCurrentInterstitialEvent;
- (void)_insertItem:(id)a0 afterItem:(id)a1;
- (id)_interstitialPlayerIfCreated;
- (struct OpaqueFigVideoTarget { } *)_interstitialVideoTargetForPrimaryVideoTarget:(struct OpaqueFigVideoTarget { } *)a0;
- (BOOL)_isAirPlayVideoActive;
- (BOOL)_isBufferedAirPlayActive;
- (BOOL)_isDisplayingClosedCaptions;
- (BOOL)_isInterstitialPlayer;
- (BOOL)_isMuted;
- (id)_items_invokeOnIvarAccessQueue;
- (void)_linkAndSyncAudioSessionWithInterstitialPlayer:(id)a0;
- (void)_logPerformanceDataForCurrentItem;
- (void)_logPerformanceDataForPreviousItem;
- (struct CGSize { double x0; double x1; })_maximumAVPlayerLayerDisplaySize;
- (id)_nameForLogging_fromIvarAccessQueue;
- (void)_noteCurrentRemoteInterstitialEvent:(id)a0;
- (void)_noteNewNonForcedSubtitleDisplayEnabledForPlayerItem:(id)a0;
- (void)_noteNewPresentationSizeForPlayerItem:(id)a0;
- (void)_noteRemoteInterstitialEvents:(id)a0 forItem:(id)a1;
- (BOOL)_participatesInAudioSession;
- (id)_pendingFigPlayerProperties;
- (id)_pendingFigPlayerPropertyForKey:(id)a0;
- (id)_performanceDictionary;
- (id)_pixelBufferAttributeMediator;
- (void)_pixelBufferAttributesDidChangeForLayer:(id)a0;
- (id)_playbackCoordinatorWithoutTriggeringFullSetup;
- (id)_playbackDisplaysForFigPlayer;
- (id)_playerCaptionLayers;
- (float)_playerVolume;
- (BOOL)_preservesAudioSessionSampleRate;
- (BOOL)_rateDidChangeNotificationIncludesExtendedDiagnosticPayload;
- (id)_rateDidChangeNotificationPayloadForAVFRateChangeReason:(id)a0 reasonIsExtendedDiagnostic:(BOOL)a1 rateChangeIdentifier:(id)a2 rateChangeOriginator:(id)a3;
- (id)_rateDidChangeNotificationPayloadForFigRateChangeReason:(int)a0 rateChangeIdentifier:(id)a1 rateChangeOriginator:(id)a2;
- (id)_rateState;
- (void)_removeAllLayers;
- (void)_removeFPListeners;
- (void)_removeItem:(id)a0;
- (void)_removeItemFromLinkedList_invokeOnIvarAccessQueue:(id)a0;
- (void)_removeLayer:(id)a0;
- (void)_removeLayer:(id)a0 videoLayer:(id)a1 closedCaptionLayer:(id)a2 subtitleLayer:(id)a3 interstitialLayer:(id)a4;
- (void)_removeListenersFromInterstitialCoordinator:(struct OpaqueFigPlayerInterstitialCoordinator { } *)a0;
- (void)_removePlayerCaptionLayer:(id)a0;
- (void)_removePropertyObserversOfCurrentItemCalledOnStateDispatchQueueChecked:(id)a0;
- (BOOL)_runOnIvarAccessQueueOperationThatMayChangeCurrentItemWithPreflightBlock:(id /* block */)a0 modificationBlock:(id /* block */)a1 error:(id *)a2;
- (void)_setActionAtItemEnd:(long long)a0 allowingAdvance:(BOOL)a1;
- (void)_setAncillaryPerformanceInformationForDisplay:(id)a0;
- (void)_setCurrentItem:(id)a0;
- (void)_setDisallowsVideoLayerDisplayCompositing:(BOOL)a0;
- (void)_setExternalPlaybackInterstitialSchedulingStrategyOnCoordinator_invokeOnIvarAccessQueue:(struct OpaqueFigPlayerInterstitialCoordinator { } *)a0;
- (void)_setFigPlaybackItemToMakeCurrent:(struct OpaqueFigPlaybackItem { } *)a0;
- (void)_setInterstitialEventCoordinator:(struct OpaqueFigPlayerInterstitialCoordinator { } *)a0;
- (void)_setInterstitialEventCoordinatorOnItemsIntegratedTimeline_invokeOnIvarAccessQueue:(struct OpaqueFigPlayerInterstitialCoordinator { } *)a0;
- (void)_setInterstitialEventCoordinator_invokeOnIvarAccessQueue:(struct OpaqueFigPlayerInterstitialCoordinator { } *)a0;
- (void)_setInterstitialPlayer:(id)a0;
- (void)_setInterstitialPlayerGuts_invokeOnIvarAccessQueue:(id)a0;
- (void)_setInterstitialPlayerOnItemsIntegratedTimeline_invokeOnIvarAccessQueue:(id)a0;
- (void)_setIsInterstitialPlayer:(BOOL)a0;
- (void)_setOptions:(id)a0 onClosedCaptionLayer:(id)a1;
- (void)_setPendingFigPlayerProperty:(id)a0 forKey:(id)a1;
- (void)_setPreservesAudioSessionSampleRate:(BOOL)a0;
- (void)_setPrimaryPlayerNameForInterstitial:(id)a0;
- (BOOL)_setRate:(float)a0 rateChangeReason:(int)a1 figPlayerSetRateHandler:(id /* block */)a2;
- (void)_setRate:(float)a0 withVolumeRampDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 playImmediately:(BOOL)a2 rateChangeReason:(int)a3 affectsCoordinatedPlayback:(BOOL)a4;
- (void)_setSeparated:(BOOL)a0 onClosedCaptionLayer:(id)a1;
- (void)_setStartupSyncIgnoresAudioDeviceLatency:(BOOL)a0;
- (void)_setSuppressesAudioRendering:(BOOL)a0;
- (void)_setUsesLegacyAutomaticWaitingBehavior:(BOOL)a0;
- (void)_setWeakReferenceToPrimaryPlayer:(id)a0;
- (BOOL)_shouldLogPerformanceData;
- (void)_startObservingPropertiesOfCurrentItem:(id)a0;
- (BOOL)_startupSyncIgnoresAudioDeviceLatency;
- (id)_stateDispatchQueue;
- (void)_stopObservingPropertiesOfCurrentItem:(id)a0;
- (BOOL)_suppressesAudioRendering;
- (id)_synchronizeWithNewCurrentItem;
- (id /* block */)_unregisterAndReturnRetainedPrerollCompletionHandler;
- (id)_updateAudioSessionOnFigPlayer;
- (void)_updateAutomaticallyWaitsToMinimizeStallingOnFigPlayer;
- (void)_updateClosedCaptionLayerBounds:(id)a0 videoRelativeToViewport:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 captionsAvoidanceMargins:(const struct NSEdgeInsets { double x0; double x1; double x2; double x3; } *)a2;
- (void)_updateCurrentItemPreferredPixelBufferAttributesAndVideoLayerSuppression;
- (void)_updateDecoderPixelBufferAttributes:(id)a0 onFigPlayer:(struct OpaqueFigPlayer { } *)a1;
- (void)_updatePixelBufferAttributesForLayer:(id)a0;
- (void)_updateProxyTimebaseFromNewCurrentItem;
- (void)_updateVideoTargetOnFigPlayer:(id)a0 synchronously:(BOOL)a1;
- (BOOL)_usesLegacyAutomaticWaitingBehavior;
- (id)_videoLayers;
- (id)_weakReference;
- (id)_weakReferenceToPrimaryPlayer;
- (id)addBoundaryTimeObserverForTimes:(id)a0 queue:(id)a1 usingBlock:(id /* block */)a2;
- (id)addPeriodicTimeObserverForInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 queue:(id)a1 usingBlock:(id /* block */)a2;
- (void)addTaggedBufferOutput:(id)a0;
- (BOOL)allowsAirPlayVideo;
- (BOOL)allowsExternalPlayback;
- (id)audioSession;
- (long long)audiovisualBackgroundPlaybackPolicy;
- (BOOL)autoSwitchStreamVariants;
- (BOOL)automaticallyWaitsToMinimizeStalling;
- (void)cancelPendingPrerolls;
- (id)closedCaptionsDisplayPublisher;
- (id)currentItemPublisher;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentUnfoldedTime;
- (id)defaultMediaSelectionCriteriaForMediaCharacteristic:(id)a0;
- (float)defaultRate;
- (BOOL)disallowsHardwareAcceleratedVideoDecoder;
- (id)expectedAssetTypes;
- (long long)externalPlaybackInterstitialSchedulingStrategy;
- (long long)externalPlaybackType;
- (id)externalPlaybackVideoGravity;
- (struct __CFString { } *)figPlayerActionForActionAtItemEnd:(long long)a0;
- (id)initWithFigPlayer:(struct OpaqueFigPlayer { } *)a0;
- (id)initWithPlayerItem:(id)a0;
- (id)interstitialPlayer;
- (BOOL)isAirPlayVideoActive;
- (BOOL)isClosedCaptionDisplayEnabled;
- (BOOL)isDisplayingClosedCaptions;
- (BOOL)isExternalPlaybackActive;
- (id)mediaSelectionCriteriaForMediaCharacteristic:(id)a0;
- (id)outputContext;
- (BOOL)outputObscuredDueToInsufficientExternalProtection;
- (void)pauseWithoutAffectingCoordinatedPlayback;
- (void)playImmediatelyAtRate:(float)a0;
- (id)playerRole;
- (void)prepareItem:(id)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)preparesItemsForPlaybackAsynchronously;
- (void)prerollAtRate:(float)a0 completionHandler:(id /* block */)a1;
- (void)prerollOperationDidComplete:(BOOL)a0 notificationPayload:(struct __CFDictionary { } *)a1;
- (id)reasonForWaitingToPlay;
- (void)removeAudioPlaybackRateLimits;
- (void)removeTaggedBufferOutput:(id)a0;
- (void)removeTimeObserver:(id)a0;
- (void)removeVideoTarget:(struct OpaqueFigVideoTarget { } *)a0;
- (void)removeVideoTarget:(struct OpaqueFigVideoTarget { } *)a0 synchronously:(BOOL)a1;
- (long long)resourceConservationLevelWhilePaused;
- (void)seekToDate:(id)a0;
- (void)seekToDate:(id)a0 completionHandler:(id /* block */)a1;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 completionHandler:(id /* block */)a1;
- (void)setActiveVideoTargetsForInterstitials:(unsigned char)a0;
- (void)setAllowsAirPlayVideo:(BOOL)a0;
- (void)setAllowsExternalPlayback:(BOOL)a0;
- (void)setAudioSession:(id)a0;
- (void)setAudiovisualBackgroundPlaybackPolicy:(long long)a0;
- (void)setAutoSwitchStreamVariants:(BOOL)a0;
- (void)setAutomaticallyWaitsToMinimizeStalling:(BOOL)a0;
- (void)setDisallowsHardwareAcceleratedVideoDecoder:(BOOL)a0;
- (void)setExpectedAssetTypes:(id)a0;
- (void)setExternalPlaybackInterstitialSchedulingStrategy:(long long)a0;
- (void)setExternalPlaybackVideoGravity:(id)a0;
- (void)setMediaSelectionCriteria:(id)a0 forMediaCharacteristic:(id)a1;
- (void)setOutputContext:(id)a0;
- (void)setPlayerRole:(id)a0;
- (void)setPlayerRole:(id)a0 synchronously:(BOOL)a1;
- (void)setPreparesItemsForPlaybackAsynchronously:(BOOL)a0;
- (void)setRate:(float)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 atHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)setRate:(float)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 atHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 options:(id)a3;
- (void)setResourceConservationLevelWhilePaused:(long long)a0;
- (void)setShouldReduceResourceUsage:(BOOL)a0;
- (void)setUsesAirPlayVideoWhileAirPlayScreenIsActive:(BOOL)a0;
- (void)setUsesExternalPlaybackWhileExternalScreenIsActive:(BOOL)a0;
- (void)setVideoOutput:(id)a0 withOwningTaggedBufferOutput:(id)a1;
- (void)setVideoRangeOverride:(id)a0;
- (BOOL)shouldReduceResourceUsage;
- (struct OpaqueCMClock { } *)sourceClock;
- (void)syncAudioSessionToInterstitialPlayer:(id)a0;
- (long long)timeControlStatus;
- (BOOL)usesAirPlayVideoWhileAirPlayScreenIsActive;
- (BOOL)usesExternalPlaybackWhileExternalScreenIsActive;
- (id)videoRangeOverride;

@end
