@class NSString;

@interface _AMiTunes7AudioCDPlaylist : _AMiTunes7Playlist

@property (copy) NSString *artist;
@property BOOL compilation;
@property (copy) NSString *composer;
@property long long discCount;
@property long long discNumber;
@property (copy) NSString *genre;
@property long long year;

- (id)audioCDTracks;

@end
