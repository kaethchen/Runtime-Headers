@interface ILiTunesMediaManager : ILMediaManager

+ (id)sharedMediaManager;

- (id)init;
- (id)_init;
- (id)modificationDate;
- (id)albumArtworkForTrack:(id)a0;
- (id)dBasePath;
- (id)dictionaryWithPlaylists:(id)a0;
- (id)dictionaryWithSongs:(id)a0;
- (id)iTunesApplicationVersion;
- (id)playlistsInDictionary:(id)a0;

@end
