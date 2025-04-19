@interface _AMiTunes8UserPlaylist : _AMiTunes8Playlist

@property BOOL shared;
@property (readonly) BOOL smart;

- (id)URLTracks;
- (id)fileTracks;
- (id)sharedTracks;

@end
