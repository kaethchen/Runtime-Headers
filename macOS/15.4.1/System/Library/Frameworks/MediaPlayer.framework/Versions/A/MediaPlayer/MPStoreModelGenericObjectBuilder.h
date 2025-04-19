@class MPStoreModelRadioStationBuilder, MPStoreModelPlaylistBuilder, MPStoreModelMovieBuilder, MPStoreModelAlbumBuilder, MPStoreModelTVSeasonBuilder, MPStoreModelSongBuilder, NSCountedSet, MPStoreModelTVEpisodeBuilder, MPStoreModelTVShowBuilder, MPStoreModelRecordLabelBuilder, MPStoreModelArtistBuilder;

@interface MPStoreModelGenericObjectBuilder : MPStoreModelObjectBuilder {
    NSCountedSet *_baseContentItemIDToOccurrenceCount;
    MPStoreModelAlbumBuilder *_albumBuilder;
    MPStoreModelArtistBuilder *_artistBuilder;
    MPStoreModelMovieBuilder *_movieBuilder;
    MPStoreModelPlaylistBuilder *_playlistBuilder;
    MPStoreModelSongBuilder *_songBuilder;
    MPStoreModelTVEpisodeBuilder *_tvEpisodeBuilder;
    MPStoreModelTVSeasonBuilder *_tvSeasonBuilder;
    MPStoreModelTVShowBuilder *_tvShowBuilder;
    MPStoreModelRecordLabelBuilder *_recordLabelBuilder;
    MPStoreModelRadioStationBuilder *_radioStationBuilder;
}

@property (nonatomic) BOOL shouldUsePlaylistEntry;

- (void).cxx_destruct;
- (id)_modelObjectWithUniqueContainerIDForModelObject:(id)a0;
- (id)modelObjectWithStoreItemMetadata:(id)a0 sourceModelObject:(id)a1 userIdentity:(id)a2;
- (void)setPreventStoreItemMetadataCaching:(BOOL)a0;

@end
