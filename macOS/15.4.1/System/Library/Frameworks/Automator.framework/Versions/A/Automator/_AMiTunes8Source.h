@interface _AMiTunes8Source : _AMiTunes8Item

@property (readonly) long long capacity;
@property (readonly) long long freeSpace;
@property (readonly) int kind;

- (void)update;
- (void)eject;
- (id)playlists;
- (id)devicePlaylists;
- (id)audioCDPlaylists;
- (id)libraryPlaylists;
- (id)radioTunerPlaylists;
- (id)userPlaylists;

@end
