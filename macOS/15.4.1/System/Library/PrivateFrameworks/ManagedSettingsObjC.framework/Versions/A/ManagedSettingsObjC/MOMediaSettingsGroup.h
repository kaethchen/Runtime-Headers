@class MOIntegerSettingMetadata, NSNumber, MOBoolSettingMetadata;

@interface MOMediaSettingsGroup : MOSettingsGroup

@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyBookstoreMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyBookstoreEroticaMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyExplicitContentMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyiTunesMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyMusicArtistActivityMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyMusicServiceMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyMusicVideosMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyPodcastsMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denySharedMediaLibrariesMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *lockSpeakerVolumeLimitMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *lockTVProviderMetadata;
@property (class, readonly, nonatomic) MOIntegerSettingMetadata *maximumMovieRatingMetadata;
@property (class, readonly, nonatomic) MOIntegerSettingMetadata *maximumTVShowRatingMetadata;

@property (retain, nonatomic) NSNumber *denyBookstore;
@property (retain, nonatomic) NSNumber *denyBookstoreErotica;
@property (retain, nonatomic) NSNumber *denyExplicitContent;
@property (retain, nonatomic) NSNumber *denyiTunes;
@property (retain, nonatomic) NSNumber *denyMusicArtistActivity;
@property (retain, nonatomic) NSNumber *denyMusicService;
@property (retain, nonatomic) NSNumber *denyMusicVideos;
@property (retain, nonatomic) NSNumber *denyPodcasts;
@property (retain, nonatomic) NSNumber *denySharedMediaLibraries;
@property (retain, nonatomic) NSNumber *lockSpeakerVolumeLimit;
@property (retain, nonatomic) NSNumber *lockTVProvider;
@property (retain, nonatomic) NSNumber *maximumMovieRating;
@property (retain, nonatomic) NSNumber *maximumTVShowRating;

+ (id)groupName;

@end
