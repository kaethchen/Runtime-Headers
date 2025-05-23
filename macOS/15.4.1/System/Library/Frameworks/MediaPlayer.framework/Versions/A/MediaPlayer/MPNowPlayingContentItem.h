@class MPNowPlayingInfoAudioRoute, NSString, NSArray, MPMediaItemArtwork, MPNowPlayingInfoAudioFormat, MPNowPlayingInfoLyricsItem, NSDictionary, NSDate;
@protocol MPNowPlayingContentItemArtworkDataSource;

@interface MPNowPlayingContentItem : MPContentItem <NSCopying> {
    NSDictionary *_nowPlayingInfo;
    BOOL _didSetElapsedTime;
}

@property (copy, nonatomic) NSString *info;
@property (copy, nonatomic) NSArray *availableLanguageOptions;
@property (copy, nonatomic) NSArray *currentLanguageOptions;
@property (copy, nonatomic) NSArray *sections;
@property (copy, nonatomic) MPNowPlayingInfoLyricsItem *lyrics;
@property (retain, nonatomic) MPMediaItemArtwork *artwork;
@property (nonatomic) double startTime;
@property (nonatomic) double elapsedTime;
@property (nonatomic) float playbackRate;
@property (nonatomic) long long storeAlbumID;
@property (nonatomic) long long storeArtistID;
@property (nonatomic) long long storeID;
@property (nonatomic) long long storeSubscriptionID;
@property (nonatomic) long long legacyUniqueID;
@property (nonatomic) long long reportingAdamID;
@property (nonatomic) long long lyricsAdamID;
@property (nonatomic) long long storeAlbumArtistID;
@property (nonatomic) unsigned long long mediaType;
@property (copy, nonatomic) NSDictionary *deviceSpecificUserInfo;
@property (copy, nonatomic) NSDictionary *nowPlayingInfo;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (nonatomic, getter=isSharableItem) BOOL sharableItem;
@property (nonatomic, getter=isAdvertisement) BOOL advertisement;
@property (nonatomic, getter=isSteerable) BOOL steerable;
@property (nonatomic) long long episodeType;
@property (readonly, nonatomic) NSDictionary *auxiliaryNowPlayingInfo;
@property (nonatomic, getter=isLoading) BOOL loading;
@property (retain, nonatomic) id<MPNowPlayingContentItemArtworkDataSource> artworkDataSource;
@property (copy, nonatomic) NSArray *transcriptAlignments;
@property (copy, nonatomic) NSDictionary *collectionInfo;
@property (readonly, nonatomic) double calculatedElapsedTime;
@property (nonatomic) unsigned long long songTraits;
@property (nonatomic) unsigned long long albumTraits;
@property (nonatomic) unsigned long long playlistTraits;
@property (copy, nonatomic) MPNowPlayingInfoAudioFormat *preferredFormat;
@property (copy, nonatomic) MPNowPlayingInfoAudioFormat *activeFormat;
@property (nonatomic) long long activeFormatJustification;
@property (nonatomic) unsigned long long formatTierPreference;
@property (copy, nonatomic) MPNowPlayingInfoAudioRoute *audioRoute;
@property (copy, nonatomic) NSArray *alternativeFormats;
@property (nonatomic, getter=isExplicitItem) BOOL explicitItem;
@property (copy, nonatomic) NSString *artworkURL;
@property (copy, nonatomic) NSArray *artworkURLTemplates;
@property (copy, nonatomic) NSString *albumName;
@property (copy, nonatomic) NSString *trackArtistName;
@property (copy, nonatomic) NSString *albumArtistName;
@property (copy, nonatomic) NSString *directorName;
@property (copy, nonatomic) NSString *composerName;
@property (copy, nonatomic) NSString *genreName;
@property (copy, nonatomic) NSString *seriesName;
@property (nonatomic) long long seasonNumber;
@property (nonatomic) long long episodeNumber;
@property (nonatomic) long long discNumber;
@property (nonatomic) long long totalDiscCount;
@property (nonatomic) long long trackNumber;
@property (nonatomic) long long totalTrackCount;
@property (copy, nonatomic) NSString *albumYear;
@property (copy, nonatomic) NSDate *releaseDate;
@property (copy, nonatomic) NSString *localizedContentRating;
@property (copy, nonatomic) NSString *subtitleShort;
@property (copy, nonatomic) NSString *collectionIdentifier;
@property (copy, nonatomic) NSString *profileIdentifier;
@property (copy, nonatomic) NSString *associatedParticipantIdentifier;
@property (nonatomic) long long playlistType;
@property (nonatomic) long long radioStationType;
@property (copy, nonatomic) NSString *radioStationName;
@property (copy, nonatomic) NSString *radioStationStringIdentifier;
@property (copy, nonatomic) NSString *externalContentIdentifier;
@property (copy, nonatomic) NSString *serviceIdentifier;
@property (nonatomic) long long numberOfChildren;
@property (nonatomic) long long playCount;
@property (nonatomic) double duration;
@property (nonatomic) float defaultPlaybackRate;
@property (nonatomic, getter=isAlwaysLiveItem) BOOL alwaysLiveItem;
@property (nonatomic, getter=isInTransition) BOOL inTransition;
@property (copy, nonatomic) NSString *localizedDurationString;
@property (copy, nonatomic) NSString *durationStringLocalizationKey;
@property (readonly, nonatomic) double elapsedTimeTimestamp;
@property (nonatomic) long long editingStyleFlags;
@property (nonatomic) BOOL hasArtwork;
@property (copy, nonatomic) NSString *artworkIdentifier;
@property (copy, nonatomic) NSArray *supportedRemoteArtworkFormats;
@property (copy, nonatomic) NSDictionary *remoteArtworks;
@property (nonatomic) BOOL hasDescription;
@property (nonatomic) BOOL hasLanguageOptions;
@property (nonatomic) BOOL hasLyrics;

+ (BOOL)shouldPushArtworkData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)setArtwork:(id)a0;
- (void)_mergeContentItem:(id)a0;
- (id)copyWithNewIdentifier:(id)a0;
- (BOOL)hasTranscriptAlignments;
- (void)invalidateArtwork;
- (void)invalidateDescription;
- (void)invalidateLanguageOptions;
- (void)invalidateLyrics;
- (void)invalidateSections;
- (void)invalidateTranscriptAlignments;
- (void)setElapsedTime:(double)a0 playbackRate:(float)a1;
- (void)setHasTranscriptAlignments:(BOOL)a0;

@end
