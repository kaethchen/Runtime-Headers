@class NSArray, AVAssetTrack, NSString, AVPlayerItemTrackInternal;

@interface AVPlayerItemTrack : NSObject {
    AVPlayerItemTrackInternal *_playerItemTrack;
}

@property (readonly, nonatomic) NSArray *outputs;
@property (readonly, nonatomic) AVAssetTrack *assetTrack;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) float currentVideoFrameRate;
@property (copy, nonatomic) NSString *videoFieldMode;

+ (id)playerItemTrackWithFigPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a0 readyForInspection:(BOOL)a1 trackID:(int)a2 asset:(id)a3 playerItem:(id)a4;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)removeOutput:(id)a0;
- (int)trackID;
- (void)addOutput:(id)a0;
- (void)_attachToFigPlaybackItemOfPlayerItem:(id)a0;
- (BOOL)_figPlaybackItemIsReadyForInspection;
- (id)_initWithFigPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a0 readyForInspection:(BOOL)a1 trackID:(int)a2 asset:(id)a3 playerItem:(id)a4;
- (id)_playerItem;
- (void)_respondToFigPlaybackItemBecomingReadyForInpection;
- (void)_transferActiveHapticChannelIndexToFig;
- (void)_transferDisableColorMatchingToFig;
- (void)_transferEnabledToFig;
- (void)_transferHapticVolumeToFig;
- (void)_transferLoudnessInfoToFig;
- (void)_transferMutesHapticsToFig;
- (void)_transferVideoEnhancementOptionsToFig;
- (void)_transferVideoFieldModeToFig;
- (void)_updateTrackExtractionIDArrayProperty;
- (id)_weakReferenceToPlayerItem;
- (long long)activeHapticChannelIndex;
- (BOOL)disableColorMatching;
- (int)effectiveEQPreset;
- (id)effectiveLoudnessInfo;
- (id)fallbackTrack;
- (float)hapticVolume;
- (id)loudnessInfo;
- (BOOL)mutesHaptics;
- (void)setActiveHapticChannelIndex:(long long)a0;
- (void)setDisableColorMatching:(BOOL)a0;
- (void)setHapticVolume:(float)a0;
- (void)setLoudnessInfo:(id)a0;
- (void)setMutesHaptics:(BOOL)a0;
- (void)setVideoEnhancementFilterOptions:(id)a0;
- (id)videoEnhancementFilterOptions;
- (BOOL)willTrimShortDurationAudioSamples;

@end
