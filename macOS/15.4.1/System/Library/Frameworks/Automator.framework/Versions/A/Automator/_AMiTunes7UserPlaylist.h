@interface _AMiTunes7UserPlaylist : _AMiTunes7Playlist

@property BOOL shared;
@property (readonly) BOOL smart;

- (id)URLTracks;
- (id)fileTracks;
- (id)sharedTracks;

@end
