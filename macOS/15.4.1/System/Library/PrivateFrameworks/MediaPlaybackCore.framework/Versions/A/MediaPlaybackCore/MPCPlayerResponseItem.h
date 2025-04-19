@class NSString, NSArray, MPNowPlayingInfoAudioFormat, MPModelGenericObject, MPCPlayerResponseParticipant, MPCPlayerResponse, MPCPlayerAudioFormat, MPCPlayerAudioRoute, NSIndexPath;
@protocol MPCPlayerResponseItemMusicAudio;

@interface MPCPlayerResponseItem : NSObject <MPCPlayerResponseItemMusicAudio> {
    unsigned long long _seekSupport;
    BOOL _isFavoritable;
}

@property (readonly, weak, nonatomic) MPCPlayerResponse *response;
@property (readonly, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic) MPModelGenericObject *metadataObject;
@property (readonly, nonatomic) MPCPlayerResponseParticipant *enqueueingParticipant;
@property (readonly, nonatomic, getter=isPlaceholder) BOOL placeholder;
@property (readonly, nonatomic, getter=isAutoPlay) BOOL autoPlay;
@property (readonly, copy, nonatomic) NSString *contentItemIdentifier;
@property (readonly, copy, nonatomic) NSString *queueItemIdentifier;
@property (readonly, nonatomic) long long revision;
@property (readonly, nonatomic) struct { double snapshotTime; double startTime; double endTime; double duration; double elapsedDuration; float rate; float defaultRate; BOOL isLiveContent; BOOL isLoading; BOOL isInTransition; } duration;
@property (readonly, copy, nonatomic) NSString *localizedDurationString;
@property (readonly, copy, nonatomic) NSString *explicitBadge;
@property (readonly, nonatomic) NSArray *languageOptionGroups;
@property (readonly, nonatomic) id<MPCPlayerResponseItemMusicAudio> musicAudio;
@property (readonly, copy, nonatomic) MPNowPlayingInfoAudioFormat *nowPlayingAudioFormat;
@property (readonly, nonatomic) MPCPlayerAudioFormat *preferredFormat;
@property (readonly, nonatomic) MPCPlayerAudioFormat *activeFormat;
@property (readonly, nonatomic) unsigned long long preferredTiers;
@property (readonly, nonatomic) long long activeFormatJustification;
@property (readonly, nonatomic) NSArray *alternateFormats;
@property (readonly, nonatomic) MPCPlayerAudioRoute *audioRoute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)remove;
- (id)_stateDumpObject;
- (id)dislikeCommand;
- (id)likeCommand;
- (id)wishlistCommand;
- (id)_buildLanguageOptionGroups:(id)a0 currentLanguageOptions:(id)a1;
- (unsigned long long)_determineSeekSupport;
- (id)_favoriteCommandWithMediaRemoteCommand:(unsigned int)a0;
- (id)_feedbackCommandWithMediaRemoteCommand:(unsigned int)a0;
- (id)_initWithContentItemID:(id)a0 autoPlay:(BOOL)a1;
- (BOOL)_isDisliked;
- (BOOL)_isDislikedValueForSong:(id)a0;
- (BOOL)_isFavoriteEligible;
- (BOOL)_isFavoriteValueForSong:(id)a0;
- (BOOL)_isFavorited;
- (id)_modelSongMetadataObject;
- (id)initWithModelGenericObject:(id)a0 indexPath:(id)a1 enqueueingParticipant:(id)a2 response:(id)a3;
- (id)playbackRateCommand;
- (id)rateCommand;
- (id)seekCommand;
- (id)switchToAlternativeFormat:(id)a0;

@end
