@class MPModelTVEpisode, MPModelMovie, NSString, MPModelPlaylist, MPModelSocialPerson, MPArtworkCatalog, MPModelSong;

@interface MPModelPlaylistEntry : MPModelObject

@property (retain, nonatomic) MPModelPlaylist *playlist;
@property (nonatomic) long long position;
@property (retain, nonatomic) MPModelSong *song;
@property (retain, nonatomic) MPModelTVEpisode *tvEpisode;
@property (retain, nonatomic) MPModelMovie *movie;
@property (retain, nonatomic) MPModelSocialPerson *socialContributor;
@property (retain, nonatomic) NSString *universalIdentifier;
@property (retain, nonatomic) NSString *positionUniversalIdentifier;
@property (retain, nonatomic) MPArtworkCatalog *_artworkCatalog;

+ (id)__tvEpisode_KEY;
+ (void)__MPModelPropertyPlaylistEntryPositionUniversalIdentifier__MAPPING_MISSING__;
+ (void)__MPModelPropertyPlaylistEntryPosition__MAPPING_MISSING__;
+ (void)__MPModelPropertyPlaylistEntryUniversalIdentifier__MAPPING_MISSING__;
+ (void)__MPModelRelationshipPlaylistEntryMovie__MAPPING_MISSING__;
+ (void)__MPModelRelationshipPlaylistEntryPlaylist__MAPPING_MISSING__;
+ (void)__MPModelRelationshipPlaylistEntrySocialContributor__MAPPING_MISSING__;
+ (void)__MPModelRelationshipPlaylistEntrySong__MAPPING_MISSING__;
+ (void)__MPModelRelationshipPlaylistEntryTVEpisode__MAPPING_MISSING__;
+ (void)___MPModelPropertyPlaylistEntryArtwork__MAPPING_MISSING__;
+ (id)___artworkCatalog_KEY;
+ (id)__movie_KEY;
+ (id)__playlist_KEY;
+ (id)__positionUniversalIdentifier_KEY;
+ (id)__position_KEY;
+ (id)__socialContributor_KEY;
+ (id)__song_KEY;
+ (id)__universalIdentifier_KEY;
+ (long long)genericObjectType;
+ (id)kindWithKinds:(id)a0;
+ (id)newUniversalIdentifier;
+ (id)requiredStoreLibraryPersonalizationProperties;

- (id)anyObject;
- (long long)type;
- (id)humanDescription;
- (id)mediaItemPropertyValues;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)a0;
- (id)personalizationScopedPropertiesForProperties:(id)a0;
- (id)relativeModelObjectForStoreLibraryPersonalization;

@end
