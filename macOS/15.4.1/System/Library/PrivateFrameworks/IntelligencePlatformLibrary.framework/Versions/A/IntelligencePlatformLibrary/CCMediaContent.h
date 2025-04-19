@class CCMediaMovie, CCMediaAudiobook, CCMediaSongArtist, CCMediaAudiobookArtist, CCMediaAlbum, CCMediaTVShow, CCMediaPlaylist, CCMediaGenre, CCMediaSong, CCMediaMusicVideo, CCMediaAlbumArtist, CCMediaTVEpisode;

@interface CCMediaContent : CCItemMessage <CCItemContent, CCItemFieldEnumerable, CCJSONDescribing>

@property (readonly, nonatomic) CCMediaAlbumArtist *albumArtist;
@property (readonly, nonatomic) CCMediaSongArtist *songArtist;
@property (readonly, nonatomic) CCMediaAlbum *album;
@property (readonly, nonatomic) CCMediaGenre *genre;
@property (readonly, nonatomic) CCMediaSong *song;
@property (readonly, nonatomic) CCMediaPlaylist *playlist;
@property (readonly, nonatomic) CCMediaMusicVideo *musicVideo;
@property (readonly, nonatomic) CCMediaTVShow *TVShow;
@property (readonly, nonatomic) CCMediaTVEpisode *TVEpisode;
@property (readonly, nonatomic) CCMediaMovie *movie;
@property (readonly, nonatomic) CCMediaAudiobookArtist *audiobookArtist;
@property (readonly, nonatomic) CCMediaAudiobook *audiobook;
@property (readonly, nonatomic) unsigned int entityType;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initWithEntity:(id)a0 entityType:(unsigned int)a1 error:(id *)a2;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;

@end
